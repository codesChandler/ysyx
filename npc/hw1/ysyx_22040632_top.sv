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
ysyx_22040632_mulif mif();


//logic [31:0] inst;
ysyx_22040632_exu ysyx_22040632_exu_i
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
    .mif,
    .alu_busy,
    .op_div
);

ysyx_22040632_mul ysyx_22040632_mul_i(
  .clk,
  .rst_n,
  .mif
);

ysyx_22040632_div ysyx_22040632_div_i(
  .clk(clk),
  .rst_n(rst_n),
  .dif(dif)
);

ysyx_22040632_ifu ysyx_22040632_ifu_i(
  .clk(clk),
  .rst_n(rst_n),
  .pcchg(pcchg),
  .pc_op(pc_op),
  .pc(pc),
  .inst(inst),
  .alu_busy
);

ysyx_22040632_idu ysyx_22040632_idu_i(
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

