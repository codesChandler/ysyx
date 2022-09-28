module ysyx_22040632_itag_array(
  input logic clk,
  input logic rrst_n,
  input logic [20:0] addr_tag,
  input logic [4:0] addr_index,
  input logic wen,
  input logic w_way,//1'b0 for first way;1'b1 for second way
  input logic fence_sig,
  output logic hit_1st,
  output logic hit_2nd,
  output logic age_1st,
  output logic age_2nd
);

logic [31:0][22:0] tag_array_1stway;
logic [31:0][22:0] tag_array_2ndway;//{1'b age bit,1'b valid bit,21'b tag bits}

assign hit_1st=(addr_tag==tag_array_1stway[addr_index][20:0] && tag_array_1stway[addr_index][21]) ? 1'b1 :1'b0;
assign hit_2nd=(addr_tag==tag_array_2ndway[addr_index][20:0] && tag_array_2ndway[addr_index][21]) ? 1'b1 :1'b0;

assign age_1st=tag_array_1stway[addr_index][22];
assign age_2nd=tag_array_2ndway[addr_index][22];

/**********read***********/
genvar i,j;
generate
  for(i=0;i<32;i++)
    always_ff @(posedge clk or negedge rrst_n)
    begin
      if(!rrst_n || fence_sig)
        tag_array_1stway[i][22] <=1'b0;
      else if(hit_1st && i[4:0]==addr_index)
        tag_array_1stway[addr_index][22] <=1'b1;
      else if(hit_2nd && i[4:0]==addr_index)
        tag_array_1stway[addr_index][22] <=1'b0;
      else
        tag_array_1stway[i][22] <= tag_array_1stway[i][22];
    end
endgenerate

generate
  for(j=0;j<32;j++)
    always_ff @(posedge clk or negedge rrst_n)
    begin
      if(!rrst_n|| fence_sig)
        tag_array_2ndway[j][22] <=1'b0;
      else if(hit_1st && j[4:0]==addr_index)
        tag_array_2ndway[addr_index][22] <=1'b0;
      else if(hit_2nd && j[4:0]==addr_index)
        tag_array_2ndway[addr_index][22] <=1'b1;
      else
        tag_array_2ndway[j][22] <= tag_array_2ndway[j][22];
    end
endgenerate


/***************write************/

logic wen_1st,wen_2nd;
assign wen_1st=!wen & ~w_way;
assign wen_2nd=!wen & w_way;
genvar n,m;

generate
for(n=0;n<32;n++)
  always_ff @(posedge clk or negedge rrst_n)
  begin
    if(!rrst_n || fence_sig)
      tag_array_1stway[n][21:0] <='b0;
    else if(wen_1st && n[4:0]==addr_index)
      tag_array_1stway[addr_index][21:0] <={1'b1,addr_tag};
    else
      tag_array_1stway[n][21:0] <= tag_array_1stway[n][21:0];
  end
endgenerate

generate
for(m=0;m<32;m++)
  always_ff @(posedge clk or negedge rrst_n)
  begin
    if(!rrst_n || fence_sig)
      tag_array_2ndway[m][21:0] <='b0;
    else if(wen_2nd && m[4:0]==addr_index)
      tag_array_2ndway[addr_index][21:0] <={1'b1,addr_tag};
    else
      tag_array_2ndway[m][21:0] <= tag_array_2ndway[m][21:0];
  end
endgenerate

endmodule