module ysyx_22040632_IFU(
  input logic clk,
  input logic rst_n,
  input logic pcchg,
  input logic [63:0] pc_op,
  output logic [63:0] pc
);

logic [63:0] pci=64'h80_000_000;
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
  else
  // begin
    pci <= pci+64'd4;// $display("pc:%h\n",pci);end
end

assign pc=pci;
endmodule
