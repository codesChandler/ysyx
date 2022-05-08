`include "ysyx_22040632_RISCV_PKG_.svh"
module ysyx_22040632_PC
import ysyx_22040632_RISCV_pkg::*;
(
    input logic clk,
    input logic rst_n,
    output riscv64_CPU_state cpu_state
);



always_ff @(posedge clk or negedge rst_n) begin
  if(!rst_n)
    cpu_state.pc=64'0;
  else
    cpu_state.pc=cpu_state.pc+1'b1;
end
    

endmodule
