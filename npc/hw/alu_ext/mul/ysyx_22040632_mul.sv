module ysyx_22040632_mul(
  input logic clk,
  input logic rst_n,
  ysyx_22040632_mulif.mulunit mif
);

logic rrst_n;
always_ff @(posedge clk)
  rrst_n <= rst_n;

logic [64:0] mtpl;
logic [63:0] mtplc;

assign mtpl  = mif.mulw?{{32{1'b0}},mif.multiplier[31:0],1'b0}:{mif.multiplier,1'b0};
assign mtplc = mif.mulw?{{32{1'b0}},mif.multiplicand[31:0]}:mif.multiplicand;

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
    ysyx_22040632_booth ysyx_22040632_booth_i(.in_y(mtpl[(0+i*2)+:3]),.in_x({{64{1'b0}},mtplc}),.index(len[i]),.c(c_beta[i]),.p(product_beta[i]));
endgenerate

ysyx_22040632_boothu ysyx_22040632_boothu_i15(.in_y(mtpl[30+:3]),.in_x({{64{1'b0}},mtplc}),.index(5'd15),.c(c_u_15),.p(product_u_15));
ysyx_22040632_boothu ysyx_22040632_boothu_i31(.in_y(mtpl[62+:3]),.in_x({{64{1'b0}},mtplc}),.index(5'd31),.c(c_u_31),.p(product_u_31));

genvar w;
generate 
  for(w=0;w<15;w++) begin
    assign c[w]=c_beta[w];
    assign product[w]=product_beta[w];end
endgenerate

assign c[15]=mif.mul_signed[0]?c_beta[15]:c_u_15;
assign product[15]=mif.mul_signed[0]?product_beta[15]:product_u_15;

genvar v;
generate 
  for(v=16;v<31;v++)begin
    assign c[v]=c_beta[v];
    assign product[v]=product_beta[v];end
endgenerate

assign c[31]=mif.mul_signed[0]?c_beta[31]:c_u_31;
assign product[31]=mif.mul_signed[0]?product_beta[31]:product_u_31;



//switch
logic [127:0][31:0] input_walloc ;

genvar k;
generate 
  for(k=0;k<128;k++)
    assign input_walloc[k]={product[31][k],product[30][k],product[29][k],product[28][k],product[27][k],product[26][k],product[25][k],product[24][k],product[23][k],product[22][k],product[21][k],product[20][k],product[19][k],product[18][k],product[17][k],product[16][k],product[15][k],product[14][k],product[13][k],product[12][k],product[11][k],product[10][k],product[9][k],product[8][k],product[7][k],product[6][k],product[5][k],product[4][k],product[3][k],product[2][k],product[1][k],product[0][k]};
endgenerate

//walloc tree
logic [127:0][29:0] cin/*verilator split_var*/;
logic [127:0][29:0] cout_group /*verilator split_var*/;

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
assign mif.result_lo=mif.mulw?{{32{result[31]}},result[31:0]}:result[63:0];
assign mif.result_hi=result[127:64];

endmodule