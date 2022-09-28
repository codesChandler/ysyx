module ysyx_22040632_mul(
  ysyx_22040632_mulif.mulunit mif
);



logic [64:0] mtpl;
logic [63:0] mtplc;

always_comb begin
  if(mif.mulw)
    begin
      if(mif.mul_signed[0])
        mtpl  ={{32{mif.multiplier[31]}},mif.multiplier[31:0],1'b0};
      else 
        mtpl  ={{32{1'b0}},mif.multiplier[31:0],1'b0};
    end
  else
    mtpl  = {mif.multiplier,1'b0};
end

always_comb begin
    if(mif.mulw)
    begin
      if(mif.mul_signed[1])
        mtplc ={{32{mif.multiplicand[31]}},mif.multiplicand[31:0]};
      else 
        mtplc ={{32{1'b0}},mif.multiplicand[31:0]};
    end
    else
      mtplc =mif.multiplicand;
end

//booth algorithm
logic [31:0][127:0] product_beta ;
logic [31:0][127:0] product      ;
logic [127:0] product_u_15,product_u_31;

logic [31:0] c_beta;
logic [31:0] c;
logic c_u_15,c_u_31;
logic [31:0][4:0] len;

genvar n;
generate 
  for(n=0;n<32;n++)
    assign len[n]=n;
endgenerate  

genvar i;
generate 
  for(i=0;i<32;i++)
    ysyx_22040632_booth ysyx_22040632_booth_i(.in_y(mtpl[(0+i*2)+:3]),.in_x({{64{mtplc[63]}},mtplc}),.index(len[i]),.c(c_beta[i]),.p(product_beta[i]));
endgenerate

ysyx_22040632_boothu ysyx_22040632_boothu_i15(.in_y(mtpl[30+:3]),.in_x({{64{mtplc[63]}},mtplc}),.index(5'd15),.c(c_u_15),.p(product_u_15));
ysyx_22040632_boothu ysyx_22040632_boothu_i31(.in_y(mtpl[62+:3]),.in_x({{64{mtplc[63]}},mtplc}),.index(5'd31),.c(c_u_31),.p(product_u_31));

genvar w;
generate 
  for(w=0;w<15;w++) begin
    assign c[w]=c_beta[w];
    assign product[w]=product_beta[w];end
endgenerate

always_comb begin
  case({mif.mul_signed[0],mif.mulw})
    2'b00:c[15]=c_beta[15];
    2'b01:c[15]=c_u_15;
    2'b10:c[15]=c_beta[15];
    2'b11:c[15]=c_beta[15];
  endcase
end

always_comb begin
  case({mif.mul_signed[0],mif.mulw})
    2'b00:product[15]=product_beta[15];
    2'b01:product[15]=product_u_15;
    2'b10:product[15]=product_beta[15];
    2'b11:product[15]=product_beta[15];
  endcase
end

genvar v;
generate 
  for(v=16;v<31;v++)begin
    assign c[v]=c_beta[v];
    assign product[v]=product_beta[v];end
endgenerate

assign c[31]=mif.mul_signed[0]?c_beta[31]:c_u_31;
assign product[31]=mif.mul_signed[0]?product_beta[31]:product_u_31;

//for test booth algorithm
// logic [4:0] cnt;
// logic flag;
// logic [63:0] result_hi,result_lo;
// always_ff @(posedge clk or negedge rrst_n)
// if(!rrst_n || mif.flush)
// {result_hi,result_lo} <='0;
// else if(flag)
// {result_hi,result_lo} <= {result_hi,result_lo};
// else
// {result_hi,result_lo} <= {result_hi,result_lo}+product[cnt]+c[cnt];

// always_ff @(posedge clk or negedge rrst_n)
// if(!rrst_n || mif.flush)
// cnt <='0;
// else
// cnt <= cnt+5'd1;

// always_ff @(posedge clk or negedge rrst_n)
// if(!rrst_n || mif.flush)
// flag <='0;
// else if(cnt==5'd31)
// flag <='1;
// else
// flag <=flag;

// switch
logic [127:0][31:0] input_walloc ;

genvar k;
generate 
  for(k=0;k<128;k++)
    assign input_walloc[k]={product[31][k],product[30][k],product[29][k],product[28][k],product[27][k],product[26][k],product[25][k],product[24][k],product[23][k],product[22][k],product[21][k],product[20][k],product[19][k],product[18][k],product[17][k],product[16][k],product[15][k],product[14][k],product[13][k],product[12][k],product[11][k],product[10][k],product[9][k],product[8][k],product[7][k],product[6][k],product[5][k],product[4][k],product[3][k],product[2][k],product[1][k],product[0][k]};
endgenerate

//walloc tree
logic [127:0][29:0] cin;
logic [127:0][29:0] cout_group;

assign cin[0]=c[29:0];
genvar m;
generate
  for(m=1;m<128;m++)
    assign cin[m]=cout_group[m-1];
endgenerate

logic [128:0] cout;
logic [127:0] s;
assign cout[0]=c[30];

genvar j;
generate 
  for(j=0;j<128;j++)
    ysyx_22040632_walloc_32bits ysyx_22040632_walloc_32bits_i(.src_in(input_walloc[j]),.cin(cin[j]),.cout_group(cout_group[j]),.cout(cout[j+1]),.s(s[j]));
endgenerate

logic [127:0] result;
assign result=s+cout[127:0]+{{127{1'b0}},c[31]};
assign mif.result_lo=result[63:0];//mif.mulw?{{32{result[31]}},result[31:0]}:result[63:0];
assign mif.result_hi=result[127:64];

endmodule
