`ifndef  ysyx_22040632_RISCV_PKG;
`define  ysyx_22040632_RISCV_PKG;

import "DPI-C" function void paddr_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void npcexit(int code);
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);

package ysyx_22040632_RISCV_PKG;
typedef enum logic [4:0] {sltiu,addi,auipc,lw,lui,jal,jalr,sd,addw,beq,bne,sub,ld} func;
typedef enum logic [3:0] {type_i,type_u,type_j,type_s,type_r,type_b} typet;

endpackage
`endif
