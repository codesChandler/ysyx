`ifndef  ysyx_22040632_AXI;
`define  ysyx_22040632_AXI;
//Burst types
`define ysyx_22040632_AXI_BURST_TYPE_FIXED  2'b00   //fifo
`define ysyx_22040632_AXI_BURST_TYPE_INCR   2'b01   //ram
`define ysyx_22040632_AXI_BURST_TYPE_WRAP   2'b10

//Burst size
`define ysyx_22040632_AXI_SIZE_BYTES_1                                    3'b000    
`define ysyx_22040632_AXI_SIZE_BYTES_2                                    3'b001
`define ysyx_22040632_AXI_SIZE_BYTES_4                                    3'b010
`define ysyx_22040632_AXI_SIZE_BYTES_8                                    3'b011
`define ysyx_22040632_AXI_SIZE_BYTES_16                                   3'b100
`define ysyx_22040632_AXI_SIZE_BYTES_32                                   3'b101
`define ysyx_22040632_AXI_SIZE_BYTES_64                                   3'b110
`define ysyx_22040632_AXI_SIZE_BYTES_128                                  3'b111


`define ysyx_22040632_REQ_WRITE 1'b0
`define ysyx_22040632_REQ_READ  1'b1

`define ysyx_22040632_SIZE_B              3'b000
`define ysyx_22040632_SIZE_H              3'b001
`define ysyx_22040632_SIZE_W              3'b010
`define ysyx_22040632_SIZE_D              3'b011


`endif