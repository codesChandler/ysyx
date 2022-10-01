`include "ysyx_22040632_riscv_pkg.svh"
`include "ysyx_22040632_axi.svh"
module ysyx_22040632_mem(
  input logic clk,
  input logic rrst_n,

  ysyx_22040632_ex2mem.mem ex2mem,
  ysyx_22040632_mem2wb.mem mem2wb,
  ysyx_22040632_mem2ex.mem mem2ex,
  ysyx_22040632_mem2dc.mem mem2dc,
  ysyx_22040632_mem2id.mem mem2id,
  ysyx_22040632_mem2clint.mem mem2clint,
  output mem_busy
  
);

/****************mem2wb register*************/
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    mem2wb.quit2wb <= '0;
  else
    mem2wb.quit2wb <= ex2mem.quit2mem;
end

logic wt;
assign wt = (mem_busy || ex2mem.ld_en2mem || ex2mem.sd_en2mem) && !en_clint;
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || wt)
    mem2wb.pc2wb <='0;
  else 
    mem2wb.pc2wb <=ex2mem.pc2mem;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || wt)
    mem2wb.inst2wb <='0;
  else 
    mem2wb.inst2wb <=ex2mem.inst2mem;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || wt)
    mem2wb.rd2wb <= '0;
  else 
    mem2wb.rd2wb <= ex2mem.rd2mem;
end
assign mem2ex.rd2ex_2cy= mem2wb.rd2wb;
always_ff @(posedge clk or negedge rrst_n) begin
  if(!rrst_n || wt)
    mem2wb.rd_w_ena2wb <= '0;
  else 
    mem2wb.rd_w_ena2wb <= ex2mem.rd_w_ena;
end

logic ld_en2wb;//for axi load
always_ff @(posedge clk or negedge rrst_n)begin
  if(!rrst_n || en_clint)
    ld_en2wb <= '0;
  else if(mem_busy)
    ld_en2wb <= ld_en2wb;
  else
    ld_en2wb <= ex2mem.ld_en2mem;
end
assign mem2ex.lden2ex_1cy=ld_en2wb;

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || wt)
    mem2wb.ld_en2wb <='0;
  else 
    mem2wb.ld_en2wb <=ex2mem.ld_en2mem || ld_en2wb;
end
assign mem2ex.lden2ex_2cy=mem2wb.ld_en2wb;
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || wt)
    mem2wb.data2wb <='0;
  else 
    mem2wb.data2wb <=ex2mem.data2mem;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || wt)
    mem2wb.data_ld2wb<='0;
  else 
    mem2wb.data_ld2wb<=data_ld;
end
assign mem2ex.data_ld2ex_2cy = mem2wb.data_ld2wb;


//csr
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    mem2wb.wen_ecall2wb <= '0;
  else
    mem2wb.wen_ecall2wb <= ex2mem.wen_ecall2mem;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    mem2wb.NO2wb <= '0;
  else
    mem2wb.NO2wb <= ex2mem.NO2mem;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    mem2wb.wen_csr2wb <= '0;
  else
    mem2wb.wen_csr2wb <= ex2mem.wen_csr2mem;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    mem2wb.csr_data_write2wb <= '0;
  else
    mem2wb.csr_data_write2wb <= ex2mem.csr_data_write2mem;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    mem2wb.csr_addr_write2wb <= '0;
  else
    mem2wb.csr_addr_write2wb <= ex2mem.csr_addr_write2mem;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    mem2wb.wen_mstatus_ecall2wb <= '0;
  else
    mem2wb.wen_mstatus_ecall2wb <= ex2mem.wen_mstatus_ecall2mem;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    mem2wb.wen_mstatus_mret2wb <= '0;
  else
    mem2wb.wen_mstatus_mret2wb <= ex2mem.wen_mstatus_mret2mem;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    mem2wb.not_submit2wb <= '0;
  else
    mem2wb.not_submit2wb <= ex2mem.not_submit2mem;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    mem2wb.skip_clint2wb <= '0;
  else
    mem2wb.skip_clint2wb <= en_clint && (ex2mem.ld_en2mem || ex2mem.sd_en2mem || ld_en2wb);
end

//uart
always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    mem2wb.uart_en2wb <= '0;
  else 
    mem2wb.uart_en2wb <= ex2mem.uart_en2mem;
end
/******************load**********************/

//clint load and store
logic en_clint;
assign en_clint=(ex2mem.data2mem[31:0]==`ysyx_22040632_MTIMECMP_ADDR) || (ex2mem.data2mem[31:0]==`ysyx_22040632_MTIME_ADDR);
assign mem2ex.en_clint2ex=en_clint;
assign mem2clint.addr_clint=ex2mem.data2mem[31:0];
assign mem2clint.wen_clint= en_clint && (ex2mem.sd_en2mem || ex2mem.ld_en2mem);
assign mem2clint.data_write_clint=ex2mem.data_ext2mem;

//axi
logic [63:0] ld_wr0,data_ld,ld_wr;
logic ls_sh;
assign ls_sh=(mem2dc.valid && mem2dc.ready) || en_clint;
assign mem2id.ls_sh2id=ls_sh;

always_ff @(posedge clk or negedge rrst_n)
begin
  priority if(!rrst_n)
    mem2dc.valid <= '0;
  else if(ls_sh)
    mem2dc.valid <= '0;
  else if((ex2mem.ld_en2mem || ex2mem.sd_en2mem) && !en_clint)
    mem2dc.valid <= '1;
  else mem2dc.valid <=mem2dc.valid;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  priority if(!rrst_n || ls_sh)
      mem_busy <= '0;
  else if((ex2mem.ld_en2mem || ex2mem.sd_en2mem) && !en_clint)
      mem_busy <= '1;
  else 
      mem_busy <= mem_busy;
end

logic rw_req;
always_ff @(posedge clk or negedge rrst_n) begin
  if(!rrst_n)
    rw_req <= '0;
  else if(ex2mem.ld_en2mem)
    rw_req  <=`ysyx_22040632_REQ_READ;
  else if(ex2mem.sd_en2mem)
    rw_req  <=`ysyx_22040632_REQ_WRITE;
  else 
    rw_req <= rw_req;
end

assign mem2dc.req=rw_req;
assign mem2dc.addr=ex2mem.data2mem[31:0];//to avoid pc change but send axi pc+4
// assign mem2dc.rw_w_data=ex2mem.data_ext2mem;

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    ld_wr0 <='0;
  else if(mem_busy)
    ld_wr0 <= mem2dc.data_read;
  else
    ld_wr0 <= ld_wr0;
end

assign ld_wr=en_clint?mem2clint.data_read_clint:ld_wr0;
always_comb begin
  case(ex2mem.ld_ty)
  lwt:data_ld={{32{ld_wr[31]}},ld_wr[31:0]};
  lwut:data_ld={{32{1'b0}},ld_wr[31:0]};
  ldt:data_ld=ld_wr;
  lbt:data_ld={{56{ld_wr[7]}},ld_wr[7:0]};
  lbut:data_ld={{56{1'b0}},ld_wr[7:0]};
  lht:data_ld={{48{ld_wr[15]}},ld_wr[15:0]};
  lhut:data_ld={{48{1'b0}},ld_wr[15:0]};
  default:data_ld='0;
  endcase
end
assign mem2ex.data_ld2ex_1cy=data_ld;
/*****************store******************/
logic [63:0] wmask;
logic [7:0]  wmask_uncacheble;

always_comb begin
  unique0 case(ex2mem.sd_ty)
  sdt:wmask=64'hffff_ffff_ffff_ffff;
  sbt:begin
            unique case(ex2mem.data2mem & 64'd7)
              64'd0: wmask=64'h0000_0000_0000_00ff;
              64'd1: wmask=64'h0000_0000_0000_ff00;
              64'd2: wmask=64'h0000_0000_00ff_0000;
              64'd3: wmask=64'h0000_0000_ff00_0000;
              64'd4: wmask=64'h0000_00ff_0000_0000;
              64'd5: wmask=64'h0000_ff00_0000_0000;
              64'd6: wmask=64'h00ff_0000_0000_0000;
              64'd7: wmask=64'hff00_0000_0000_0000;
            endcase end
  sht:begin
           unique case(ex2mem.data2mem & 64'd7)
              64'd0: wmask=64'h0000_0000_0000_ffff;
              64'd2: wmask=64'h0000_0000_ffff_0000;
              64'd4: wmask=64'h0000_ffff_0000_0000;
              64'd6: wmask=64'hffff_0000_0000_0000;
            endcase end
  swt:wmask=(ex2mem.data2mem%8==0)?64'h0000_0000_ffff_ffff:64'hffff_ffff_0000_0000;
  default:wmask='0;
  endcase
end
assign mem2dc.wmask=wmask;

always_comb begin
  unique0 case(ex2mem.sd_ty)
  sdt:wmask_uncacheble=8'b1111_1111;
  sbt:begin
            unique case(ex2mem.data2mem & 64'd7)
              64'd0: wmask_uncacheble=8'b0000_0001;
              64'd1: wmask_uncacheble=8'b0000_0010;
              64'd2: wmask_uncacheble=8'b0000_0100;
              64'd3: wmask_uncacheble=8'b0000_1000;
              64'd4: wmask_uncacheble=8'b0001_0000;
              64'd5: wmask_uncacheble=8'b0010_0000;
              64'd6: wmask_uncacheble=8'b0100_0000;
              64'd7: wmask_uncacheble=8'b1000_0000;
            endcase end
  sht:begin
           unique case(ex2mem.data2mem & 64'd7)
              64'd0: wmask_uncacheble=8'b0000_0011;
              64'd2: wmask_uncacheble=8'b0000_1100;
              64'd4: wmask_uncacheble=8'b0011_0000;
              64'd6: wmask_uncacheble=8'b1100_0000;
            endcase end
  swt:wmask_uncacheble=(ex2mem.data2mem%8==0)?8'b0000_1111:8'b1111_0000;
  default:wmask_uncacheble='0;
  endcase
end
assign mem2dc.wmask_uncacheble=wmask_uncacheble;

logic[63:0] data2sd;
assign data2sd=ex2mem.data_ext2mem<<((ex2mem.data2mem & 64'd7)<<3);
assign mem2dc.data_write=data2sd;

//uncacheacle burst size
//Burst size
`define ysyx_22040632_AXI_SIZE_BYTES_1                                    3'b000    
`define ysyx_22040632_AXI_SIZE_BYTES_2                                    3'b001
`define ysyx_22040632_AXI_SIZE_BYTES_4                                    3'b010
`define ysyx_22040632_AXI_SIZE_BYTES_8                                    3'b011
`define ysyx_22040632_AXI_SIZE_BYTES_16                                   3'b100
`define ysyx_22040632_AXI_SIZE_BYTES_32                                   3'b101
`define ysyx_22040632_AXI_SIZE_BYTES_64                                   3'b110
`define ysyx_22040632_AXI_SIZE_BYTES_128                                  3'b111

always_comb 
  if(ex2mem.sd_en2mem)
    unique0 case(ex2mem.sd_ty)
      sdt:mem2dc.size=`ysyx_22040632_AXI_SIZE_BYTES_8 ;
      sbt:mem2dc.size=`ysyx_22040632_AXI_SIZE_BYTES_1 ;
      sht:mem2dc.size=`ysyx_22040632_AXI_SIZE_BYTES_2 ;
      swt:mem2dc.size=`ysyx_22040632_AXI_SIZE_BYTES_4 ;
    default:mem2dc.size=`ysyx_22040632_AXI_SIZE_BYTES_8;
    endcase
  else
    case(ex2mem.ld_ty)
      lwt,lwut:mem2dc.size=`ysyx_22040632_AXI_SIZE_BYTES_4 ;
      ldt:mem2dc.size=`ysyx_22040632_AXI_SIZE_BYTES_8 ;
      lbt,lbut:mem2dc.size=`ysyx_22040632_AXI_SIZE_BYTES_1 ;
      lht,lhut:mem2dc.size=`ysyx_22040632_AXI_SIZE_BYTES_2 ;
    default:mem2dc.size=`ysyx_22040632_AXI_SIZE_BYTES_8;
  endcase

endmodule