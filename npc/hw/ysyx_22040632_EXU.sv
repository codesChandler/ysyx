
`include "ysyx_22040632_RISCV_PKG.svh"
module ysyx_22040632_EXU import ysyx_22040632_RISCV_PKG::*;
(
    input logic clk,
    input logic rst_n,
    input logic [63:0] src1,
    input logic [63:0] src2,
    input logic [63:0] dest,
    input logic [63:0] pc,
    input func operation,
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
logic [63:0] ld_wr;
//异步复位，同步释放
always_ff @(posedge clk)
  rrst_n <= rst_n;

always_comb begin
  case(operation)
  addi:begin src1_op=src1;src2_op=src2;gprchg='1;end
  auipc:begin src1_op=src1;src2_op=pc;gprchg='1;end
  sltiu:begin src1_op=src1;src2_op=pc;gprchg='1;end
  lw,ld:begin src1_op=src1;src2_op=src2;gprchg='1;end
  lui:begin src1_op=pc;src2_op=64'd4;gprchg='1;end
  jal:begin src1_op=64'd4;src2_op=pc;gprchg='1;end
  jalr:begin src1_op=64'd4;src2_op=pc;gprchg='1;end
  addw:begin src1_op=src1;src2_op=src2;gprchg='1;end
  sub:begin src1_op=src1;src2_op=src2;gprchg='1;end
  beq,bne:begin src1_op=dest;src2_op=pc;gprchg='0;end
  default:begin src1_op=64'd4;src2_op=pc;gprchg='0;end
  endcase
end

always_comb begin
  case(operation)
  jal,jalr:pcchg='1;
  beq:pcchg=(src1==src2)?'1:'0;
  bne:pcchg=(src1!=src2)?'1:'0;
  default:pcchg='0;
  endcase
end

always_comb
    case(operation)
    sub:data_op=src2_op-src1_op;
    default:data_op=src1_op+src2_op;
    endcase

always_comb begin
  case(operation)
  lw,ld:begin paddr_read(data_op, ld_wr);end//$display("addr%x",data_op);$display("data%x",ld_wr);end
  default:ld_wr='0;
  endcase
end

always_comb begin
  case(operation)
  lw:data_out=(data_op%8==0)?{{32{ld_wr[31]}},ld_wr[31:0]}:{{32{ld_wr[63]}},ld_wr[63:32]};
  ld:begin data_out=ld_wr;$display("ld");end
  addw:data_out={{32{data_op[31]}},data_op[31:0]};
  sltiu:data_out=(src1_op<src2_op)?64'b1:'0;
  default:data_out=data_op;
  endcase
end



always_comb
  case(operation)
    jal:pc_op=src1+pc;
    jalr:pc_op=src1+src2;
    beq,bne:pc_op=pc+dest;
    default:pc_op='0;
  endcase 
  

assign rdy=gprchg;


endmodule
