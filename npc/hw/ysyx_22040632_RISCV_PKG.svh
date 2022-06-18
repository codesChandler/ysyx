`ifndef  ysyx_22040632_RISCV_PKG;
`define  ysyx_22040632_RISCV_PKG;
package ysyx_22040632_RISCV_PKG;
typedef enum logic [3:0] {addi,auipc,lui,jal,jalr,sd} func;
typedef enum logic [3:0] {type_i,type_u,type_j,type_s} typet;

endpackage
`endif
