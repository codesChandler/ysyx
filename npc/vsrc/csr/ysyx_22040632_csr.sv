`include "ysyx_22040632_riscv_pkg.svh"
module ysyx_22040632_csr(
  input logic clk,
  input logic rrst_n,
  ysyx_22040632_wb2csr.csr wb2csr,
  ysyx_22040632_id2csr.csr id2csr,
  output logic mstatus_mie_bit,
  output logic mie_mtie_bit,
  output logic [31:0] mtvec2ex,
  output logic [8:0][63:0] csr_o
);

assign mtvec2ex=csr[1][31:0];

logic wen_ecall;
logic [63:0] NO;//for exception or interrupt
logic [31:0] pc2csr;//for ecall
logic wen_csr;
logic [31:0] csr_addr_write;
logic [63:0] csr_data_write;
assign wen_ecall=wb2csr.wen_ecall2csr;
assign NO=wb2csr.NO2csr;
assign pc2csr=wb2csr.pc2csr;
assign wen_csr=wb2csr.wen_csr2csr;
assign csr_addr_write=wb2csr.csr_addr_write2csr;
assign csr_data_write=wb2csr.csr_data_write2csr;


logic [31:0] csr_addr_read;
logic [63:0] csr_read;
assign csr_addr_read=id2csr.csr_addr_read2csr;
assign id2csr.csr_read2id=csr_read;

logic [31:0] csr_index_w;
logic [63:0] csr [8:0];//{MSTATUS,MTVEC,MEPC,MCAUSE,MCYLCE,MIE,MIP,MHARTID,MSCRATCH}
// `define ysyx_22040632_MHARTID_INDEX 32'hF14
// `define ysyx_22040632_MSCRATCH_INDEX 32'h340

assign csr_index_w=csr_addr_write;
assign mstatus_mie_bit=csr[0][3];
assign mie_mtie_bit=csr[5][7];
/**********************difftest************/
always_comb begin
  if(csr_index_w==`ysyx_22040632_MSTATUS_INDEX && wen_csr)
    csr_o[0] = (csr_data_write[14:13]==2'b11)?{1'b1,csr_data_write[62:0]}:csr_data_write;
  else if(wb2csr.wen_mstatus_ecall2csr)
    csr_o[0] = {csr[0][63:13],2'b11,csr[0][10:8],csr[0][3],csr[0][6:4],1'b0,csr[0][2:0]};
  else if(wb2csr.wen_mstatus_mret2csr)
    csr_o[0] = {csr[0][63:13],2'b00,csr[0][10:8],1'b1,csr[0][6:4],csr[0][7],csr[0][2:0]};
  else 
    csr_o[0] = csr[0];
end


always_comb begin
  if(csr_index_w==`ysyx_22040632_MTVEC_INDEX && wen_csr)
    csr_o[1] = csr_data_write;
  else 
    csr_o[1] = csr[1];
end

always_comb
  if(csr_index_w==`ysyx_22040632_MEPC_INDEX && wen_csr)
    csr_o[2] = csr_data_write;
  else if(wen_ecall)
    csr_o[2] = {32'b0,pc2csr};
  else 
    csr_o[2] = csr[2];

always_comb
  if((csr_index_w==`ysyx_22040632_MCAUSE_INDEX && wen_csr))
    csr_o[3] = csr_data_write;
  else if(wen_ecall)
    csr_o[3] = NO;
  else 
    csr_o[3] = csr[3];

always_comb begin
  if(csr_index_w==`ysyx_22040632_MCYCLE_INDEX && wen_csr)
    csr_o[4] = csr_data_write;
  else 
    csr_o[4] = csr[4];
end

always_comb begin
  if(csr_index_w==`ysyx_22040632_MIE_INDEX && wen_csr)
    csr_o[5] = csr_data_write;
  else 
    csr_o[5] = csr[5];
end

always_comb begin
  if(csr_index_w==`ysyx_22040632_MIP_INDEX && wen_csr)
    csr_o[6] = csr_data_write;
  else 
    csr_o[6] = csr[6];
end

// always_comb begin
//   if(csr_index_w==`ysyx_22040632_MHARTID_INDEX && wen_csr)
//     csr_o[7] = csr_data_write;
//   else 
//     csr_o[7] = csr[6];
// end

always_comb begin
  if(csr_index_w==`ysyx_22040632_MSCRATCH_INDEX && wen_csr)
    csr_o[8] = csr_data_write;
  else 
    csr_o[8] = csr[8];
end
/*************csr read or write*********/
always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    csr[0] <= 64'hA00000000;
  else if(csr_index_w==`ysyx_22040632_MSTATUS_INDEX && wen_csr)
    csr[0] <= (csr_data_write[14:13]==2'b11)?{1'b1,csr_data_write[62:0]}:csr_data_write;
  else if(wb2csr.wen_mstatus_ecall2csr)
    for(int i=0;i<64;i++)
      if(i==32'd3)
        csr[0][i]<=1'b0;
      else if(i==32'd7)
        csr[0][i]<=csr[0][3];
      else if((i==32'd11)||(i==32'd12))
        csr[0][i]<=1'b1;
      else
        csr[0][i]<=csr[0][i];
  else if(wb2csr.wen_mstatus_mret2csr)
    for(int i=0;i<32;i++)
      if(i==32'd3)
        csr[0][i]<=csr[0][7];
      else if(i==32'd7)
        csr[0][i]<=1'b1;
      else if((i==32'd11)||(i==32'd12))
        csr[0][i]<=1'b0;
      else
        csr[0][i]<=csr[0][i];
  else 
    csr[0] <= csr[0];

always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    csr[1] <= '0;
  else if(csr_index_w==`ysyx_22040632_MTVEC_INDEX && wen_csr)
    csr[1] <= csr_data_write;
  else 
    csr[1] <= csr[1];

always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    csr[2] <= '0;
  else if(csr_index_w==`ysyx_22040632_MEPC_INDEX && wen_csr)
    csr[2] <= csr_data_write;
  else if(wen_ecall)
    csr[2] <= {32'b0,pc2csr};
  else 
    csr[2] <= csr[2];

always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    csr[3] <= '0;
  else if(csr_index_w==`ysyx_22040632_MCAUSE_INDEX && wen_csr)
    csr[3] <= csr_data_write;
  else if(wen_ecall)
    csr[3] <= NO;
  else 
    csr[3] <= csr[3];
//MCYLCE,MIE,MIP
always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    csr[4] <= '0;
  else if(csr_index_w==`ysyx_22040632_MCYCLE_INDEX && wen_csr)
    csr[4] <= csr_data_write;
  else 
    csr[4] <= csr[4]+64'd1;

always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    csr[5] <= '0;
  else if(csr_index_w==`ysyx_22040632_MIE_INDEX && wen_csr)
    csr[5] <= csr_data_write;
  else 
    csr[5] <= csr[5];

always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    csr[6] <= '0;
  else if(csr_index_w==`ysyx_22040632_MIP_INDEX && wen_csr)
    csr[6] <= csr_data_write;
  else 
    csr[6] <= csr[6];

always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    csr[7] <= '0;
  else if(csr_index_w==`ysyx_22040632_MHARTID_INDEX && wen_csr)
    csr[7] <= csr_data_write;
  else 
    csr[7] <= csr[7];

always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    csr[8] <= '0;
  else if(csr_index_w==`ysyx_22040632_MSCRATCH_INDEX && wen_csr)
    csr[8] <= csr_data_write;
  else 
    csr[8] <= csr[8];

always_ff begin
  case(csr_addr_read)
    `ysyx_22040632_MSTATUS_INDEX :csr_read=csr[0];
    `ysyx_22040632_MTVEC_INDEX   :csr_read=csr[1];
    `ysyx_22040632_MEPC_INDEX    :csr_read=csr[2];
    `ysyx_22040632_MCAUSE_INDEX  :csr_read=csr[3];
    `ysyx_22040632_MCYCLE_INDEX  :csr_read=csr[4];
    `ysyx_22040632_MIE_INDEX     :csr_read=csr[5];
    `ysyx_22040632_MIP_INDEX     :csr_read=csr[6];
    `ysyx_22040632_MHARTID_INDEX :csr_read=csr[7];
    `ysyx_22040632_MSCRATCH_INDEX:csr_read=csr[8];
    default                      :csr_read='0;  
  endcase
end

endmodule