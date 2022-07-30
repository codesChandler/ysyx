
`include "ysyx_22040632_RISCV_PKG.svh"
module ysyx_22040632_exu import ysyx_22040632_RISCV_PKG::*;
(
    input logic clk,
    input logic rst_n,
    input logic [63:0] src1,
    input logic [63:0] src2,
    input logic [63:0] dest,
    input logic [63:0] pc,
    input func operation,
    input logic op_div,
    output logic [63:0] data_out,
    output logic [63:0] pc_op,
    output logic pcchg,
    output logic rdy,
    ysyx_22040632_divif.cpu dif,
    ysyx_22040632_mulif.cpu mif,
    output logic alu_busy
);

logic [63:0] data_op;
logic rrst_n;
logic gprchg;
logic [63:0] src1_op;
logic [63:0] src2_op;
logic [63:0] ld_wr;
logic div_valid_o;
logic signed_o;
logic divw_o;
logic div_doing;
//异步复位，同步释放
always_ff @(posedge clk)
  rrst_n <= rst_n;

always_comb begin
  case(operation)
  addi,addiw,andi,srai,andr,sllw,sltiu,sltu,slt:begin src1_op=src1;src2_op=src2;gprchg='1;end
  auipc:begin src1_op=src1;src2_op=pc;gprchg='1;end
  //sltiu:begin src1_op=src1;src2_op=pc;gprchg='1;end
  lw,ld,lbu,lh,lhu:begin src1_op=src1;src2_op=src2;gprchg='1;end
  lui:begin src1_op=src1;src2_op=src2;gprchg='1;end
  jal:begin src1_op=64'd4;src2_op=pc;gprchg='1;end
  jalr:begin src1_op=64'd4;src2_op=pc;gprchg='1;end
  addw,subw:begin src1_op=src1;src2_op=src2;gprchg='1;end
  xori,slli,srli,slliw,sraiw,srliw,sraw,srlw:begin src1_op=src1;src2_op=src2;gprchg='1;end
  mulw,divw,remw,remuw,divuw:begin src1_op=src1;src2_op=src2;gprchg='1;end
  sub,add,orr,mul:begin src1_op=src1;src2_op=src2;gprchg='1;end
  beq,bne,bge,bltu,bgeu,blt:begin src1_op=dest;src2_op=pc;gprchg='0;end
  sd,sb,sw,sh:begin src1_op=src1;src2_op=src2;gprchg='0;end
  default:begin src1_op=64'd4;src2_op=64'd100;gprchg='1;end
  endcase
end

always_comb begin
  case(operation)
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
    case(operation)
    sub,subw:data_op=src1_op-src2_op;
    srai:data_op=($signed(src1_op))>>>src2_op[4:0];
    andi,andr:data_op=src2_op&src1_op;
    xori:data_op=src2_op^src1_op;
    orr:data_op=src2_op|src1_op;
    sllw,slliw:data_op=src1_op<<src2_op[4:0];
    slli:data_op=src1_op<<src2_op[5:0];
    srli:data_op=src1_op>>src2_op[5:0];
    sraiw,sraw:data_op={{32{1'b0}},($signed(src1_op[31:0]))>>>src2_op[4:0]};
    srliw,srlw:data_op={{32{1'b0}},(src1_op[31:0])>>src2_op[4:0]};
    
    // divw:data_op={{32{1'b0}},$signed(src1_op[31:0])/$signed(src2_op[31:0])};
    // divuw:data_op={{32{1'b0}},src1_op[31:0]/src2_op[31:0]};
    divw:data_op=dif.quotient;
    divuw:data_op=dif.quotient;
    remw:data_op=dif.remainder;
    remuw:data_op=dif.remainder;
    sltiu,sltu:data_op=(src1_op<src2_op)?64'b1:'0;
    slt:data_op=($signed(src1_op)<$signed(src2_op))?64'b1:'0;
    mul:data_op=mif.result_lo;
    mulw:data_op=mif.result_lo;
    default:data_op=src1_op+src2_op;
    endcase

//for multiply
assign mif.multiplicand=src1_op;
assign mif.multiplier=src2_op;

always_comb begin
  case(operation)
    mulw:mif.mulw=1'b1;
    default:mif.mulw=1'b0;
  endcase
end

always_comb begin
  case(operation)
    mulw,mul:mif.mul_signed=2'b11;
    default:mif.mul_signed=2'b00;
  endcase
end



//for divide
assign dif.dividend=src1_op;
assign dif.divisor=src2_op;


assign dif.div_valid=op_div && !div_doing && !dif.out_valid;;
assign alu_busy  = op_div && !dif.out_valid;

always_comb begin
      case(operation)
        divw,remw:dif.div_signed=1'b1;
        default:dif.div_signed=1'b0;
      endcase
    end

always_comb begin
      case(operation)
        divw,divuw,remw,remuw:dif.divw=1'b1;
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

always_comb begin
  if(dif.div_valid && dif.div_ready) begin
    case(dif.divw)
    1'b1:div_exec(32);
    default:div_exec(64);
    endcase
  end

end

//for load and store
always_comb begin
  case(operation)
  lw,ld,lbu,lh,lhu:begin paddr_read(data_op, ld_wr);end//$display("addr%x",data_op);$display("data%x",ld_wr);end
  default:ld_wr='0;
  endcase
end

always_comb begin
  case(operation)
  sd:paddr_write(data_op, dest, 255);
  sb:paddr_write(data_op, dest,   1);
  sw:paddr_write(data_op, dest,  15);
  sh:paddr_write(data_op, dest,  3);
  default:;
  endcase
end

always_comb begin
  case(operation)
  lw:data_out=(data_op%8==0)?{{32{ld_wr[31]}},ld_wr[31:0]}:{{32{ld_wr[63]}},ld_wr[63:32]};
  ld:begin data_out=ld_wr;end//$display("ld");end
  lbu:begin 
            unique case(data_op & 64'd7)
              64'd0: data_out={{56{1'b0}},ld_wr[7:0]};
              64'd1: data_out={{56{1'b0}},ld_wr[15:8]};
              64'd2: data_out={{56{1'b0}},ld_wr[23:16]};
              64'd3: data_out={{56{1'b0}},ld_wr[31:24]};
              64'd4: data_out={{56{1'b0}},ld_wr[39:32]};
              64'd5: data_out={{56{1'b0}},ld_wr[47:40]};
              64'd6: data_out={{56{1'b0}},ld_wr[55:48]};
              64'd7: data_out={{56{1'b0}},ld_wr[63:56]};
            endcase end
  lh:begin
           unique case(data_op & 64'd7)
              64'd0: data_out={{48{ld_wr[15]}},ld_wr[15:0]};
              //64'd1: data_out={{48{ld_wr[23]}},ld_wr[23:8]};
              64'd2: data_out={{48{ld_wr[31]}},ld_wr[31:16]};
              //64'd3: data_out={{48{ld_wr[39]}},ld_wr[39:24]};
              64'd4: data_out={{48{ld_wr[47]}},ld_wr[47:32]};
              //64'd5: data_out={{48{ld_wr[55]}},ld_wr[55:40]};
              64'd6: data_out={{48{ld_wr[63]}},ld_wr[63:48]};
              //64'd7: data_out={{48{1'b0}},ld_wr[63:56]};
            endcase end
  lhu:begin
           unique case(data_op & 64'd7)
              64'd0: data_out={{48{1'b0}},ld_wr[15:0]};
              //64'd1: data_out={{48{ld_wr[23]}},ld_wr[23:8]};
              64'd2: data_out={{48{1'b0}},ld_wr[31:16]};
              //64'd3: data_out={{48{ld_wr[39]}},ld_wr[39:24]};
              64'd4: data_out={{48{1'b0}},ld_wr[47:32]};
              //64'd5: data_out={{48{ld_wr[55]}},ld_wr[55:40]};
              64'd6: data_out={{48{1'b0}},ld_wr[63:48]};
              //64'd7: data_out={{48{1'b0}},ld_wr[63:56]};
            endcase end
  addw,addiw,sllw,slliw,mulw,divw,remw,subw,remuw,divuw,sraiw,srliw,sraw,srlw:data_out={{32{data_op[31]}},data_op[31:0]};

  default:data_out=data_op;
  endcase
end

//for jump
always_comb
  case(operation)
    jal:pc_op=src1+pc;
    jalr:pc_op=src1+src2;
    beq,bne,bge,bltu,bgeu,blt:pc_op=pc+dest;
    default:pc_op='0;
  endcase 
  

assign rdy=gprchg;


endmodule
