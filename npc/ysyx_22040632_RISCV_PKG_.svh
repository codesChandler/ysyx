`ifndef  ysyx_22040632_RISCV_PKG;
`define  ysyx_22040632_RISCV_PKG;
package ysyx_22040632_RISCV_pkg;
typedef logic [63:0] word_t;
typedef word_t vaddr_t;
typedef struct packed{
  logic [31:0][63:0] gpr;
  vaddr_t pc;
} riscv64_CPU_state;

typedef struct packed{
	logic [31:20] imm;
	logic [19:15] rs1;
	logic [14:12] funct3;
	logic [11:7]  rd;
	logic [6:0]   opcode;
}itype_t;

typedef union packed{
	logic [31:0] instr;
	itype_t itype;
}instruction_t;

typedef enum logic[2:0]{IRI} instr_op;

localparam IRI_op=7'b0010011; //Integer Register-Immediate Instructions
localparam fun_addi=3'b000; //ADDI
endpackage
`endif
