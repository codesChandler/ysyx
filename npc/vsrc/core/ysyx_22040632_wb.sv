`include "ysyx_22040632_riscv_pkg.svh"
module ysyx_22040632_wb(

  ysyx_22040632_mem2wb.wb mem2wb,
  ysyx_22040632_wb2id.wb  wb2id,
  ysyx_22040632_wb2csr.wb wb2csr
);

assign wb2id.data2reg=mem2wb.ld_en2wb?mem2wb.data_ld2wb:mem2wb.data2wb;
assign wb2id.rd2reg=mem2wb.rd2wb;
assign wb2id.rd_w_ena2reg=mem2wb.rd_w_ena2wb;

//csr
assign wb2csr.wen_ecall2csr=mem2wb.wen_ecall2wb;
assign wb2csr.NO2csr=mem2wb.NO2wb;
assign wb2csr.pc2csr=mem2wb.pc2wb;
assign wb2csr.wen_csr2csr=mem2wb.wen_csr2wb;
assign wb2csr.csr_data_write2csr=mem2wb.csr_data_write2wb;
assign wb2csr.csr_addr_write2csr=mem2wb.csr_addr_write2wb;
assign wb2csr.wen_mstatus_ecall2csr=mem2wb.wen_mstatus_ecall2wb;
assign wb2csr.wen_mstatus_mret2csr=mem2wb.wen_mstatus_mret2wb;
endmodule