`include "ysyx_22040632_riscv_pkg.svh"
module ysyx_22040632_top
#(
  parameter RW_DATA_WIDTH  = 64,
  parameter RW_ADDR_WIDTH  = 64,
  parameter AXI_DATA_WIDTH = 64,
  parameter AXI_ADDR_WIDTH = 32,
  parameter AXI_ID_WIDTH   = 4,
  parameter AXI_STRB_WIDTH = AXI_DATA_WIDTH/8,
  parameter AXI_USER_WIDTH =1
)(
  input logic clk,
  input logic rst_n,

  //to cpp
  output logic [31:0] pc,
  output logic [31:0] inst,
  output logic submit,
  output logic [31:0] npc,
  output logic skip,

  //axi4 as master
  output axi_aw_valid_o,
  output [AXI_ADDR_WIDTH-1:0] axi_aw_addr_o,
  output [2:0] axi_aw_prot_o,
  output [AXI_ID_WIDTH-1:0] axi_aw_id_o,
  output [AXI_USER_WIDTH-1:0] axi_aw_user_o,
  output [7:0] axi_aw_len_o,
  output [2:0] axi_aw_size_o,
  output [1:0] axi_aw_burst_o,
  output axi_aw_lock_o,
  output [3:0] axi_aw_cache_o,
  output [3:0] axi_aw_qos_o,
  output [3:0] axi_aw_region_o,
  input axi_aw_ready_i,

  output axi_w_valid_o,
  output [AXI_DATA_WIDTH-1:0] axi_w_data_o,
  output [AXI_DATA_WIDTH/8-1:0] axi_w_strb_o,
  output axi_w_last_o,
  output [AXI_USER_WIDTH-1:0] axi_w_user_o,
  input axi_w_ready_i,

  output axi_b_ready_o,
  input axi_b_valid_i,
  input [1:0] axi_b_resp_i,
  input [AXI_ID_WIDTH-1:0] axi_b_id_i,
  input [AXI_USER_WIDTH-1:0] axi_b_user_i,

  output axi_ar_valid_o, 
  output [AXI_ADDR_WIDTH-1:0] axi_ar_addr_o,
  output [2:0] axi_ar_prot_o,
  output [AXI_ID_WIDTH-1:0] axi_ar_id_o,
  output [AXI_USER_WIDTH-1:0] axi_ar_user_o,
  output [7:0] axi_ar_len_o,
  output [2:0] axi_ar_size_o,
  output [1:0] axi_ar_burst_o,
  output axi_ar_lock_o,
  output [3:0] axi_ar_cache_o,
  output [3:0] axi_ar_qos_o,
  output [3:0] axi_ar_region_o,
  input axi_ar_ready_i,

  output axi_r_ready_o,
  input axi_r_valid_i,
  input [1:0] axi_r_resp_i,
  input [AXI_DATA_WIDTH-1:0] axi_r_data_i,
  input axi_r_last_i,
  input [AXI_ID_WIDTH-1:0] axi_r_id_i,
  input [AXI_USER_WIDTH-1:0] axi_r_user_i);//master direction

ysyx_22040632_divif dif();
ysyx_22040632_mulif mif();
ysyx_22040632_ex2if ex2if();
ysyx_22040632_if2id if2id();
ysyx_22040632_wb2id wb2id();
ysyx_22040632_id2ex id2ex();
ysyx_22040632_ex2mem ex2mem();
ysyx_22040632_mem2wb mem2wb();
ysyx_22040632_id2if  id2if();
ysyx_22040632_mem2ex mem2ex();
ysyx_22040632_ex2id  ex2id();
logic flush;
logic mem_busy;
logic alu_busy;
logic fence_sig;
logic clean2ex;
logic [31:0] endcode,cpc;

ysyx_22040632_imif imif();
ysyx_22040632_imif immem();
ysyx_22040632_imif imarb();
ysyx_22040632_axiif axi();
ysyx_22040632_if2ic if2ic();
ysyx_22040632_mem2dc mem2dc();
ysyx_22040632_mem2id mem2id();
ysyx_22040632_wb2csr wb2csr();
ysyx_22040632_id2csr id2csr();
ysyx_22040632_mem2clint mem2clint();

//difftest
logic [63:0] regs_o[31:0];
logic rd_w_ena;
logic [4 : 0]rd_w_addr;
logic [63:0]rd_data;

//Asynchronous reset and synchronous evacuation
logic rrst_n,rst_s1,rst_s2;
always @ (posedge clk or negedge rst_n)
    if (!rst_n) begin
        rst_s1 <= 1'b0;
        rst_s2 <= 1'b0;
    end
    else begin
        rst_s1 <= 1'b1;
        rst_s2 <= rst_s1;
    end
assign rrst_n = rst_s2;


ysyx_22040632_rw ysyx_22040632_rw_i
(
  .clk(clk),
  .rrst_n,
  .axim(axi),//master
	.ims(imarb)
);

ysyx_22040632_arbiter ysyx_22040632_arbiter_i(
  .clk,
  .rrst_n,
  .ims_if(imif),
  .ims_mem(immem),
  .imm(imarb)
);

ysyx_22040632_dcache ysyx_22040632_dcache_i(
  .clk,
  .rrst_n,
  .fence_sig,
  .clean2ex,
  .immem,
  .mem2dc
);

ysyx_22040632_icache ysyx_22040632_icache_i(
  .clk,
  .rrst_n,
  .fence_sig,
  .imif,
  .if2ic
);

ysyx_22040632_ifu ysyx_22040632_ifu_i(
  .clk,
  .rrst_n,
  .ex2if,
  .if2id,
  .flush,
  .alu_busy,
  .fence_sig,
  .cpc,

  .id2if,
  .if2ic
);


ysyx_22040632_idu ysyx_22040632_idu_i(
  .clk,
  .rrst_n,

  .alu_busy,
  .fence_sig,
  .wb2id,
  .if2id,
  .mem2id,
  .id2ex,

  .regs_o,
  .endcode,
  .flush,
  .ex2id,
  .id2csr,
  .id2if

);

ysyx_22040632_exu ysyx_22040632_exu_i
(
  .clk,
  .rrst_n,
    
  .id2ex,
  .ex2if,
  .if2id,

  .ex2mem,
  .mem2wb,
  .ex2id,

  .dif,
  .mif,
  .flush,
  .fence_sig,
  .clean2ex,
  .mem_busy,
  .alu_busy,
  .intrrupt_timing2ex,
  .intrrupt_ack2clint,
  .mtvec2ex,
  .mem2ex

);

ysyx_22040632_mul ysyx_22040632_mul_i(
  .mif
);

ysyx_22040632_div ysyx_22040632_div_i(
  .clk,
  .rrst_n,
  .dif
);

ysyx_22040632_mem ysyx_22040632_mem_i
(
  .clk,
  .rrst_n,
  .mem_busy,
  .ex2mem,
  .mem2wb,
  .mem2ex,
  .mem2id,
  .mem2dc,
  .mem2clint
);

ysyx_22040632_wb ysyx_22040632_wb_i
( 
  .endcode,
  .mem2wb,
  .wb2id,
  .wb2csr
);

logic [8:0][63:0] csr_o;//{MSTATUS,MTVEC,MEPC,MCAUSE}
logic [31:0] mtvec2ex;
ysyx_22040632_csr ysyx_22040632_csr_i(
  .clk,
  .rrst_n,
  .mstatus_mie_bit,
  .mie_mtie_bit,
  .wb2csr,
  .id2csr,
  .mtvec2ex,
  .csr_o
);

logic mstatus_mie_bit;
logic mie_mtie_bit;
logic intrrupt_timing2ex;
logic intrrupt_ack2clint;
ysyx_22040632_clint ysyx_22040632_clint_i(
  .clk,
  .rrst_n,
  .mstatus_mie_bit,
  .mie_mtie_bit,  
  .intrrupt_ack2clint,
  .mem2clint,
  .intrrupt_timing2ex
);

assign pc=mem2wb.pc2wb;
assign inst=mem2wb.inst2wb;
assign submit=((inst != 0) && (pc >= 32'h8000_0000  && pc<=32'h88000000) && (!mem2wb.not_submit2wb) )|| mem2wb.fence_ien2wb;
assign skip=mem2wb.fence_ien2wb;


logic if2id_en,id2ex_en,ex2mem_en;
assign if2id_en=if2id.pc2id!='0;
assign id2ex_en=id2ex.pc2ex!='0;
assign ex2mem_en=ex2mem.pc2mem!='0;

always_comb begin
  case({if2id_en,id2ex_en,ex2mem_en}) inside
    3'b??1:npc=ex2mem.pc2mem;
    3'b?10:npc=id2ex.pc2ex;
    3'b100:npc=if2id.pc2id;
    default:npc=cpc;
  endcase
end

/**************axi connection******/
always_ff @(posedge clk)
  axi.axi_aw_ready<=axi_aw_ready_i;            
assign axi_aw_valid_o=axi.axi_aw_valid;
assign axi_aw_addr_o=axi.axi_aw_addr;
assign axi_aw_id_o=axi.axi_aw_id;
assign axi_aw_len_o=axi.axi_aw_len;
assign axi_aw_size_o=axi.axi_aw_size;
assign axi_aw_burst_o=axi.axi_aw_burst;

always_ff @(posedge clk)
  axi.axi_w_ready<=axi_w_ready_i;                
assign axi_w_valid_o=axi.axi_w_valid;
assign axi_w_data_o=axi.axi_w_data;
assign axi_w_strb_o=axi.axi_w_strb;
assign axi_w_last_o=axi.axi_w_last;
    
assign axi_b_ready_o=axi.axi_b_ready;
always_ff @(posedge clk)
  axi.axi_b_valid=axi_b_valid_i;
always_ff @(posedge clk)
  axi.axi_b_resp<=axi_b_resp_i;  
always_ff @(posedge clk)               
  axi.axi_b_id<=axi_b_id_i;

always_ff @(posedge clk)
  axi.axi_ar_ready=axi_ar_ready_i;                
assign axi_ar_valid_o=axi.axi_ar_valid;
assign axi_ar_addr_o=axi.axi_ar_addr;
assign axi_ar_id_o=axi.axi_ar_id;
assign axi_ar_len_o=axi.axi_ar_len;
assign axi_ar_size_o=axi.axi_ar_size;
assign axi_ar_burst_o=axi.axi_ar_burst;
    
    
assign  axi_r_ready_o=axi.axi_r_ready;
always_ff @(posedge clk)  begin               
  axi.axi_r_valid<=axi_r_valid_i;                
  axi.axi_r_resp<=axi_r_resp_i;
  axi.axi_r_data<=axi_r_data_i;
  axi.axi_r_last<=axi_r_last_i;
  axi.axi_r_id<=axi_r_id_i;end

endmodule

