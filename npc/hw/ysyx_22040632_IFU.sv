`include "ysyx_22040632_RISCV_PKG.svh"
module ysyx_22040632_IFU(
  input logic clk,
  input logic rst_n,
  input logic pcchg,
  input logic [63:0] pc_op,
  input logic alu_busy,
  output logic [63:0] pc,
  output logic [31:0] inst
);

logic [63:0] pci=64'h80_000_000;
logic [63:0] inst_t;

//异步复位，同步释放
logic rrst_n;
always_ff @(posedge clk) begin
  rrst_n<=rst_n;
end

always_ff @(posedge clk or negedge rrst_n) begin
  if(!rrst_n)
    // begin 
    pci <= 64'h80_000_000;//$display("rrst_n:%h\n",rrst_n);end
  else if(pcchg)
  // begin
    pci <= pc_op;// $display("pcchg:%h\n",pcchg);end
  else if(alu_busy)
    pci <= pci;
  else
  // begin
    pci <= pci+64'd4;// $display("pc:%h\n",pci);end
end


always_comb begin
   paddr_read(pc,inst_t);
end

assign pc=pci;
assign inst=(pci%8==4)?inst_t[63:32]:inst_t[31:0];

endmodule
