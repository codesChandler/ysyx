module ysyx_22040632_csa(
  input [2:0] in,/* verilator lint_off UNOPTFLAT */
  output cout,s

);
wire a,b,cin;
assign a=in[2];
assign b=in[1];
assign cin=in[0];
assign s = a ^ b ^ cin;
assign cout = a & b | b & cin | a & cin;//进位
endmodule