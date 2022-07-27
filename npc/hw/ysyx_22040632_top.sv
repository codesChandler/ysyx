`include "ysyx_22040632_RISCV_PKG.svh"
module ysyx_22040632_top import ysyx_22040632_RISCV_PKG::*;
(
  input logic clk,
  input logic rst_n,
  output logic [63:0] pc,
  output logic [31:0] inst);

logic pcchg;
logic rdy;
logic [63:0] src1;
logic [63:0] src2,dest;
func operation;
logic [63:0] data;
logic [63:0] pc_op;
logic alu_busy;
logic op_div;
ysyx_22040632_divif dif();

//logic [31:0] inst;
ysyx_22040632_EXU ysyx_22040632_EXU_i
(
    .clk(clk),
    .rst_n(rst_n),
    .src1(src1),
    .src2(src2),
    .dest(dest),
    .pc(pc),
    .operation(operation),
    .data_out(data),
    .pc_op(pc_op),
    .pcchg(pcchg),
    .rdy(rdy),
    .dif(dif),
    .alu_busy,
    .op_div
);

ysyx_22040632_DIV ysyx_22040632_DIV_i(
  .clk(clk),
  .rst_n(rst_n),
  .dif(dif)
);

ysyx_22040632_IFU ysyx_22040632_IFU_i(
  .clk(clk),
  .rst_n(rst_n),
  .pcchg(pcchg),
  .pc_op(pc_op),
  .pc(pc),
  .inst(inst),
  .alu_busy
);

ysyx_22040632_IDU ysyx_22040632_IDU_i(
  .clk(clk),
  .rst_n(rst_n),
  .inst(inst),
  .data_in(data),
  .rdy(rdy),
  .pc(pc),
  .op_div,
  .src1(src1),
  .src2(src2),
  .dest(dest),
  .operation(operation),
  .dif(dif)
);

endmodule

