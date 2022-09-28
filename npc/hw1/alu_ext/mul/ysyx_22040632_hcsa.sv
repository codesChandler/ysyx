module ysyx_22040632_hcsa(
  input [1:0] in,
  output cout,s

);
wire a,b;
assign a=in[0];
assign b=in[1];
assign s = a ^ b ;
assign cout = a & b;  //进位
endmodule