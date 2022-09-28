`include "ysyx_22040632_riscv_pkg.svh"
module ysyx_22040632_clint(
  input logic clk,
  input logic rrst_n,
  input logic mstatus_mie_bit,
  input logic mie_mtie_bit,
  input logic intrrupt_ack2clint,
  ysyx_22040632_mem2clint.clint mem2clint,


  output logic intrrupt_timing2ex
);
// `define ysyx_22040632_MTIMECMP_ADDR 32'h2004000
// `define ysyx_22040632_MTIME_ADDR    32'h200BFF8

logic wen_clint;
logic [63:0] data_write_clint;
logic [31:0] addr_clint;
logic [63:0] data_read_clint;
assign wen_clint=mem2clint.wen_clint;
assign data_write_clint=mem2clint.data_write_clint;
assign addr_clint=mem2clint.addr_clint;
assign mem2clint.data_read_clint=data_read_clint;

logic [63:0] clint [1:0];//{mtimecmp,mtime}


always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n || intrrupt_ack2clint || !(mstatus_mie_bit && mie_mtie_bit && clint[1] >=clint[0]))
  intrrupt_timing2ex<='0;
else if(mstatus_mie_bit && mie_mtie_bit && clint[1] >=clint[0])
  intrrupt_timing2ex<=1'b1;
else 
  intrrupt_timing2ex<=intrrupt_timing2ex;

logic [63:0] mtimecmp_old;
always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n)
  mtimecmp_old <= '0;
else if(intrrupt_timing2ex)
  mtimecmp_old <= clint[0];
else mtimecmp_old <= mtimecmp_old;

//write
always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n)
  clint[0] <= '0;
else if(wen_clint && addr_clint==`ysyx_22040632_MTIMECMP_ADDR)
  clint[0] <= data_write_clint;
else
  clint[0] <= clint[0];

always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n)
  clint[1] <= '0;
else if(wen_clint && addr_clint==`ysyx_22040632_MTIME_ADDR)
  clint[1] <= data_write_clint;
else
  clint[1] <= clint[1]+64'd1;

//read
always_comb begin
  case(addr_clint)
    `ysyx_22040632_MTIMECMP_ADDR:data_read_clint=clint[0];
    `ysyx_22040632_MTIME_ADDR   :data_read_clint=clint[1];    
    default:data_read_clint='0;
  endcase
end

endmodule