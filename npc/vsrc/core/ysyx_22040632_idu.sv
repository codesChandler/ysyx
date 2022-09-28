`include "ysyx_22040632_riscv_pkg.svh"
module ysyx_22040632_idu(
  input logic clk,
  input logic rrst_n,
  input logic flush,
  input logic alu_busy,
  input logic fence_sig,
  // input logic [63:0] data_in,
  // input logic rdy,
  ysyx_22040632_wb2id.id wb2id,
  ysyx_22040632_if2id.id if2id,
  ysyx_22040632_id2ex.id id2ex,
  ysyx_22040632_id2if.id id2if,
  ysyx_22040632_ex2id.id ex2id,
  ysyx_22040632_mem2id.id mem2id,
  ysyx_22040632_id2csr.id id2csr,
  // output logic op_div,
  output logic [63:0] regs_o[0 : 31]
  
  // output logic w_ena,
  // output logic [4 : 0]rd_w_addr,// difftest
  // ysyx_22040632_divif.idu dif
);

logic [63:0] gpr [31:0];
logic [63:0] src1_t,src2_t,data_ext_t;
func fun;
typet type_t;
logic [4:0] rd_t,rs1,rs2;
logic [4 : 0]rd_w_addr;


/*******************general purpose register***********/
logic w_ena;
always_ff @(posedge clk or negedge rrst_n) begin
  if(!rrst_n)
  begin
    for(int i=0;i<32;i++)
      gpr[i]<='0;
  // $display("reset\n");
  end
  else if(w_ena) begin 
      // $display("rd:%d datain:%d",rd,data_in);
      if(rd_w_addr!=0)
      gpr[rd_w_addr] <= wb2id.data2reg;
      else
      gpr[rd_w_addr] <= '0;
      end
  else 
    for(int i=0;i<32;i++)
      gpr[i]<=gpr[i];
end

assign w_ena=wb2id.rd_w_ena2reg;//(rdy && !op_div) || (op_div && dif.out_valid);
assign rd_w_addr  = wb2id.rd2reg;

genvar i;
generate
	for (i = 0; i < 32; i = i + 1) begin
		assign regs_o[i] = (w_ena & rd_w_addr == i & i != 0) ? wb2id.data2reg : gpr[i];
	end
endgenerate

/******************instruction decode*****************/
always_comb begin
  case(if2id.inst2id)inside
  32'b?????????????????000?????0010011: begin fun=addi   ;type_t=type_i;end//$display("addi\n");end
  32'b?????????????????000?????1100111: begin fun=jalr   ;type_t=type_i;end//$display("jalr\n");end
  32'b?????????????????010?????0000011: begin fun=lw     ;type_t=type_i;end
  32'b?????????????????110?????0000011: begin fun=lwu    ;type_t=type_i;end
  32'b?????????????????001?????0000011: begin fun=lh     ;type_t=type_i;end
  32'b?????????????????101?????0000011: begin fun=lhu    ;type_t=type_i;end
  32'b?????????????????011?????0000011: begin fun=ld     ;type_t=type_i;end 
  32'b?????????????????100?????0000011: begin fun=lbu    ;type_t=type_i;end
  32'b?????????????????000?????0000011: begin fun=lb     ;type_t=type_i;end
  
  32'b00000000000000000000000001110011: begin fun=ecall  ;type_t=type_i;end
  32'b?????????????????010?????1110011: begin fun=csrrs  ;type_t=type_i;end
  32'b?????????????????001?????1110011: begin fun=csrrw  ;type_t=type_i;end
  32'b?????????????????101?????1110011: begin fun=csrrwi ;type_t=type_i;end
  32'b?????????????????110?????1110011: begin fun=csrrsi ;type_t=type_i;end 
  32'b?????????????????011?????1110011: begin fun=csrrc  ;type_t=type_i;end 
  32'b?????????????????111?????1110011: begin fun=csrrci ;type_t=type_i;end
    
  32'b?????????????????011?????0010011: begin fun=sltiu  ;type_t=type_i;end
  32'b?????????????????010?????0010011: begin fun=slti   ;type_t=type_i;end
  32'b?????????????????000?????0011011: begin fun=addiw  ;type_t=type_i;end

  32'b010000???????????101?????0010011: begin fun=srai   ;type_t=type_i;end
  32'b?????????????????111?????0010011: begin fun=andi   ;type_t=type_i;end
  32'b?????????????????100?????0010011: begin fun=xori   ;type_t=type_i;end
  32'b?????????????????110?????0010011: begin fun=ori    ;type_t=type_i;end
  32'b000000???????????001?????0010011: begin fun=slli   ;type_t=type_i;end
  32'b0000000??????????001?????0011011: begin fun=slliw  ;type_t=type_i;end
  32'b000000???????????101?????0010011: begin fun=srli   ;type_t=type_i;end 
  32'b0100000??????????101?????0011011: begin fun=sraiw  ;type_t=type_i;end
  32'b0000000??????????101?????0011011: begin fun=srliw  ;type_t=type_i;end
          
  32'b?????????????????????????0010111: begin fun=auipc  ;type_t=type_u;end//$display("auipc\n");end
  32'b?????????????????????????0110111: begin fun=lui    ;type_t=type_u;end//$display("lui\n");end
  32'b?????????????????????????1101111: begin fun=jal    ;type_t=type_j;end//$display("jal\n");end
  
  32'b?????????????????011?????0100011: begin fun=sd     ;type_t=type_s;end//$display("sd\n");end
  32'b?????????????????000?????0100011: begin fun=sb     ;type_t=type_s;end
  32'b?????????????????010?????0100011: begin fun=sw     ;type_t=type_s;end
  32'b?????????????????001?????0100011: begin fun=sh     ;type_t=type_s;end
  
  32'b0000000??????????000?????0111011: begin fun=addw   ;type_t=type_r;end
  32'b0100000??????????000?????0111011: begin fun=subw   ;type_t=type_r;end 
  32'b0100000??????????000?????0110011: begin fun=sub    ;type_t=type_r;end
  32'b0000000??????????000?????0110011: begin fun=add    ;type_t=type_r;end
  32'b0000000??????????110?????0110011: begin fun=orr    ;type_t=type_r;end
  32'b0000000??????????100?????0110011: begin fun=xorr   ;type_t=type_r;end
  32'b0000000??????????011?????0110011: begin fun=sltu   ;type_t=type_r;end
  32'b0000000??????????010?????0110011: begin fun=slt    ;type_t=type_r;end
  32'b0000000??????????111?????0110011: begin fun=andr   ;type_t=type_r;end
  32'b0000000??????????001?????0111011: begin fun=sllw   ;type_t=type_r;end
  32'b0000000??????????001?????0110011: begin fun=sll    ;type_t=type_r;end
  32'b0000000??????????101?????0110011: begin fun=srl    ;type_t=type_r;end
  32'b0000001??????????000?????0111011: begin fun=mulww   ;type_t=type_r;end  
  32'b0000001??????????100?????0110011: begin fun=div    ;type_t=type_r;end
  32'b0000001??????????101?????0110011: begin fun=divu    ;type_t=type_r;end
  32'b0000001??????????100?????0111011: begin fun=divww   ;type_t=type_r;end
  32'b0000001??????????101?????0111011: begin fun=divuw  ;type_t=type_r;end
  32'b0000001??????????110?????0110011: begin fun=rem    ;type_t=type_r;end
  32'b0000001??????????111?????0110011: begin fun=remu   ;type_t=type_r;end    
  32'b0000001??????????110?????0111011: begin fun=remw   ;type_t=type_r;end 
  32'b0000001??????????111?????0111011: begin fun=remuw  ;type_t=type_r;end
  32'b0000001??????????000?????0110011: begin fun=mul    ;type_t=type_r;end
  32'b0000001??????????011?????0110011: begin fun=mulh   ;type_t=type_r;end
  32'b0100000??????????101?????0111011: begin fun=sraw   ;type_t=type_r;end
  32'b0100000??????????101?????0110011: begin fun=sra    ;type_t=type_r;end
  32'b0000000??????????101?????0111011: begin fun=srlw   ;type_t=type_r;end

  32'b?????????????????001?????0001111: begin fun=fence_i;type_t=type_r;end
  
  32'b00110000001000000000000001110011: begin fun=mret   ;type_t=type_r;end
  
  32'b?????????????????000?????1100011: begin fun=beq    ;type_t=type_b;end
  32'b?????????????????001?????1100011: begin fun=bne    ;type_t=type_b;end
  32'b?????????????????101?????1100011: begin fun=bge    ;type_t=type_b;end
  32'b?????????????????111?????1100011: begin fun=bgeu   ;type_t=type_b;end
  32'b?????????????????100?????1100011: begin fun=blt    ;type_t=type_b;end
  32'b?????????????????110?????1100011: begin fun=bltu   ;type_t=type_b;end
  
  32'h0000006b:begin fun=quit;type_t=type_i;end 
  32'h0000007b:begin fun=putch;type_t=type_i;end 
  32'b00000000000000000000000000000000: begin fun=nop    ;type_t=type_i;end
  default:begin $display("@pc:%h instruction:%x not implemented",if2id.pc2id,if2id.inst2id);end//npcexit(1);end
  endcase
end

logic csr_src2,csr_src1_imm;
assign csr_src2=fun inside {csrrs,csrrw,csrrc,csrrsi,csrrci,csrrwi};
assign csr_src1_imm=fun inside {csrrsi,csrrci,csrrwi};

logic wb_hazard1,wb_hazard2;
always_comb begin
  case(type_t)inside
    type_s:begin src1_t=wb_hazard1?wb2id.data2reg:gpr[rs1];src2_t={{52{if2id.inst2id[31]}},if2id.inst2id[31:25],if2id.inst2id[11:7]};end
    type_i:begin src1_t=csr_src1_imm?{59'b0,rs1}:(wb_hazard1?wb2id.data2reg:gpr[rs1]);src2_t=csr_src2?id2csr.csr_read2id:{{52{if2id.inst2id[31]}},if2id.inst2id[31:20]};end
    type_u:begin src1_t={{32{if2id.inst2id[31]}},if2id.inst2id[31:12],{12{1'b0}}};src2_t='0;end
    type_j:begin src1_t={{43{if2id.inst2id[31]}},if2id.inst2id[31],if2id.inst2id[19:12],if2id.inst2id[20],if2id.inst2id[30:21],1'b0};src2_t='0;end
    type_r:begin src1_t=wb_hazard1?wb2id.data2reg:gpr[rs1];src2_t=wb_hazard2?wb2id.data2reg:gpr[rs2];end
    type_b:begin src1_t=wb_hazard1?wb2id.data2reg:gpr[rs1];src2_t=wb_hazard2?wb2id.data2reg:gpr[rs2];end
    default:begin src1_t='0;src2_t='0;end
  endcase
end

logic wb_hazard_ext;
always_comb begin
  case(type_t)inside
    type_s:data_ext_t=wb_hazard_ext?wb2id.data2reg:gpr[rs2];//data to store
    type_b:data_ext_t={{52{if2id.inst2id[31]}},if2id.inst2id[7],if2id.inst2id[30:25],if2id.inst2id[11:8],1'b0};
    default:data_ext_t='0;
  endcase
end

/***************id2ex register**************/
logic block,flush_in_id;
assign block=(ex2id.ld_en2id && !mem2id.ls_sh2id) || alu_busy;
assign flush_in_id = flush || fence_sig;
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || flush ||id2if.block_id2if)
    id2ex.pc2ex <= '0;
  else if(block || fence_sig)
    id2ex.pc2ex <=id2ex.pc2ex;
  else
    id2ex.pc2ex <= if2id.pc2id;
end
assign id2if.pc_f=id2ex.pc2ex;

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || flush_in_id ||id2if.block_id2if)
    id2ex.inst2ex <= '0;
  else if(block)
    id2ex.inst2ex <= id2ex.inst2ex;
  else 
    id2ex.inst2ex <= if2id.inst2id;
end

assign rd_t = if2id.inst2id[11:7];
assign rs1 = if2id.inst2id[19:15];
assign rs2 =if2id.inst2id[24:20];

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || flush_in_id)
    id2ex.rd <='0;
  else if(block)
    id2ex.rd <= id2ex.rd;
  else 
    id2ex.rd <=rd_t;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || flush_in_id)
    id2ex.rs1_2ex <= '0;
  else if(block)
    id2ex.rs1_2ex <= id2ex.rs1_2ex;
  else
    id2ex.rs1_2ex <= rs1;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || flush_in_id)
    id2ex.rs2_2ex <= '0;
  else if(block) 
    id2ex.rs2_2ex <= id2ex.rs2_2ex;
  else
    id2ex.rs2_2ex <= rs2;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || flush_in_id || id2if.block_id2if)
    id2ex.operation <= '0;
  else if(block)
    id2ex.operation <= id2ex.operation;
  else
    id2ex.operation <= fun;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    id2ex.src1 <= '0;
  else if(block)
    id2ex.src1 <= id2ex.src1;
  else 
    id2ex.src1 <= src1_t;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    id2ex.src2 <= '0;
  else if(block)
    id2ex.src2 <=  id2ex.src2; 
  else 
    id2ex.src2 <= src2_t;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    id2ex.data_ext <= '0;
  else if(block)
    id2ex.data_ext <= id2ex.data_ext;
  else id2ex.data_ext <= data_ext_t;
end

//csr
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    id2ex.pc_mret_ecall2ex<='0;
  else
    id2ex.pc_mret_ecall2ex<=id2csr.csr_read2id[31:0];
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    id2ex.csr_addr_write2ex <= '0;
  else 
    id2ex.csr_addr_write2ex <= {{20{if2id.inst2id[31]}},if2id.inst2id[31:20]};
end

//uart
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    id2ex.uart_en2ex <='0;
  else
    id2ex.uart_en2ex <= (fun==putch)?1'b1:1'b0;
end
/***********data hazard*************/

assign wb_hazard1=w_ena && rd_w_addr!=0 && rs1==rd_w_addr;
assign wb_hazard2=w_ena && rd_w_addr!=0 && rs2==rd_w_addr;
assign wb_hazard_ext=wb_hazard2;

logic [2:0] src_from_gpr;//1'b extra data,1'b rs2,1'b rs1
always_comb begin
    case(type_t)inside
    type_s,type_i:src_from_gpr[1:0]=csr_src1_imm?2'b00:2'b01;
    type_r,type_b:src_from_gpr[1:0]=2'b11;
    default:src_from_gpr[1:0]='0;
  endcase
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    id2ex.src_from_gpr2ex <='0;
  else if(block)
    id2ex.src_from_gpr2ex <=id2ex.src_from_gpr2ex;
  else
    id2ex.src_from_gpr2ex <=src_from_gpr;
end

always_comb begin
    case(type_t)inside
    type_s:src_from_gpr[2]=1'b1;
    default:src_from_gpr[2]=1'b0;
  endcase
end

//ld
logic block_ld,block_ld2if;
assign block_ld=id2ex.operation inside {lw,lwu,ld,lbu,lb,lh,lhu,sd,sb,sw,sh};
always_ff @(posedge clk or negedge rrst_n)
priority if(!rrst_n)
  block_ld2if<='0;
else if(mem2id.ls_sh2id || flush_in_id)
  block_ld2if<='0;
else if(block_ld)
  block_ld2if<=1'b1;
assign id2if.block_id2if=(block_ld2if || block_ld) && !mem2id.ls_sh2id;

//csr
logic [31:0] csr_addr_read;
always_comb begin
  case(fun)
    mret:csr_addr_read=`ysyx_22040632_MEPC_INDEX;
    ecall:csr_addr_read=`ysyx_22040632_MTVEC_INDEX;
    csrrs,csrrw,csrrc,csrrsi,csrrwi,csrrci:csr_addr_read={20'b0,if2id.inst2id[31:20]};
    default:csr_addr_read='0;
  endcase
end
assign id2csr.csr_addr_read2csr=((fun inside {csrrw,csrrwi}) && rd_t=='0)?'0:csr_addr_read;

//div
logic op_div2ex;
always_comb
    case(id2ex.operation)
      div,divu,divww,divuw,remw,remu,remuw,rem:op_div2ex=1'b1;
      default:op_div2ex=1'b0;
    endcase
assign id2ex.op_div2ex=op_div2ex;
endmodule
