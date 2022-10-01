
`include "ysyx_22040632_riscv_pkg.svh"
module ysyx_22040632_exu
(
    input logic clk,
    input logic rrst_n,
    input mem_busy,
    ysyx_22040632_id2ex.ex id2ex,
    ysyx_22040632_ex2if.ex ex2if,
    ysyx_22040632_if2id.ex if2id,
    // input logic op_div,
    ysyx_22040632_ex2mem.ex ex2mem,
    ysyx_22040632_mem2ex.ex mem2ex,
    ysyx_22040632_ex2id.ex  ex2id,

    ysyx_22040632_mem2wb.ex mem2wb,


    ysyx_22040632_divif.cpu dif,
    ysyx_22040632_mulif.cpu mif,

    input logic intrrupt_timing2ex,
    input logic [31:0] mtvec2ex,
    output logic intrrupt_ack2clint,
    output logic flush,
    output logic alu_busy,
    output logic fence_sig,
    input  logic clean2ex
    // output logic alu_busy
);

logic intrrupt_timing;
assign intrrupt_timing=intrrupt_timing2ex && id2ex.pc2ex !='0 && !mem_busy;
assign intrrupt_ack2clint=intrrupt_timing;

logic [63:0] data_op;
logic gprchg,pcchg;
logic [63:0] src1_op,src1;
logic [63:0] src2_op,src2;
logic div_doing;
logic [63:0] data_out;
logic ex_hazard1,ex_hazard2;
logic mem_hazard1,mem_hazard2;
logic ld_hazard1_1cy,ld_hazard2_1cy;//ld x
logic ld_hazard1_2cy,ld_hazard2_2cy;//ld nop x

/***************data hazard*************/
assign ex_hazard1=(ex2mem.rd_w_ena && ex2mem.rd2mem !='0) && (id2ex.src_from_gpr2ex[0] != 1'b0 && id2ex.rs1_2ex==ex2mem.rd2mem);
assign ex_hazard2=(ex2mem.rd_w_ena && ex2mem.rd2mem !='0) && (id2ex.src_from_gpr2ex[1] != 1'b0 && id2ex.rs2_2ex==ex2mem.rd2mem);

assign mem_hazard1=(mem2wb.rd_w_ena2wb && mem2wb.rd2wb !='0) && (id2ex.src_from_gpr2ex[0] != 1'b0 && id2ex.rs1_2ex==mem2wb.rd2wb);
assign mem_hazard2=(mem2wb.rd_w_ena2wb && mem2wb.rd2wb !='0) && (id2ex.src_from_gpr2ex[1] != 1'b0 && id2ex.rs2_2ex==mem2wb.rd2wb);

assign ld_hazard1_1cy=(mem2ex.lden2ex_1cy && ex2mem.rd2mem !='0) && (id2ex.src_from_gpr2ex[0] != 1'b0 && id2ex.rs1_2ex==ex2mem.rd2mem);
assign ld_hazard2_1cy=(mem2ex.lden2ex_1cy && ex2mem.rd2mem !='0) && (id2ex.src_from_gpr2ex[1] != 1'b0 && id2ex.rs2_2ex==ex2mem.rd2mem);


assign ld_hazard1_2cy=(mem2ex.lden2ex_2cy && mem2ex.rd2ex_2cy !='0) && (id2ex.src_from_gpr2ex[0] != 1'b0 && id2ex.rs1_2ex==mem2ex.rd2ex_2cy);
assign ld_hazard2_2cy=(mem2ex.lden2ex_2cy && mem2ex.rd2ex_2cy !='0) && (id2ex.src_from_gpr2ex[1] != 1'b0 && id2ex.rs2_2ex==mem2ex.rd2ex_2cy);
logic [3:0] hazard_4bits;
assign hazard_4bits={ld_hazard1_2cy,ld_hazard1_1cy,mem_hazard1,ex_hazard1};


always_comb begin
  unique case({ld_hazard1_2cy,ld_hazard1_1cy,mem_hazard1,ex_hazard1}) inside
    4'b0000:src1=id2ex.src1;
    4'b?1??:src1=mem2ex.data_ld2ex_1cy;
    4'b?0?1:src1=ex2mem.data2mem;
    4'b10?0:src1=mem2ex.data_ld2ex_2cy;
    4'b0010:src1=mem2wb.data2wb;
    default:src1=id2ex.src1;
  endcase
end

always_comb begin
  unique case({ld_hazard2_2cy,ld_hazard2_1cy,mem_hazard2,ex_hazard2}) inside
    4'b0000:src2=id2ex.src2;
    4'b?1??:src2=mem2ex.data_ld2ex_1cy;
    4'b?0?1:src2=ex2mem.data2mem;
    4'b10?0:src2=mem2ex.data_ld2ex_2cy;
    4'b0010:src2=mem2wb.data2wb;
    default:src2=id2ex.src2;
  endcase
end

logic [63:0] data_ext;
logic ex_hazard_ext,mem_hazard_ext,ld_hazard_ext_1cy,ld_hazard_ext_2cy;
assign ex_hazard_ext=(ex2mem.rd_w_ena && ex2mem.rd2mem !='0) && (id2ex.src_from_gpr2ex[2] != 1'b0 && id2ex.rs2_2ex==ex2mem.rd2mem);
assign mem_hazard_ext=(mem2wb.rd_w_ena2wb && mem2wb.rd2wb !='0) && (id2ex.src_from_gpr2ex[2] != 1'b0 && id2ex.rs2_2ex==mem2wb.rd2wb);
assign ld_hazard_ext_1cy=(mem2ex.lden2ex_1cy && ex2mem.rd2mem !='0) && (id2ex.src_from_gpr2ex[2] != 1'b0 && id2ex.rs2_2ex==ex2mem.rd2mem);
assign ld_hazard_ext_2cy=(mem2ex.lden2ex_2cy && mem2ex.rd2ex_2cy !='0) && (id2ex.src_from_gpr2ex[2] != 1'b0 && id2ex.rs2_2ex==mem2ex.rd2ex_2cy);
always_comb begin
  unique case({ld_hazard_ext_2cy,ld_hazard_ext_1cy,mem_hazard_ext,ex_hazard_ext}) inside
    4'b0000:data_ext=id2ex.data_ext;
    4'b?1??:data_ext=mem2ex.data_ld2ex_1cy;
    4'b?0?1:data_ext=ex2mem.data2mem;
    4'b10?0:data_ext=mem2ex.data_ld2ex_2cy;
    4'b0010:data_ext=mem2wb.data2wb;
    default:data_ext=id2ex.data_ext;
  endcase
end


/*****************ex2mem register********************/
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    ex2mem.quit2mem <= '0;
  else
    ex2mem.quit2mem <= id2ex.quit2ex;
end

logic wt,flushinex;
assign wt=(mem_busy || ex2mem.ld_en2mem || ex2mem.sd_en2mem) && !mem2ex.en_clint2ex;
assign flushinex= alu_busy || flush_fence;
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || flushinex)
    ex2mem.pc2mem <='0;
  else if(wt)
    ex2mem.pc2mem <= ex2mem.pc2mem;
  else 
    ex2mem.pc2mem <=id2ex.pc2ex;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || intrrupt_timing || flushinex)
    ex2mem.inst2mem <='0;
  else if(wt)
    ex2mem.inst2mem <= ex2mem.inst2mem;
  else 
    ex2mem.inst2mem <=id2ex.inst2ex;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || intrrupt_timing  || flushinex)
    ex2mem.rd_w_ena <='0;
  else if(wt)
    ex2mem.rd_w_ena <= ex2mem.rd_w_ena;
  else 
    ex2mem.rd_w_ena <= gprchg;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || intrrupt_timing  || flushinex)
    ex2mem.data_ext2mem <='0;
  else if(wt)
    ex2mem.data_ext2mem <= ex2mem.data_ext2mem;
  else 
    ex2mem.data_ext2mem <=data_ext;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || intrrupt_timing || flushinex)
    ex2mem.rd2mem <= '0;
  else if(wt)
    ex2mem.rd2mem <= ex2mem.rd2mem;
  else 
    ex2mem.rd2mem <= id2ex.rd;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || intrrupt_timing || flushinex)
    ex2mem.data2mem <= '0;
  else if(wt)
    ex2mem.data2mem <= ex2mem.data2mem;
  else 
    ex2mem.data2mem <= data_out;
end 

//csr
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    ex2mem.wen_ecall2mem <= '0;
  else
    ex2mem.wen_ecall2mem <= wen_ecall;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    ex2mem.NO2mem <= '0;
  else
    ex2mem.NO2mem <= NO;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    ex2mem.csr_addr_write2mem <= '0;
  else
    ex2mem.csr_addr_write2mem <= id2ex.csr_addr_write2ex;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    ex2mem.csr_data_write2mem <= '0;
  else
    ex2mem.csr_data_write2mem <= csr_data_write;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || intrrupt_timing  || flushinex)
    ex2mem.wen_csr2mem <= '0;
  else
    ex2mem.wen_csr2mem <= wen_csr;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n )
    ex2mem.wen_mstatus_ecall2mem <= '0;
  else
    ex2mem.wen_mstatus_ecall2mem <= wen_mstatus_ecall;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || intrrupt_timing)
    ex2mem.wen_mstatus_mret2mem <= '0;
  else
    ex2mem.wen_mstatus_mret2mem <= wen_mstatus_mret;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    ex2mem.not_submit2mem <= '0;
  else
    ex2mem.not_submit2mem <= intrrupt_timing;
end


//uart
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    ex2mem.uart_en2mem <= '0;
  else 
    ex2mem.uart_en2mem <= id2ex.uart_en2ex;
end 
/***********************alu***************/
always_comb begin
  case(id2ex.operation)
  auipc:begin src1_op=src1;src2_op={32'b0,id2ex.pc2ex};end
  jal,jalr:begin src1_op=64'd4;src2_op={32'b0,id2ex.pc2ex};end
  addi,addiw,andi,srai,andr,sllw,sltiu,slti,sltu,slt:begin src1_op=src1;src2_op=src2;end
  lw,lwu,ld,lbu,lb,lh,lhu:begin src1_op=src1;src2_op=src2;end
  lui:begin src1_op=src1;src2_op=src2;end
  addw,subw:begin src1_op=src1;src2_op=src2;end
  ori,xori,slli,sll,srli,srl,slliw,sraiw,srliw,sraw,srlw,sra:begin src1_op=src1;src2_op=src2;end
  mulww,div,divu,divww,rem,remw,remu,remuw,divuw:begin src1_op=src1;src2_op=src2;end
  sub,add,orr,mul,mulh,xorr:begin src1_op=src1;src2_op=src2;end
  beq,bne,bge,bltu,bgeu,blt:begin src1_op=src1;src2_op=src2;end
  sd,sb,sw,sh:begin src1_op=src1;src2_op=src2;end
  csrrs,csrrw,csrrwi,csrrsi,csrrc,csrrci:begin src1_op=src1;src2_op=src2;end
  default:begin src1_op='0;src2_op='0;end
  endcase
end

assign gprchg=id2ex.operation inside {beq,bne,bge,bltu,bgeu,blt,sd,sb,sw,sh,nop,ecall,mret} ? 1'b0:1'b1;

always_comb begin
  case(id2ex.operation)
  jal,jalr:pcchg='1;
  beq:pcchg=(src1==src2)?'1:'0;
  bne:pcchg=(src1!=src2)?'1:'0;
  bge:pcchg=($signed(src1)>=$signed(src2))?'1:'0;
  bgeu:pcchg=(src1>=(src2))?'1:'0;
  bltu:pcchg=(src1<src2)?'1:'0;
  blt:pcchg=($signed(src1)<$signed(src2))?'1:'0;
  default:pcchg='0;
  endcase
end

always_comb
    case(id2ex.operation)
    sub,subw:data_op=src1_op-src2_op;
    srai,sra:data_op=($signed(src1_op))>>>src2_op[5:0];
    andi,andr:data_op=src2_op&src1_op;
    xori,xorr:data_op=src2_op^src1_op;
    orr,ori:data_op=src2_op|src1_op;
    sllw,slliw:data_op=src1_op<<src2_op[4:0];
    slli,sll:data_op=src1_op<<src2_op[5:0];
    srli:data_op=src1_op>>src2_op[5:0];
    sraiw,sraw:data_op={{32{1'b0}},($signed(src1_op[31:0]))>>>src2_op[4:0]};
    srliw,srlw:data_op={{32{1'b0}},(src1_op[31:0])>>src2_op[4:0]};
    srl:data_op=src1_op>>src2_op[5:0];
    div,divu:data_op=dif.quotient;
    divww:data_op=dif.quotient;
    divuw:data_op=dif.quotient;
    remw:data_op=dif.remainder;
    remuw:data_op=dif.remainder;
    remu:data_op=dif.remainder;
    rem:data_op=dif.remainder;
    // div:data_op=$signed(src1_op)/$signed(src2_op);
    // divw:data_op={{32{1'b0}},$signed(src1_op[31:0])/$signed(src2_op[31:0])};
    // divuw:data_op={{32{1'b0}},src1_op[31:0]/src2_op[31:0]};
    // rem:data_op=$signed(src1_op)%$signed(src2_op);
    // remw:data_op={{32{1'b0}},$signed(src1_op[31:0])%$signed(src2_op[31:0])};
    // remuw:data_op={{32{1'b0}},src1_op[31:0]%src2_op[31:0]};
    sltiu,sltu:data_op=(src1_op<src2_op)?64'd1:'0;
    slt,slti:data_op=($signed(src1_op)<$signed(src2_op))?64'd1:'0;
    mul:data_op=mif.result_lo;
    mulww:data_op=mif.result_lo;
    mulh:data_op=mif.result_hi;
    // mul:data_op=src1_op*src2_op;
    // mulww:data_op=src1_op[31:0]*src2_op[31:0];
    csrrs,csrrw,csrrsi,csrrc,csrrci,csrrwi:data_op=src2_op;
    default:data_op=src1_op+src2_op;
    endcase

//csr
logic wen_csr;
logic [63:0] csr_data_write;
logic wen_ecall;
logic [63:0] NO;
logic wen_mstatus_ecall;
logic wen_mstatus_mret;

assign wen_ecall= (id2ex.operation == ecall) || intrrupt_timing;//control mepc,mcause
assign NO=intrrupt_timing?64'h8000000000000007:(id2ex.operation == ecall?64'd11:'0);
assign wen_csr=id2ex.operation inside {csrrw,csrrwi} || (id2ex.operation inside {csrrs,csrrc} && id2ex.rs1_2ex!='0) || (id2ex.operation inside {csrrsi,csrrci} && src1_op!='0);
assign wen_mstatus_ecall=(id2ex.operation inside {ecall}) || intrrupt_timing;
assign wen_mstatus_mret=id2ex.operation inside {mret};
always_ff begin
  case(id2ex.operation)
    csrrs,csrrsi:csr_data_write = src1_op| src2_op;
    csrrc,csrrci:csr_data_write = (~src1_op) & src2_op;
    csrrw,csrrwi:csr_data_write = src1_op;
    default:csr_data_write ='0;
  endcase
end

//for multiply
assign mif.multiplicand=src1_op;
assign mif.multiplier=src2_op;

always_comb begin
  case(id2ex.operation)
    mulww:mif.mulw=1'b1;
    default:mif.mulw=1'b0;
  endcase
end

always_comb begin
  case(id2ex.operation)
    mulww,mul,mulh:mif.mul_signed=2'b11;
    default:mif.mul_signed=2'b00;
  endcase
end

//for divide
assign dif.dividend=src1_op;
assign dif.divisor=src2_op;
assign dif.flush=intrrupt_timing;

assign dif.div_valid=id2ex.op_div2ex && !div_doing && !dif.out_valid;;
assign alu_busy  = id2ex.op_div2ex && !dif.out_valid;

always_comb begin
      case(id2ex.operation)
        divww,remw,rem,div:dif.div_signed=1'b1;
        default:dif.div_signed=1'b0;
      endcase
    end

always_comb begin
      case(id2ex.operation)
        divww,divuw,remw,remuw:dif.divw=1'b1;
        default:dif.divw=1'b0;
      endcase
end

always_ff @(posedge clk or negedge rrst_n) begin
    if (!rrst_n) begin
        div_doing <= 1'b0;
    end
    /*除法结果输出后需要将div_doing置零*/
    else if (dif.out_valid) begin
      div_doing <= 1'b0;
    end
    /*握手成功后，也就是除法器接受输入的数据后需要把div_doing置高*/
    else if(dif.div_valid && dif.div_ready) begin
      div_doing <= 1'b1;
    end
    else
      div_doing <= div_doing;
end

//for load and store
logic ld_flg,sd_flg;
assign ld_flg=id2ex.operation inside {lw,lwu,ld,lbu,lb,lh,lhu};

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || intrrupt_timing)
    ex2mem.ld_en2mem <='0;
  else 
    ex2mem.ld_en2mem <=ld_flg;
end
assign ex2id.ld_en2id =ex2mem.ld_en2mem;

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || intrrupt_timing)
    ex2mem.ld_ty <= '0;
  else if(mem_busy || ex2mem.ld_en2mem)
    ex2mem.ld_ty <= ex2mem.ld_ty;
  else
    begin
      case(id2ex.operation)
        lw:ex2mem.ld_ty<=lwt;
        lwu:ex2mem.ld_ty<=lwut;
        ld:ex2mem.ld_ty<=ldt;
        lbu:ex2mem.ld_ty<=lbut;
        lb:ex2mem.ld_ty<=lbt;
        lh:ex2mem.ld_ty<=lht;
        lhu:ex2mem.ld_ty<=lhut;
        default:ex2mem.ld_ty<='0;
      endcase
    end
end

assign sd_flg=id2ex.operation inside {sd,sb,sw,sh};
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || intrrupt_timing)
    ex2mem.sd_en2mem <='0;
  else 
    ex2mem.sd_en2mem <=sd_flg;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || intrrupt_timing)
    ex2mem.sd_ty <='0;
  else if(mem_busy || ex2mem.sd_en2mem)
    ex2mem.sd_ty <= ex2mem.sd_ty;
  else 
  begin
      case(id2ex.operation)
        sd:ex2mem.sd_ty <= sdt;
        sb:ex2mem.sd_ty <= sbt;
        sw:ex2mem.sd_ty <= swt;
        sh:ex2mem.sd_ty <= sht;
        default:ex2mem.sd_ty <= '0;
      endcase
  end
end

//data out
always_comb begin
  case(id2ex.operation)
  addw,addiw,sllw,slliw,mulww,divww,remw,subw,remuw,divuw,sraiw,srliw,sraw,srlw:data_out={{32{data_op[31]}},data_op[31:0]};
  default:data_out=data_op;
  endcase
end

//for jump instruction
logic [31:0] pc_op;
always_comb
  case(id2ex.operation)
    jal:pc_op=src1[31:0]+id2ex.pc2ex;
    jalr:pc_op=src1[31:0]+src2[31:0];
    beq,bne,bge,bltu,bgeu,blt:pc_op=id2ex.pc2ex+data_ext[31:0];
    default:pc_op='0;
  endcase 

logic jen0,jen1,jen2,jen3,jen4,jen5;
assign jen2=((id2ex.operation inside {jal,jalr,beq,bne,bge,bltu,bgeu,blt} ? 1'b1:1'b0) && pcchg && (if2id.pc2id !=pc_op));//(pc change and predict fails) or (pc not change and predict success)
assign jen3=(if2id.pcen_btb2id ==1'd1 && !pcchg && (id2ex.operation inside {jal,jalr,beq,bne,bge,bltu,bgeu,blt} ? 1'b1:1'b0));
assign jen4=(id2ex.operation inside {mret,ecall}) ? 1'b1:1'b0;
assign jen5=intrrupt_timing;
assign jen0=jen2 || jen3 || jen4 || jen5;
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    jen1 <= '0;
  else
    jen1 <=jen0;
end
assign flush =jen0||jen1;

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    ex2if.pc2if <='0;
  else 
    ex2if.pc2if <=jen5?mtvec2ex:(jen4?id2ex.pc_mret_ecall2ex:(pcchg?pc_op:(id2ex.pc2ex+'d4)));
end



always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    ex2if.pc_en2if  <= '0;
  else 
    ex2if.pc_en2if  <= jen0; 
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    ex2if.btb_add2if <= '0;
  else
    ex2if.btb_add2if <= jen2;
end//branch prediction

assign ex2if.cpc2if=ex2mem.pc2mem;

// fence_i
logic fence_sig0,flush_fence;
assign fence_sig0=id2ex.operation inside {fence_i};
always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n || clean2ex)
  fence_sig <=1'b0;
else  if(fence_sig0)
  fence_sig <=1'b1;
assign flush_fence=fence_sig0 || fence_sig;

endmodule
