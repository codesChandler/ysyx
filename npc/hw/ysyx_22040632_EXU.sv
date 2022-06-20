`include "ysyx_22040632_RISCV_PKG.svh"
module ysyx_22040632_EXU import ysyx_22040632_RISCV_PKG::*;
(
    input logic clk,
    input logic rst_n,
    input logic [63:0] src1,
    input logic [63:0] src2,
    input logic [63:0] pc,
    input [3:0] operation,
    output logic [63:0] data_out,
    output logic [63:0] pc_op,
    output logic pcchg,
    output logic rdy
);

logic [63:0] data_op;
logic rrst_n;
logic gprchg;
logic [63:0] src1_op;
logic [63:0] src2_op;
//异步复位，同步释放
always_ff @(posedge clk)
  rrst_n <= rst_n;

always_comb begin
  case(operation)
  addi:begin src1_op=src1;src2_op=src2;gprchg='1;pcchg='0;end
  auipc:begin src1_op=src1;src2_op=pc;gprchg='1;pcchg='0;end
  lui:begin src1_op=pc;src2_op=64'd4;gprchg='1;pcchg='0;end
  jal:begin src1_op=64'd4;src2_op=pc;gprchg='1;pcchg='1;end
  jalr:begin src1_op=64'd4;src2_op=pc;gprchg='1;pcchg='1;end
  default:begin src1_op=64'd4;src2_op=pc;gprchg='0;pcchg='0;end
  endcase
end

always_comb
    data_op=src1_op+src2_op;

always_comb
    if(operation==jal)
      pc_op=src1+pc;
    else //if(operation==jalr)
      pc_op=src1+src2;
    // else
    //  ;
  

assign rdy=gprchg;
assign data_out=data_op;

endmodule
