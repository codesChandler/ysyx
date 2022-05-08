`include "ysyx_22040632_RISCV_PKG_.svh"
module ysyx_22040632_top
(input logic clk,
 input logic rst_n);

riscv64_CPU_state cpu_state;
logic [31:0] instr;

ysyx_22040632_PC pc_ins(
    .clk(clk),
    .rst_n(rst_n),
    .cpu_state(cpu_state)
);

ysyx_22040632_Decoder Decoder_ins
(.clk(clk),
.instruction(instr),
.cpu_state(cpu_state));

ysyx_22040632_RegisterFile Reg_ins(
  .clk(clk),
  .rst_n(rst_n),
  //input [31:0] data_in,
  .waddr(cpu_state.pc),
  .data_out(instr)
);


endmodule
