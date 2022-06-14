//`include "ysyx_22040632_RISCV_PKG_.svh"
module ysyx_22040632_top
(input logic clk,
 input logic rst_n,
 input logic [31:0] inst,
 output logic [63:0] pc);

//logic [63:0] pc;
logic [63:0] data;
logic rdy;
logic [63:0] src1;
logic [63:0] src2;
logic [3:0] operation;

ysyx_22040632_IFU ysyx_22040632_IFU_inst(
  .clk(clk),
  .rst_n(rst_n),
  .pc(pc)
);

ysyx_22040632_IDU ysyx_22040632_IDU_inst(
  .clk(clk),
  .rst_n(rst_n),
  .inst(inst),
  .data_in(data),
  .rdy(rdy),
  .src1(src1),
  .src2(src2),
  .operation(operation)
);

ysyx_22040632_EXU ysyx_22040632_EXU_inst
(
  .clk(clk),
  .rst_n(rst_n),
  .src1(src1),
  .src2(src2),
  .operation(operation),
  .data_out(data),
  .rdy(rdy)
);

endmodule
