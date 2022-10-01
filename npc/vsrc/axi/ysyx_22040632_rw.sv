`include "ysyx_22040632_axi.svh"

module ysyx_22040632_rw # (
  parameter AXI_ID_WIDTH      = 4
)(
  input                               clk,
  input                               rrst_n,
  
  ysyx_22040632_axiif.Master                 axim,
	ysyx_22040632_imif.Slave                    ims
);


  wire w_trans    = ims.rw_req == `ysyx_22040632_REQ_WRITE;
  wire r_trans    = ims.rw_req == `ysyx_22040632_REQ_READ;
  wire w_valid    = ims.rw_valid & w_trans;
  wire r_valid    = ims.rw_valid & r_trans;


  // always_comb 
  //   if(axim.axi_aw_valid)
  //     $display("axi-awaddr:%x",axi_addr);
  //   else if(axim.axi_ar_valid)
  //     $display("axi-araddr:%x  axim.axi_aw_len:%d",axi_addr,axim.axi_aw_len);


  // handshake
  wire aw_hs      = axim.axi_aw_ready & axim.axi_aw_valid;
  wire w_hs       = axim.axi_w_ready  & axim.axi_w_valid;
  wire b_hs       = axim.axi_b_ready  & axim.axi_b_valid;
  assign ims.w_hs = w_hs;
  wire ar_hs      = axim.axi_ar_ready & axim.axi_ar_valid;
  wire r_hs       = axim.axi_r_ready  & axim.axi_r_valid;
  assign ims.r_hs = r_hs;

  wire w_done     = w_hs & axim.axi_w_last;//based on data channel
  wire r_done     = r_hs && axim.axi_r_last;
  assign ims.r_last=axim.axi_r_last;
  // wire trans_done = w_trans ? w_done : r_done;
  wire trans_done = w_trans ? b_hs : r_done;//write based on write response channel

  // ------------------State Machine------------------
  parameter [1:0] W_STATE_IDLE = 2'b00, W_STATE_ADDR = 2'b01, W_STATE_WRITE = 2'b10, W_STATE_RESP = 2'b11;
  parameter [1:0] R_STATE_IDLE = 2'b00, R_STATE_ADDR = 2'b01, R_STATE_READ  = 2'b10;
  reg [1:0] w_state,w_state_nxt, r_state,r_state_nxt;
  wire w_state_addr = w_state == W_STATE_ADDR, w_state_write = w_state == W_STATE_WRITE,w_state_resp = w_state == W_STATE_RESP;
  wire r_state_addr = r_state == R_STATE_ADDR, r_state_read  = r_state == R_STATE_READ;

  // Wirte State Machine
  always_ff @(posedge clk or negedge rrst_n)
    if (!rrst_n)
        w_state <= W_STATE_IDLE;
    else
        w_state <= w_state_nxt;

  always_comb begin
    case (w_state)
        W_STATE_IDLE: if(w_valid)
                        w_state_nxt = W_STATE_ADDR;
                      else
                        w_state_nxt = W_STATE_IDLE;
        W_STATE_ADDR:
                      if (aw_hs)   
                        w_state_nxt = W_STATE_WRITE;
                      else
                        w_state_nxt = W_STATE_ADDR;
        W_STATE_WRITE: 
                      if (w_done)  w_state_nxt = W_STATE_RESP;
                      else w_state_nxt =W_STATE_WRITE;
        W_STATE_RESP:  
                      if (b_hs)    w_state_nxt = W_STATE_IDLE;
                      else w_state_nxt = W_STATE_RESP;
    endcase
  end
  assign ims.axi_write_ahead=(w_state==W_STATE_ADDR) && w_valid;

  // Read State Machine
  always_ff @(posedge clk or negedge rrst_n)
    if (!rrst_n)
        r_state <= R_STATE_IDLE;
    else
        r_state <= r_state_nxt;

  always_comb begin
    case (r_state)
        R_STATE_IDLE: if(r_valid)   r_state_nxt = R_STATE_ADDR;
                      else r_state_nxt = R_STATE_IDLE;
        R_STATE_ADDR: if (ar_hs)    r_state_nxt = R_STATE_READ;
                      else r_state_nxt = R_STATE_ADDR;
        R_STATE_READ: if (r_done)   r_state_nxt = R_STATE_IDLE;
                      else r_state_nxt = R_STATE_READ;
        default:r_state_nxt = R_STATE_IDLE;
    endcase
  end


  // ------------------Process Data------------------
  logic [7:0] axi_len;
  logic [2:0] axi_size;
  logic [31:0] axi_addr;
  assign axi_len=ims.rw_len;
  assign axi_size=ims.rw_size;//only support fot 64 bits data axi
  assign axi_addr=ims.rw_addr;
  wire [AXI_ID_WIDTH-1:0] axid                = {AXI_ID_WIDTH{1'b0}};

  reg rw_ready;
  wire rw_ready_nxt = trans_done;
  wire rw_ready_en  = trans_done | rw_ready;
  always_ff @(posedge clk or negedge rrst_n) begin
      if (!rrst_n)
          rw_ready <= 0;
      else if (rw_ready_en)
          rw_ready <= rw_ready_nxt;
  end
  assign ims.rw_ready     = rw_ready;

  reg [1:0] rw_resp;
  wire [1:0] rw_resp_nxt = w_trans ? axim.axi_b_resp : axim.axi_r_resp;
  wire resp_en = trans_done;
  always @(posedge clk or negedge rrst_n) begin
      if (!rrst_n) begin
          rw_resp <= 0;
      end
      else if (resp_en) begin
          rw_resp <= rw_resp_nxt;
      end
  end
 
  // ------------------Write Transaction------------------
  // //Write address channel signals         
  assign axim.axi_aw_valid   = w_state_addr && w_valid ; 
  assign axim.axi_aw_addr    = axi_addr;
  assign axim.axi_aw_id      = axid;
  assign axim.axi_aw_len     = axi_len;
  assign axim.axi_aw_size    = axi_size;
  assign axim.axi_aw_burst   = `ysyx_22040632_AXI_BURST_TYPE_INCR;

  //Write data channel signal ** not implememt overstep
  assign axim.axi_w_valid    = w_state_write;
  assign axim.axi_w_data     = ims.rw_w_data;
  assign axim.axi_w_strb     = ims.w_strb;
  assign axim.axi_w_last     = ims.w_last;
 
  //Write response channel signal
  assign axim.axi_b_ready    = w_state_resp;
  
  // ------------------Read Transaction------------------
  // Read address channel signals
  assign axim.axi_ar_valid   = r_state_addr && r_valid ;
  assign axim.axi_ar_addr    = axi_addr;
  assign axim.axi_ar_id      = axid;
  assign axim.axi_ar_len     = axi_len;
  assign axim.axi_ar_size    = axi_size;
  assign axim.axi_ar_burst   = `ysyx_22040632_AXI_BURST_TYPE_INCR;

  // Read data channel signals
  assign axim.axi_r_ready    = r_state_read;

  always @(posedge clk or negedge rrst_n) 
  begin
      if (!rrst_n) 
          ims.data_read <= '0;
      else if (r_hs) 
          ims.data_read <= axim.axi_r_data;
  end
endmodule