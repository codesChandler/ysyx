module ysyx_22040632_top(
  input logic clk,
  input logic rst_n,
  input logic [31:0] inst,
  output logic [63:0] pc);

logic pcchg;
logic rdy;
logic [63:0] src1;
logic [63:0] src2;
logic [3:0] operation;
logic [63:0] data;
logic [63:0] pc_op;
ysyx_22040632_EXU ysyx_22040632_EXU_i
(
    .clk(clk),
    .rst_n(rst_n),
    .src1(src1),
    .src2(src2),
    .pc(pc),
    .operation(operation),
    .data_out(data),
    .pc_op(pc_op),
    .pcchg(pcchg),
    .rdy(rdy)
);

ysyx_22040632_IFU ysyx_22040632_IFU_i(
  .clk(clk),
  .rst_n(rst_n),
  .pcchg(pcchg),
  .pc_op(pc_op),
  .pc(pc)
);

ysyx_22040632_IDU ysyx_22040632_IDU_i(
  .clk(clk),
  .rst_n(rst_n),
  .inst(inst),
  .data_in(data),
  .rdy(rdy),
  .pc(pc),
  .src1(src1),
  .src2(src2),
  .operation(operation)
);

endmodule

