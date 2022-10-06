`include "ysyx_22040632_axi.svh"
`include "ysyx_22040632_riscv_pkg.svh"
module ysyx_22040632_dcache(
  input logic clk,
  input logic rrst_n,
  input logic fence_sig,
  output logic clean2ex,
  ysyx_22040632_imif.Master immem,
  ysyx_22040632_mem2dc.dc mem2dc
);

logic r_trans,w_trans,hit,dirty,write_done,read_done,immem_hs,dirty_1st,dirty_2nd;
assign r_trans=mem2dc.valid && mem2dc.req == `ysyx_22040632_REQ_READ;
assign w_trans=mem2dc.valid && mem2dc.req == `ysyx_22040632_REQ_WRITE;
assign hit= hit_1st || hit_2nd;
assign immem_hs=immem.rw_ready;
assign read_done = immem_hs;
assign write_done= immem_hs;
enum logic[3:0] {idle,ld_miss_axi_write,ld_miss_axi_read,ld_miss_tag_write,sd_miss_axi_write,sd_miss_axi_read,sd_hit_cache_w,sd_tag_write,fence_i_transmit,uncacheable_state} cs,ns;
assign dirty=(!w_way && dirty_1st) || (w_way && dirty_2nd);

logic uncacheable,ready_uncacheable,uart;
assign uncacheable=     (`ysyx_22040632_Chip_Link_MMIO_Start<=mem2dc.addr      &&   mem2dc.addr<=`ysyx_22040632_Chip_Link_MMIO_End    )
                    ||  (`ysyx_22040632_SPI_flash_XIP_mode_Start<=mem2dc.addr  &&   mem2dc.addr<=`ysyx_22040632_SPI_flash_XIP_mode_End)
                    ||  (`ysyx_22040632_SPI_controller_Start<=mem2dc.addr      &&   mem2dc.addr<=`ysyx_22040632_SPI_controller_End    )
                    ||  (`ysyx_22040632_UART16550_Start<=mem2dc.addr           &&   mem2dc.addr<=`ysyx_22040632_UART16550_End         )
                    ||  (`ysyx_22040632_VGA_Start<=mem2dc.addr                 &&   mem2dc.addr<=`ysyx_22040632_VGA_End               )
                    ||  (`ysyx_22040632_PS2_Start<=mem2dc.addr                 &&   mem2dc.addr<=`ysyx_22040632_PS2_End               )
                    ||  (`ysyx_22040632_Ethernet_Start<=mem2dc.addr            &&   mem2dc.addr<=`ysyx_22040632_Ethernet_End          )
                    ||  (`ysyx_22040632_SDRAM_Start<=mem2dc.addr);

assign uart=(`ysyx_22040632_UART16550_Start<=mem2dc.addr           &&   mem2dc.
addr<=`ysyx_22040632_UART16550_End         );

assign ready_uncacheable = immem.rw_ready;

always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n)
  cs <= idle;
else
  cs <= ns;

//idle stage can also transmit ready signal     idle~=ld_hit_cache_r
always_comb begin
  case(cs)
    idle:                if((r_trans && hit)||sd_cnt)                     ns = idle;
                         else if((r_trans|| w_trans) && uncacheable)      ns = uncacheable_state;         
                         else if(r_trans && !hit && dirty)                ns = ld_miss_axi_write;
                         else if(r_trans && !hit && !dirty)               ns = ld_miss_axi_read;

                         else if(w_trans && hit)                          ns = sd_hit_cache_w;
                         else if(w_trans && !hit && dirty)                ns = sd_miss_axi_write;
                         else if(w_trans && !hit && !dirty)               ns = sd_miss_axi_read;

                         else if(fence_sig)                               ns = fence_i_transmit;

                         else                                             ns = idle;

    ld_miss_axi_write:   if(write_done)                                   ns = ld_miss_axi_read;
                         else                                             ns = ld_miss_axi_write;
    ld_miss_axi_read:    if(read_done)                                    ns = ld_miss_tag_write;
                         else                                             ns = ld_miss_axi_read;
    ld_miss_tag_write:                                                    ns = idle;


    sd_miss_axi_write:   if(write_done)                                   ns = sd_miss_axi_read;
                         else                                             ns = sd_miss_axi_write;
    sd_miss_axi_read:    if(read_done)                                    ns = sd_hit_cache_w;
                         else                                             ns = sd_miss_axi_read;
    sd_hit_cache_w:                                                       ns = sd_tag_write;
    sd_tag_write:                                                         ns = idle;

    fence_i_transmit:    if(clean_f)                                      ns = idle;
                         else                                             ns = fence_i_transmit;

    uncacheable_state:   if(mem2dc.ready)                                 ns = idle;
                         else                                             ns = uncacheable_state;

    default:                                                              ns = idle;
  endcase             
end 

//for different sd
logic  sd_cnt;
always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n)
  sd_cnt <= 1'b0;
else if( ns== sd_miss_axi_read)
  sd_cnt <= 1'b1;
else if( cs== idle)
  sd_cnt <= 1'b0;

/********************idle***********************/
logic [6:0] addr_read;
logic [5:0] addr_read_uncacheable;
assign addr_read={3'b000,addr_inside[3:0]}<<3;//instruction address in ram line *8 byte shift
assign mem2dc.ready=uncacheable?ready_uncacheable:(((hit_1st || hit_2nd) && mem2dc.req) || (!mem2dc.req && sd_ready_en));
assign addr_read_uncacheable={3'b000,addr_inside[2:0]}<<3;

logic [127:0] data_out_1stway,data_out_2ndway;
always_comb begin
  if(uncacheable)
    mem2dc.data_read={32'b0,immem.data_read[addr_read_uncacheable+:32]};
  else
    case({hit_2nd,hit_1st})
      2'b01:mem2dc.data_read=data_out_1stway[addr_read+:64];
      2'b10:mem2dc.data_read=data_out_2ndway[addr_read+:64];
      default:mem2dc.data_read='0;
    endcase
end
 
/*******************axi_write*****************/
logic axi_write_state;
logic w_last;
logic [20:0] tag_read;
assign axi_write_state= (ns==ld_miss_axi_write) || (ns==sd_miss_axi_write) || (fence_i_transmit_state && this_line_dirty) || (uncacheable && w_trans && !ready_uncacheable);
assign immem.w_last=uncacheable?immem.w_hs:w_last;//uncacheable only write once

logic axi_write_en;//high acive for axi write
assign axi_write_en=(immem.w_hs || immem.axi_write_ahead) && !uncacheable;
//assign ims.axi_write_ahead=(w_state==W_STATE_ADDR);singal port ram,addr transmit ahead

logic axi_write_start;
always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n || w_last)
  axi_write_start <='0;
else if(axi_write_en)
  axi_write_start <='1;

always_comb begin
  if(fence_i_transmit_state)
    begin
      if(cnt_f[5])
        immem.rw_w_data=w_cnt?data_out_2ndway[63:0]:data_out_2ndway[127:64];
      else
        immem.rw_w_data=w_cnt?data_out_1stway[63:0]:data_out_1stway[127:64];
    end
  else if(uncacheable)
    immem.rw_w_data=mem2dc.data_write;
  else
    begin
    if(w_way)
      immem.rw_w_data=w_cnt?data_out_2ndway[63:0]:data_out_2ndway[127:64];
    else
      immem.rw_w_data=w_cnt?data_out_1stway[63:0]:data_out_1stway[127:64];
    end
end

assign immem.w_strb=uncacheable?mem2dc.wmask_uncacheble:8'hff;

/********************axi_read****************/
logic [127:0] data_write,mask;
logic hit_1st,hit_2nd;
logic age_1st,age_2nd;
logic wen;
logic w_way;//1'b0 for first way;1'b1 for second way

logic rw_valid,axi_read_state,rw_req;
assign axi_read_state= (ns==ld_miss_axi_read) || (ns==sd_miss_axi_read) || (uncacheable && r_trans && !ready_uncacheable);

logic  w_cnt;//1'b0 write low 64 bits;1'b1 write high 64 bits

always_ff @(posedge clk or negedge rrst_n) begin//same for axi read and write
  if(!rrst_n)
    rw_valid<=1'b0;
  else if(axi_read_state || axi_write_state)
    rw_valid<=1'b1;
  else
    rw_valid<=1'b0;
end
assign immem.rw_valid=uncacheable?rw_valid && !immem.rw_ready:rw_valid && !write_done && (axi_read_state || axi_write_state);


always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n || (wen && (!axi_write_start && !axi_write_en)))
    w_cnt <= '0;
  else if(axi_write_start && !axi_write_en)
    w_cnt <= w_cnt;
  else if(!wen || axi_write_en)
    w_cnt <= w_cnt +1'd1;


always_ff @(posedge clk or negedge rrst_n) begin
  priority if(!rrst_n || uncacheable)
    wen <= 1'b1;
  else if(immem.r_last)
    wen <= 1'b1;
  else if(immem.r_hs)//data from axi valid
    wen <= 1'b0;//low level active for data_array write
end


always_comb begin
  if(sd_hit_cache_w_current_state)
    mask=mask_write_sd;
  else
  case(w_cnt)
    1'b0:mask=128'hffff_ffff_ffff_ffff_0000_0000_0000_0000;//low level active for data_array mask
    1'b1:mask=128'h0000_0000_0000_0000_ffff_ffff_ffff_ffff;
  endcase
end

always_comb begin
  if(fence_i_transmit_state)
    w_way=cnt_f[5]?1'b1:1'b0;
  else
    case({age_1st,age_2nd})
      2'b00:  w_way=1'b0;//1'b0 for first way;1'b1 for second way
      2'b10:  w_way=1'b1;
      2'b01:  w_way=1'b0;
      default:w_way=1'b1;
    endcase
end

always_ff @(posedge clk or negedge rrst_n)//same for axi read and write
begin
  if(!rrst_n)
    rw_req <= '0;
  else if(axi_read_state)
    rw_req <= `ysyx_22040632_REQ_READ;
  else if(axi_write_state)
    rw_req <= `ysyx_22040632_REQ_WRITE;
end
assign immem.rw_req = rw_req;

assign data_write=sd_hit_cache_w_current_state?data_write_sd:(w_cnt?{immem.data_read,64'b0}:{64'b0,immem.data_read});//axi data 64 bits but ram 128 bits

always_comb begin
  if(uncacheable)
    immem.rw_addr=mem2dc.addr;
  else if(fence_i_transmit_state)
    immem.rw_addr={tag_read,cnt_f[4:0],6'b0};
  else
    immem.rw_addr=axi_write_state?{tag_read,mem2dc.addr[10:6],6'b0}:{mem2dc.addr[31:6],6'b0};
end


always_comb begin
  if(uncacheable)
    immem.rw_size=mem2dc.size;
  else
    immem.rw_size=`ysyx_22040632_AXI_SIZE_BYTES_8;
end

assign immem.rw_len=uncacheable?'d0:'d7;//128*4/64-1=7,same for read and write


/*******************tag_write****************/
logic  tag_write_state,wen_tag_array,dirty_write,sd_ready_en;//low leval active
assign tag_write_state = (ns==ld_miss_tag_write) || (ns==sd_tag_write);
always_ff @(posedge clk or negedge rrst_n)//delay one beat
  if(!rrst_n)
    wen_tag_array <= 1'b1;
  else if(tag_write_state && !(hit_1st && dirty_1st) && !(hit_2nd && dirty_2nd))
    wen_tag_array <= 1'b0;
  else
    wen_tag_array <= 1'b1;

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n || ns!=sd_tag_write)
    dirty_write <= '0;
  else if(ns==sd_tag_write)
    dirty_write <= 1'b1;
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    sd_ready_en <= 1'b0;
  else if(ns==sd_tag_write || (hit_1st && dirty_1st) || (hit_2nd && dirty_2nd))
    sd_ready_en <= 1'b1;
  else
    sd_ready_en <= 1'b0;
end

/**************sd_hit_cache_w************/
logic sd_hit_cache_w_state,sd_hit_cache_w_current_state;
logic [127:0] data_write_sd,mask_write_sd;
assign sd_hit_cache_w_state = (ns==sd_hit_cache_w);
assign sd_hit_cache_w_current_state = (cs==sd_hit_cache_w);
logic wen_sd;
always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n || !sd_hit_cache_w_state)
    wen_sd <= 1'1;
  else if(sd_hit_cache_w_state)
    wen_sd <= 1'b0;

assign data_write_sd=mem2dc.addr[3]?{mem2dc.data_write,64'b0}:{64'b0,mem2dc.data_write};
assign mask_write_sd=~(mem2dc.addr[3]?{mem2dc.wmask,64'b0}:{64'b0,mem2dc.wmask});

/*************fence_i*******************/
logic [31:0] dirty_array_1st,dirty_array_2nd;
logic [63:0] dirty_array_reg;
enum logic [1:0] {get_dirty_array,axi_write_f,right_move,flush_tag} cs_f,ns_f;
logic this_line_dirty,clean_f,fence_i_transmit_state,flush_tag_f;
assign fence_i_transmit_state=(cs==fence_i_transmit);
assign clean2ex=clean_f;
assign flush_tag_f=(cs_f==flush_tag);

// fence_sig
always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n)
  cs_f<=get_dirty_array;
else
  cs_f<=ns_f;

always_comb begin
  case(cs_f)
    get_dirty_array:   if(fence_sig && !clean_f && this_line_dirty)  ns_f=axi_write_f;
                       else if(fence_sig && !clean_f && !this_line_dirty)  ns_f=right_move;
                       else                       ns_f=get_dirty_array;

    axi_write_f:       if(write_done)             ns_f=right_move;
                       else                       ns_f=axi_write_f;

    right_move:        if(this_line_dirty)        ns_f=axi_write_f;
                       else if(clean_f)           ns_f=flush_tag;
                       else                       ns_f=right_move;

    flush_tag:                                    ns_f=get_dirty_array;
    default:                                      ns_f=get_dirty_array;
  endcase
end 

//get_dirty_array and right_move
always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    dirty_array_reg <= '0;
  else if(cs_f==get_dirty_array)//delay one cycle
    dirty_array_reg <=(ns_f==right_move)?{1'b0,dirty_array_2nd[31:0],dirty_array_1st[31:1]}:{dirty_array_2nd,dirty_array_1st};
  else if(ns_f==right_move)
    dirty_array_reg <= dirty_array_reg>>1;
  else
    dirty_array_reg <= dirty_array_reg;

//judge
assign clean_f = ~(|dirty_array_reg);
assign this_line_dirty = dirty_array_reg[0];

//axi_write
logic [5:0] cnt_f;//cnt_f[5] define 1st_way(0) or 2nd_way(1)
always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n)
  cnt_f <= '0;
else if(ns_f==right_move)
  cnt_f <= cnt_f + 6'd1;
else
  cnt_f <= cnt_f;

/************instantiation*************/
logic [20:0] addr_tag;
logic [4:0] addr_index;
logic [5:0] addr_inside;

assign addr_tag=mem2dc.addr[31:11];
assign addr_index=fence_i_transmit_state?cnt_f[4:0]:mem2dc.addr[10:6];
assign addr_inside=mem2dc.addr[5:0];

ysyx_22040632_dtag_array ysyx_22040632_dtag_array_d(
  .clk,
  .rrst_n,
  .wen(wen_tag_array),
  .addr_tag,
  .addr_index,
  .hit_1st,
  .hit_2nd,
  .w_way,//1'b0 for first way;1'b1 for second way
  .dirty_write,
  .age_1st,
  .age_2nd,
  .dirty_1st,
  .dirty_2nd,
  .tag_read,
  .flush_tag_f,
  .dirty_array_1st,
  .dirty_array_2nd
);

ysyx_22040632_ddata_array ysyx_22040632_ddata_array_d(
  .clk,
  .rrst_n,
  .axi_write_en,
  .wen,
  .wen_sd,
  .w_way,//1'b0 for first way;1'b1 for second way
  .addr_index,
  .addr_inside(addr_inside[5:4]),
  .mask,
  .data_write,
  .hit_1st,
  .hit_2nd,
  .w_last,
  .data_out_1stway,
  .data_out_2ndway
);

endmodule