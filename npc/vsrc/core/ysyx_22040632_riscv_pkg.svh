`ifndef  ysyx_22040632_RISCV_PKG;
`define  ysyx_22040632_RISCV_PKG;

typedef enum logic [6:0] {nop,putch,sltiu,addi,auipc,lw,lui,jal,jalr,sd,addw,beq,bne,sub,ld,add,addiw,srai,lbu,andi,andr,sb,sllw,sltu,xori,orr,slli,srli,bge,sw,mulww,divww,remw,bltu,subw,bgeu,remuw,divuw,blt,slt,lh,lhu,sh,slliw,sraiw,mul,srliw,sraw,srlw,ori,sra,sll,xorr,slti,srl,lb,lwu,quit,ecall,mret,csrrs,csrrw,csrrsi,csrrc,csrrci,csrrwi,div,rem,fence_i,divu,remu,mulh} func;
typedef enum logic [3:0] {type_i,type_u,type_j,type_s,type_r,type_b} typet;

typedef enum logic [2:0] {lwt,lwut,ldt,lbut,lbt,lht,lhut} ld_t;

typedef enum logic [1:0] {sdt,sbt,swt,sht} sd_t;

import "DPI-C" function void npcexit(int code);
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);


// `timescale 1ns / 1ps

`define ZERO_WORD  64'h00000000_00000000
`define PC_START   64'h00000000_80000000  
`define REG_BUS    63 : 0     
`define INST_ADD   8'h11

`define AXI_ADDR_WIDTH      64
`define AXI_DATA_WIDTH      64
`define AXI_ID_WIDTH        4
`define AXI_USER_WIDTH      1

`define SIZE_B              2'b00
`define SIZE_H              2'b01
`define SIZE_W              2'b10
`define SIZE_D              2'b11

`define ysyx_22040632_AXI_ADDR_WIDTH      64
`define ysyx_22040632_AXI_DATA_WIDTH      64
`define ysyx_22040632_AXI_ID_WIDTH        4
`define ysyx_22040632_AXI_USER_WIDTH      1

`define REQ_READ            1'b0
`define REQ_WRITE           1'b1

`define RISCV_PRIV_MODE_U   0
`define RISCV_PRIV_MODE_S   1
`define RISCV_PRIV_MODE_M   3

`define ysyx_22040632_MSTATUS_INDEX 32'h300
`define ysyx_22040632_MTVEC_INDEX   32'h305
`define ysyx_22040632_MEPC_INDEX    32'h341
`define ysyx_22040632_MCAUSE_INDEX  32'h342
`define ysyx_22040632_MIE_INDEX     32'h304
`define ysyx_22040632_MIP_INDEX     32'h344
`define ysyx_22040632_MCYCLE_INDEX  32'hB00
`define ysyx_22040632_MHARTID_INDEX 32'hF14
`define ysyx_22040632_MSCRATCH_INDEX 32'h340

`define ysyx_22040632_MTIMECMP_ADDR 32'h2004000
`define ysyx_22040632_MTIME_ADDR    32'h200BFF8

`define ysyx_22040632_Chip_Link_MMIO_Start        32'h40000000
`define ysyx_22040632_Chip_Link_MMIO_End          32'h7fffffff
`define ysyx_22040632_SPI_flash_XIP_mode_Start    32'h30000000
`define ysyx_22040632_SPI_flash_XIP_mode_End      32'h3fffffff
`define ysyx_22040632_SPI_controller_Start        32'h10001000
`define ysyx_22040632_SPI_controller_End          32'h10001fff
`define ysyx_22040632_UART16550_Start             32'ha0000000
`define ysyx_22040632_UART16550_End               32'hafffffff

`define ysyx_22040632_VGA_Start	                  32'h10002000
`define ysyx_22040632_VGA_End	                    32'h10002fff
`define ysyx_22040632_PS2_Start	                  32'h10003000
`define ysyx_22040632_PS2_End	                    32'h10003fff
`define ysyx_22040632_Ethernet_Start	            32'h10004000 
`define ysyx_22040632_Ethernet_End	              32'h10004fff
`define ysyx_22040632_SDRAM_Start	                32'hfc000000 
`define ysyx_22040632_SDRAM_End	                  32'hffffffff


`endif