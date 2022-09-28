module ysyx_22040632_idata_array(
  input logic clk,
  input logic rrst_n,
  input logic wen,
  input logic w_way,//1'b0 for first way;1'b1 for second way
  input logic [4:0] addr_index,
  input logic [5:4] addr_inside,
  input logic [127:0] mask,
  input logic [127:0] data_write,
  output logic [127:0] data_out_1stway,data_out_2ndway
);

logic [6:0] index;
logic [2:0] w_cnt;
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || wen)
    w_cnt <= '0;
  else if(!wen)
    w_cnt <= w_cnt + 3'd1;
end

always_comb
begin
  if(wen)
    index={addr_index,addr_inside[5:4]};
  else 
    case(w_cnt)
      3'd0,3'd1:index={addr_index,2'b00};
      3'd2,3'd3:index={addr_index,2'b01};
      3'd4,3'd5:index={addr_index,2'b10};
      3'd6,3'd7:index={addr_index,2'b11};
    endcase
end

logic cen_hi,cen_lo;//choose enable
assign cen_hi=index[6]?1'b0:1'b1;
assign cen_lo=index[6];

logic [127:0] Q_00,Q_01,Q_10,Q_11;
assign data_out_1stway=index[6]?Q_01:Q_00;
assign data_out_2ndway=index[6]?Q_11:Q_10;

logic wen_1st,wen_2nd;
assign wen_1st=wen | w_way;
assign wen_2nd=wen | (~w_way);

//first way
S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_i00(
  .Q(Q_00),
  .CLK(clk),
  .CEN(cen_lo), 
  .WEN(wen_1st),
  .BWEN(mask), 
  .A(index[5:0]), 
  .D(data_write)
);

S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_i01(
  .Q(Q_01),
  .CLK(clk),
  .CEN(cen_hi), 
  .WEN(wen_1st), 
  .BWEN(mask),
  .A(index[5:0]), 
  .D(data_write)
);

//second way
S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_i10(
  .Q(Q_10),
  .CLK(clk),
  .CEN(cen_lo), 
  .WEN(wen_2nd), 
  .BWEN(mask),
  .A(index[5:0]), 
  .D(data_write)
);

S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_i11(
  .Q(Q_11),
  .CLK(clk),
  .CEN(cen_hi), 
  .WEN(wen_2nd), 
  .BWEN(mask),
  .A(index[5:0]), 
  .D(data_write)
);

endmodule