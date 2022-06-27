`include "ysyx_22040632_RISCV_PKG.svh"
module ysyx_22040632_IDU import ysyx_22040632_RISCV_PKG::*;(
  input logic clk,
  input logic rst_n,
  input logic [31:0] inst,
  input logic [63:0] data_in,
  input logic rdy,
  input logic [63:0] pc,
  output logic [63:0] src1,
  output logic [63:0] src2,
  output func operation,
  output logic [63:0] dest
);

logic [63:0] gpr [31:0];
func fun;
typet type_t;
logic [4:0] rd,rs1,rs2;
assign rd = inst[11:7];
assign rs1 = inst[19:15];
assign rs2 =inst[24:20];

logic rrst_n;
//异步复位，同步释放
always_ff @(posedge clk)
  rrst_n <= rst_n;

always_ff @(posedge clk or negedge rrst_n) begin
  if(!rrst_n)
  begin
    for(int i=0;i<32;i++)
      gpr[i]<='0;
  // $display("reset\n");
  end
  else if(rdy) begin 
      // $display("rd:%d datain:%d",rd,data_in);
      if(rd!=0)
      gpr[rd] <= data_in;
      else
      gpr[rd] <= '0;
      end
  else 
    for(int i=0;i<32;i++)
      gpr[i]<=gpr[i];
end
initial set_gpr_ptr(gpr);  // rf为通用寄存器的二维数组变量

always_comb begin
  case(inst)inside
  32'b?????????????????000?????0010011: begin fun=addi; type_t=type_i;end//$display("addi\n");end
  32'b?????????????????000?????1100111: begin fun=jalr;type_t=type_i;end//$display("jalr\n");end
  32'b?????????????????010?????0000011: begin fun=lw;type_t=type_i;end
  32'b?????????????????011?????0000011: begin fun=ld;type_t=type_i;end 
  
  32'b?????????????????011?????0010011: begin fun=sltiu;type_t=type_i;end
  32'b?????????????????????????0010111: begin fun=auipc; type_t=type_u;end//$display("auipc\n");end
  32'b?????????????????????????0110111: begin fun=lui; type_t=type_u;end//$display("lui\n");end
  32'b?????????????????????????1101111: begin fun=jal;type_t=type_j;end//$display("jal\n");end
  32'b?????????????????011?????0100011: begin fun=sd;type_t=type_s;end//$display("sd\n");end
  32'b0000000??????????000?????0111011: begin fun=addw;type_t=type_r;end
  32'b0100000??????????000?????0110011: begin fun=sub;type_t=type_r;end
  32'b?????????????????000?????1100011: begin fun=beq;type_t=type_b;end
  32'b?????????????????001?????1100011: begin fun=bne;type_t=type_b;end
  32'b00000000000100000000000001110011:begin npcexit(gpr[10][31:0]);end//$display("ebreak");end//ebraek
  32'b00000000000000000000000000000000:;
  default:$display("instruction:%b not implemented",inst);
  endcase
end

always_comb begin
  case(type_t)inside
    type_i:begin src1=gpr[rs1];src2={{52{inst[31]}},inst[31:20]};end
    type_u:begin src1={{32{inst[31]}},inst[31:12],{12{1'b0}}};src2='0;end
    type_j:begin src1={{43{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};src2='0;end
    type_r:begin src1=gpr[rs1];src2=gpr[rs2];end
    type_b:begin src1=gpr[rs1];src2=gpr[rs2];end
    default:begin src1='0;src2='0;end
  endcase
end

always_comb begin
  case(type_t)inside
    type_b:dest={{52{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};
    default:dest='0;
  endcase
end

assign operation=fun;
endmodule
