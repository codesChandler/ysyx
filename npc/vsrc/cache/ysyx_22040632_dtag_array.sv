module ysyx_22040632_dtag_array(
  input  logic clk,
  input  logic rrst_n,
  input  logic [20:0] addr_tag,
  input  logic [4:0] addr_index,
  input  logic wen,
  input  logic w_way,//1'b0 for first way;1'b1 for second way
  input  logic dirty_write,
  input  logic flush_tag_f,
  output logic hit_1st,
  output logic hit_2nd,
  output logic age_1st,
  output logic age_2nd,
  output logic dirty_1st,
  output logic dirty_2nd,
  output logic [20:0] tag_read,
  output logic [31:0] dirty_array_1st,
  output logic [31:0] dirty_array_2nd
);
logic [23:0] tag;
assign tag=dtag_array_1stway[0];
logic [31:0][23:0] dtag_array_1stway ;
logic [31:0][23:0] dtag_array_2ndway ;//{1'b age bit,1'b dirty bit,1'b valid bit,21'b tag bits}

genvar k;
generate
  for(k=0;k<32;k++) 
  begin
    assign dirty_array_1st[k]=dtag_array_1stway[k][22];
    assign dirty_array_2nd[k]=dtag_array_2ndway[k][22];
  end
endgenerate

assign hit_1st=(addr_tag==dtag_array_1stway[addr_index][20:0] && dtag_array_1stway[addr_index][21]) ? 1'b1 :1'b0;
assign hit_2nd=(addr_tag==dtag_array_2ndway[addr_index][20:0] && dtag_array_2ndway[addr_index][21]) ? 1'b1 :1'b0;

assign age_1st=dtag_array_1stway[addr_index][23];
assign age_2nd=dtag_array_2ndway[addr_index][23];

assign dirty_1st=dtag_array_1stway[addr_index][22];
assign dirty_2nd=dtag_array_2ndway[addr_index][22];

assign tag_read=w_way?dtag_array_2ndway[addr_index][20:0]:dtag_array_1stway[addr_index][20:0];

/**********read***********/
genvar i,j;
generate
  for(i=0;i<32;i++)
    always_ff @(posedge clk or negedge rrst_n)
    begin
      if(!rrst_n || flush_tag_f)
        dtag_array_1stway[i][23] <=1'b0;
      else if(hit_1st && i[4:0]==addr_index)
        dtag_array_1stway[addr_index][23] <=1'b1;
      else if(hit_2nd && i[4:0]==addr_index)
        dtag_array_1stway[addr_index][23] <=1'b0;
      else
        dtag_array_1stway[i][23] <= dtag_array_1stway[i][23];
    end
endgenerate

generate
  for(j=0;j<32;j++)
    always_ff @(posedge clk or negedge rrst_n)
    begin
      if(!rrst_n || flush_tag_f)
        dtag_array_2ndway[j][23] <=1'b0;
      else if(hit_1st && j[4:0]==addr_index)
        dtag_array_2ndway[addr_index][23] <=1'b0;
      else if(hit_2nd && j[4:0]==addr_index)
        dtag_array_2ndway[addr_index][23] <=1'b1;
      else
        dtag_array_2ndway[j][23] <= dtag_array_1stway[j][23];
    end
endgenerate

/***************write************/

logic wen_1st,wen_2nd;
assign wen_1st=(!wen & ~w_way & !hit_1st & !hit_2nd) || (!wen & hit_1st & !hit_2nd);
assign wen_2nd=(!wen & w_way  & !hit_1st & !hit_2nd) || (!wen & hit_2nd & !hit_1st);
genvar n,m;

generate
for(n=0;n<32;n++)
  always_ff @(posedge clk or negedge rrst_n)
  begin
    if(!rrst_n || flush_tag_f)
      dtag_array_1stway[n][22:0] <='b0;
    else if(wen_1st && n[4:0]==addr_index)
      dtag_array_1stway[addr_index][22:0] <={dirty_write,1'b1,addr_tag};
    else
      dtag_array_1stway[n][22:0] <= dtag_array_1stway[n][22:0];
  end
endgenerate

generate
for(m=0;m<32;m++)
  always_ff @(posedge clk or negedge rrst_n)
  begin
    if(!rrst_n || flush_tag_f)
      dtag_array_2ndway[m][22:0] <='b0;
    else if(wen_2nd && m[4:0]==addr_index)
      dtag_array_2ndway[addr_index][22:0] <={dirty_write,1'b1,addr_tag};
    else
      dtag_array_2ndway[m][22:0] <= dtag_array_2ndway[m][22:0];
  end
endgenerate

endmodule