`include "ysyx_22040632_riscv_pkg.svh"
module ysyx_22040632_ifu(
  input logic clk,
  input logic rrst_n,
  input logic flush,
  input logic alu_busy,
  input logic fence_sig,
  output logic [31:0] cpc,
  ysyx_22040632_ex2if.ifu ex2if,
  ysyx_22040632_if2id.ifu if2id,
  ysyx_22040632_id2if.ifu id2if,
  ysyx_22040632_if2ic.ifu if2ic//ifu to icache
);

assign cpc=pc;
logic [31:0] inst_t,pc;
logic [63:0] BTB[7:0];//Branch Target Buffer
logic [155:0] inst_pb;//{28'b tag bits,128 'b inst bits} prefetch instruction from icache
logic [2:0] index_btb;//match index in btb
logic pcen_btb;
logic rw_sh;//shakehand_done

logic [31:0] pc_nxt_miss_pre_fail;
logic pcen_nxt_miss_pre_fail;

logic miss_in_inst_pb;


logic  uncacheable,fetched_uncacheable;
logic [31:0] inst_uncacheable;
logic [5:0] addr_uncacheable;
assign uncacheable=     (`ysyx_22040632_Chip_Link_MMIO_Start<=pc      &&   pc<=`ysyx_22040632_Chip_Link_MMIO_End    )
                    ||  (`ysyx_22040632_SPI_flash_XIP_mode_Start<=pc  &&   pc<=`ysyx_22040632_SPI_flash_XIP_mode_End)
                    ||  (`ysyx_22040632_SPI_controller_Start<=pc      &&   pc<=`ysyx_22040632_SPI_controller_End    )
                    ||  (`ysyx_22040632_UART16550_Start<=pc           &&   pc<=`ysyx_22040632_UART16550_End         )
                    ||  (`ysyx_22040632_VGA_Start<=pc                 &&   pc<=`ysyx_22040632_VGA_End               )
                    ||  (`ysyx_22040632_PS2_Start<=pc                 &&   pc<=`ysyx_22040632_PS2_End               )
                    ||  (`ysyx_22040632_Ethernet_Start<=pc            &&   pc<=`ysyx_22040632_Ethernet_End          )
                    ||  (`ysyx_22040632_SDRAM_Start<=pc);
assign if2ic.uncacheable=uncacheable;
assign addr_uncacheable={3'b0,pc[2:0]}<<3;
assign inst_uncacheable=if2ic.inst[{1'b0,addr_uncacheable}+:32];

always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n)
  fetched_uncacheable<='0;
else
  fetched_uncacheable<=rw_sh;

//uncacheable,if2ic.inst 's 1st 64bits store the data from axi

logic pc_en;
always_ff @(posedge clk or negedge rrst_n)//delay 1 beat
begin
  if(!rrst_n)
    pc_en<=1'b0;
  else
    pc_en<=ex2if.pc_en2if;
end

always_ff @(posedge clk or negedge rrst_n) begin
  if(!rrst_n)
    pc <= 32'h80_000_000;
  else if(pcen_nxt_miss_pre_fail && ((!miss_in_inst_pb && !uncacheable) || (uncacheable && fetched_uncacheable)))
    pc <= pc_nxt_miss_pre_fail;
  else if(ex2if.pc_en2if && ((!miss_in_inst_pb && !uncacheable) || (uncacheable && fetched_uncacheable)))//last pc miss and cache needs read axi
    pc <= ex2if.pc2if;
  else if(id2if.block_id2if || (miss_in_inst_pb && !uncacheable) || alu_busy || fence_sig || (uncacheable && !fetched_uncacheable))
    pc <= pc;
  else if(((!miss_in_inst_pb && !uncacheable) || (uncacheable && fetched_uncacheable)) && !pc_en)
    pc <= pcen_btb?BTB[index_btb][31:0]:(pc + 32'd4);
end

//static prediction failed but the pc from static prediction miss in prefetch instruction buffer or flash
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    pc_nxt_miss_pre_fail <='0;
  else if(ex2if.pc_en2if && ((miss_in_inst_pb && !uncacheable) || (uncacheable && !fetched_uncacheable)))
    pc_nxt_miss_pre_fail <= ex2if.pc2if;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    pcen_nxt_miss_pre_fail <= '0;
  else if((!miss_in_inst_pb && !uncacheable) || (uncacheable && fetched_uncacheable))
    pcen_nxt_miss_pre_fail <= '0;
  else if(ex2if.pc_en2if && ((miss_in_inst_pb && !uncacheable) || (uncacheable && !fetched_uncacheable)))
    pcen_nxt_miss_pre_fail <= 1'b1;
end


/***************branch target buffer***********/
logic [2:0] cnt;//index for adding jump pc to btb
logic btb_en;
assign btb_en=ex2if.btb_add2if &&(ex2if.cpc2if !=BTB[cnt-1][63:32]);//jump and add jump pc to btb
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    cnt <= '0;
  else if(fence_sig)
    cnt <='0;
  else if(btb_en)
    cnt <= cnt + 'd1;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    for(int i=0;i<8;i++)
      BTB[i] <= '0;
  else if(fence_sig)
    for(int i=0;i<8;i++)
      BTB[i] <= '0;
  else if(btb_en)
    BTB[cnt] <={ex2if.cpc2if,ex2if.pc2if};
  else
    BTB <= BTB;
end

always_comb begin
  case(pc)
    BTB[0][63:32]:begin index_btb='d0;pcen_btb=1'b1;end
    BTB[1][63:32]:begin index_btb='d1;pcen_btb=1'b1;end
    BTB[2][63:32]:begin index_btb='d2;pcen_btb=1'b1;end
    BTB[3][63:32]:begin index_btb='d3;pcen_btb=1'b1;end
    BTB[4][63:32]:begin index_btb='d4;pcen_btb=1'b1;end
    BTB[5][63:32]:begin index_btb='d5;pcen_btb=1'b1;end
    BTB[6][63:32]:begin index_btb='d6;pcen_btb=1'b1;end
    BTB[7][63:32]:begin index_btb='d7;pcen_btb=1'b1;end
    default:begin index_btb='d0;pcen_btb=1'b0;end
  endcase
end

/****************axi instruction fetch*************/
logic inst_pb_sh;
assign rw_sh=if2ic.ready&if2ic.valid;//to indicate intr got
assign if2ic.pc=pc;//to avoid pc change but send axi pc+4

assign if2ic.valid=miss_in_inst_pb || uncacheable;//valid;

always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    inst_pb <='0;
  else if(fence_sig)
    inst_pb <='0;
  else if((rw_sh|| inst_pb_sh) && !uncacheable) 
    inst_pb <={pc[31:4],if2ic.inst};

always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    inst_pb_sh<='0;
  else if(fence_sig || uncacheable)
    inst_pb_sh<='0;
  else
    inst_pb_sh<=rw_sh;


assign miss_in_inst_pb=(pc[31:4] !=inst_pb[155:128]);

logic [6:0] addr_inside;
assign addr_inside={3'b000,pc[3:0]}<<3;
assign inst_t = uncacheable?inst_uncacheable:(inst_pb_sh?if2ic.inst[addr_inside+:32]:inst_pb[{1'b0,addr_inside}+:32]);

/***************if2id register******************/
logic flush_if;
assign flush_if=flush || pc_en || fence_sig;

always_ff @(posedge clk or negedge rrst_n) begin
  if(!rrst_n)
    if2id.pc2id <= '0;
  else if(flush_if ||pcen_nxt_miss_pre_fail)
    if2id.pc2id <= '0;
  else if(id2if.block_id2if || alu_busy)
    if2id.pc2id <= if2id.pc2id;
  else if((((miss_in_inst_pb && !inst_pb_sh) || rw_sh) && !uncacheable) || (uncacheable && !fetched_uncacheable))
    if2id.pc2id <= '0;
  else
    if2id.pc2id <= pc;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    if2id.inst2id <= '0;
  else if(flush_if ||pcen_nxt_miss_pre_fail)
    if2id.inst2id <= '0;
  else if(id2if.block_id2if|| alu_busy)
    if2id.inst2id <= if2id.inst2id;
  else if((((miss_in_inst_pb && !inst_pb_sh) || rw_sh) && !uncacheable) || (uncacheable && !fetched_uncacheable))
    if2id.inst2id <= '0;
  else 
    if2id.inst2id <= inst_t;
end

logic pcen_btb2id;
always_ff @(posedge clk or negedge rrst_n)//for extern beats
begin
  if(!rrst_n)
    pcen_btb2id <= '0;
  else if(flush_if)
    pcen_btb2id <= '0;
  else if(id2if.block_id2if|| alu_busy)
    pcen_btb2id <= pcen_btb2id;
  else 
    pcen_btb2id <= pcen_btb;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    if2id.pcen_btb2id <= '0;
  else if(flush_if)
    if2id.pcen_btb2id <= '0;
  else if(id2if.block_id2if|| alu_busy)
    if2id.pcen_btb2id <= if2id.pcen_btb2id;
  else 
    if2id.pcen_btb2id <= pcen_btb2id;
end

endmodule