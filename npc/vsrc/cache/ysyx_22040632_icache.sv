`include "ysyx_22040632_axi.svh"
module ysyx_22040632_icache(
  input logic clk,
  input logic rrst_n,
  input logic fence_sig,
  ysyx_22040632_imif.Master imif,
  ysyx_22040632_if2ic.ic if2ic
);

logic [127:0] data_write,mask;
logic [20:0] addr_tag;
logic [4:0] addr_index;
logic [5:4] addr_inside;
logic hit_1st,hit_2nd;
logic age_1st,age_2nd;
logic wen;
logic w_way;//1'b0 for first way;1'b1 for second way

/***************icache read**************/
assign addr_tag=if2ic.pc[31:11];
assign addr_index=if2ic.pc[10:6];
assign addr_inside=if2ic.pc[5:4];

assign if2ic.ready=if2ic.uncacheable?imif.r_hs:(hit_1st || hit_2nd);

logic [127:0] data_out_1stway,data_out_2ndway;
always_comb begin
  if(if2ic.uncacheable)
    if2ic.inst={64'b0,imif.data_read};
  else
    case({hit_2nd,hit_1st})
      2'b01:if2ic.inst=data_out_1stway;
      2'b10:if2ic.inst=data_out_2ndway;
      default:if2ic.inst='0;
    endcase
end

/************cache miss, axi read********/
logic rw_valid;
logic miss;
logic  [2:0]w_cnt;//1'b0 write low 64 bits;1'b1 write high 64 bits
assign miss = !(hit_1st || hit_2nd) && if2ic.valid && !if2ic.uncacheable;

logic wen0_vld;
always_ff @(posedge clk or negedge rrst_n) begin
  if(!rrst_n)
    rw_valid<=1'b0;
  else if(miss && wen0_vld)
    rw_valid<=1'b1;
  else if(imif.rw_ready)
    rw_valid<=1'b0;
  else 
    rw_valid<=rw_valid;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    wen0_vld <=1'b1;
  else
    wen0_vld <= wen;
end

always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n || wen)
    w_cnt <= '0;
  else if(!wen)
    w_cnt <= w_cnt +3'd1;

always_ff @(posedge clk or negedge rrst_n) begin
  if(!rrst_n || if2ic.uncacheable)
    wen <= 1'b1;
  else if(imif.r_hs)
    wen <= 1'b0;//low level active for data_array write
  else if(imif.r_last)
    wen <= 1'b1;
end

always_comb begin
  case(w_cnt[0])
    1'b0:mask=128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;//low level active for data_array mask
    1'b1:mask=128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
  endcase
end

always_comb begin
  case({age_1st,age_2nd})
    2'b00:  w_way=1'b0;//1'b0 for first way;1'b1 for second way
    2'b10:  w_way=1'b1;
    2'b01:  w_way=1'b0;
    default:w_way=1'b1;
  endcase
end

assign data_write=w_cnt[0]?{imif.data_read,64'b0}:{64'b0,imif.data_read};//axi data 64 bits but ram 128 bits
assign imif.rw_valid=if2ic.uncacheable?(imif.rw_ready?1'b0:1'b1):rw_valid;
assign imif.rw_addr=if2ic.uncacheable?if2ic.pc:{if2ic.pc[31:6],6'b0};
assign imif.rw_req=`ysyx_22040632_REQ_READ;
assign imif.rw_len=if2ic.uncacheable?'d0:'d7;//128*4/64-1=7
assign imif.rw_size=if2ic.uncacheable?`ysyx_22040632_AXI_SIZE_BYTES_4:`ysyx_22040632_AXI_SIZE_BYTES_8;

//for tag array
logic  wen_tag_array;//low leval active
always_ff @(posedge clk or negedge rrst_n)//delay one beat
  if(!rrst_n || w_cnt !=3'd7 || if2ic.uncacheable)
    wen_tag_array <= 1'b1;
  else if(w_cnt==3'd7)
    wen_tag_array <= 1'b0;

/************instantiation*************/

ysyx_22040632_itag_array ysyx_22040632_itag_array_i(
  .clk,
  .rrst_n,
  .wen(wen_tag_array),
  .addr_tag,
  .addr_index,
  .fence_sig,
  .hit_1st,
  .hit_2nd,
  .w_way,//1'b0 for first way;1'b1 for second way
  .age_1st,
  .age_2nd
);


ysyx_22040632_idata_array ysyx_22040632_idata_array_i(
  .clk,
  .rrst_n,
  .wen,
  .w_way,//1'b0 for first way;1'b1 for second way
  .addr_index,
  .addr_inside,
  .mask,
  .data_write,
  .data_out_1stway,
  .data_out_2ndway
);

endmodule