module ysyx_22040632_ddata_array(
  input logic clk,
  input logic rrst_n,
  input logic wen,
  input logic wen_sd,//low level active
  input logic axi_write_en,
  input logic w_way,//1'b0 for first way;1'b1 for second way
  input logic [4:0] addr_index,
  input logic [5:4] addr_inside,
  input logic [127:0] mask,
  input logic [127:0] data_write,
  input logic hit_1st,
  input logic hit_2nd,
  output logic w_last,
  output logic [127:0] data_out_1stway,data_out_2ndway
);

logic [6:0] index;
logic [3:0] w_cnt;

logic axi_write_start;
always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n || w_last)
  axi_write_start <='0;
else if(axi_write_en)
  axi_write_start <='1;


always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || (wen && (!axi_write_start && !axi_write_en)))
    w_cnt <= '0;
  else if(axi_write_start && !axi_write_en)
    w_cnt <= w_cnt;
  else if(!wen || axi_write_en)
    w_cnt <= w_cnt + 4'd1;
end

assign w_last=(w_cnt==4'd8)?1'b1:1'b0;

assign index={addr_index,addr_inside[5:4]};
always_comb
begin
  if((wen || !wen_sd) && (!axi_write_start && !axi_write_en))
    index={addr_index,addr_inside[5:4]};
  else
    case(w_cnt)
      4'd0,4'd1:index={addr_index,2'b00};
      4'd2,4'd3:index={addr_index,2'b01};
      4'd4,4'd5:index={addr_index,2'b10};
      4'd6,4'd7:index={addr_index,2'b11};
      default:index={addr_index,addr_inside[5:4]};
    endcase
end

logic cen_hi,cen_lo;//choose enable
assign cen_hi=index[6]?1'b0:1'b1;
assign cen_lo=index[6];

logic [127:0] Q_00,Q_01,Q_10,Q_11;
assign data_out_1stway=index[6]?Q_01:Q_00;
assign data_out_2ndway=index[6]?Q_11:Q_10;

logic wen_1st,wen_2nd;
assign wen_1st=~((!wen && !w_way) ||(!wen_sd && hit_1st) || (!wen_sd && !w_way && !hit_2nd && !hit_1st));
assign wen_2nd=~((!wen &&  w_way) ||(!wen_sd && hit_2nd) || (!wen_sd &&  w_way && !hit_2nd && !hit_1st));
//three-fold:1.just axi write 2.store data not miss 3.store data but miss

//first way
S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_d00(
  .Q(Q_00),
  .CLK(clk),
  .CEN(cen_lo), 
  .WEN(wen_1st),
  .BWEN(mask), 
  .A(index[5:0]), 
  .D(data_write)
);

S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_d01(
  .Q(Q_01),
  .CLK(clk),
  .CEN(cen_hi), 
  .WEN(wen_1st), 
  .BWEN(mask),
  .A(index[5:0]), 
  .D(data_write)
);

//second way
S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_d10(
  .Q(Q_10),
  .CLK(clk),
  .CEN(cen_lo), 
  .WEN(wen_2nd), 
  .BWEN(mask),
  .A(index[5:0]), 
  .D(data_write)
);

S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_d11(
  .Q(Q_11),
  .CLK(clk),
  .CEN(cen_hi), 
  .WEN(wen_2nd), 
  .BWEN(mask),
  .A(index[5:0]),
  .D(data_write)
);

endmodule