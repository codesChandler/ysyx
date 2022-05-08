module ysyx_22040632_RegisterFile (
  input clk,
  input rst_n,
  //input [31:0] data_in,
  input [63:0] waddr,
  //input wen,
  output data_out
);
  reg [DATA_WIDTH-1:0] rf [ADDR_WIDTH-1:0];
  always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) begin
      for(int i=0;i<64;i++)
        rf[i] <= 32'hff010113;
        data_out<='0;
    end
    else data_out <= rf[waddr];
  end


endmodule
