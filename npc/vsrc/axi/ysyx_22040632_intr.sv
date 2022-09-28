interface ysyx_22040632_axiif #(

  parameter AXI_DATA_WIDTH = 64,
  parameter AXI_ADDR_WIDTH = 32,
  parameter AXI_ID_WIDTH   = 4);

 // Advanced eXtensible Interface
  logic                              axi_aw_ready;              
  logic                              axi_aw_valid;
  logic [AXI_ADDR_WIDTH-1:0]         axi_aw_addr;
  logic [AXI_ID_WIDTH-1:0]           axi_aw_id;
  logic [7:0]                        axi_aw_len;
  logic [2:0]                        axi_aw_size;
  logic [1:0]                        axi_aw_burst;
  
  logic                              axi_w_ready;                
  logic                              axi_w_valid;
  logic [AXI_DATA_WIDTH-1:0]         axi_w_data;
  logic [AXI_DATA_WIDTH/8-1:0]       axi_w_strb;
  logic                              axi_w_last;
  
  logic                              axi_b_ready;                
  logic                              axi_b_valid;
  logic  [1:0]                       axi_b_resp;                 
  logic  [AXI_ID_WIDTH-1:0]          axi_b_id;
  
  logic                              axi_ar_ready;                
  logic                              axi_ar_valid;
  logic [AXI_ADDR_WIDTH-1:0]         axi_ar_addr;
  logic [AXI_ID_WIDTH-1:0]           axi_ar_id;
  logic [7:0]                        axi_ar_len;
  logic [2:0]                        axi_ar_size;
  logic [1:0]                        axi_ar_burst;
  
  logic                              axi_r_ready;                 
  logic                              axi_r_valid;                
  logic  [1:0]                       axi_r_resp;
  logic  [AXI_DATA_WIDTH-1:0]        axi_r_data;
  logic                              axi_r_last;
  logic  [AXI_ID_WIDTH-1:0]          axi_r_id;

  modport Master(
    output axi_aw_id,axi_aw_valid,axi_aw_addr,axi_aw_len,axi_aw_size,axi_aw_burst,input axi_aw_ready,
    output axi_w_valid,axi_w_data,axi_w_strb,axi_w_last,input axi_w_ready,
    output axi_b_ready,input axi_b_valid,axi_b_resp,axi_b_id,
    output axi_ar_valid,axi_ar_addr,axi_ar_id,axi_ar_len,axi_ar_size,axi_ar_burst,input axi_ar_ready,
    output axi_r_ready,input axi_r_valid,axi_r_resp,axi_r_data,axi_r_last,axi_r_id
  );

  modport Slave(
    input axi_aw_id,axi_aw_valid,axi_aw_addr,axi_aw_len,axi_aw_size,axi_aw_burst,output axi_aw_ready,
    input axi_w_valid,axi_w_data,axi_w_strb,axi_w_last,output axi_w_ready,
    input axi_b_ready,output axi_b_valid,axi_b_resp,axi_b_id,
    input axi_ar_valid,axi_ar_addr,axi_ar_id,axi_ar_len,axi_ar_size,axi_ar_burst,output axi_ar_ready,
    input axi_r_ready,output axi_r_valid,axi_r_resp,axi_r_data,axi_r_last,axi_r_id
  );

endinterface

interface ysyx_22040632_imif#(//IF&MEM
  parameter RW_DATA_WIDTH  = 64,
  parameter RW_ADDR_WIDTH  = 32
);
  logic                              rw_valid ;          //IF&MEM输入信号
	logic                              rw_ready ;          //IF&MEM输入信号
  logic                              rw_req;             //write or read
  logic [RW_DATA_WIDTH-1:0]          data_read ;         //read data
  logic [RW_DATA_WIDTH-1:0]          rw_w_data;          //write data
  logic [RW_ADDR_WIDTH-1:0]          rw_addr;            //IF&MEM输入信号
  logic [2:0]                        rw_size;            //IF&MEM输入信号
  logic [7:0]                        rw_len;
  logic                              r_hs;               //read data channel handshake
  logic                              r_last;             //read data channel last signal
  logic                              w_hs;               //write data channel handshake
  logic                              w_last;             //write data channel last signal
  logic [7:0]                        w_strb;             //write data channel mask
  logic                              axi_write_ahead;    //single port ram, need addr transmit ahead
  
  modport Slave(
    input  rw_valid ,  rw_w_data , rw_addr , rw_size , rw_req, rw_len,w_last,w_strb,
	  output rw_ready ,data_read ,r_hs,r_last,w_hs,axi_write_ahead
  );

  modport Master(
    output  rw_valid ,  rw_w_data , rw_addr , rw_size , rw_req, rw_len,w_last,w_strb,
	  input rw_ready ,data_read ,r_hs,r_last,w_hs,axi_write_ahead
  );

endinterface