`include "ysyx_22040632_RISCV_PKG_.svh"
module ysyx_22040632_Decoder
import ysyx_22040632_RISCV_pkg::*;
(input rst_n,
input clk,
input logic [31:0] instruction,
inout  riscv64_CPU_state cpu_state);
logic [63:0] dest,scr0,scr1;
instruction_t instr_t;
assign instr_t.instr=instruction;
instr_op op;

always_comb begin: opcode
unique case (instr_t.itype.opcode)
	IRI_op: op=IRI;
	endcase
end 


always_comb begin:itype_decoder
	if(op==IRI)begin
			scr0=cpu_state.gpr[instr_t.itype.rs1];
			dest=cpu_state.gpr[instr_t.itype.rd];
			scr1={{52{instr_t.itype.imm[31]}},instr_t.itype.imm};
		end
	end

always_ff @(posedge clk) //begin:fun decoder
	if(op==IRI) 
		 case(instr_t.itype.funct3)
			fun_addi:begin cpu_state.gpr[dest]<=scr0+scr1;
			 // dest<=scr0+scr1;

			scr0=cpu_state.gpr[instr_t.itype.rs1];
					 $display("print register:gpr[%d]-%d",dest,cpu_state.gpr[dest]);end
		endcase
	// end
endmodule
