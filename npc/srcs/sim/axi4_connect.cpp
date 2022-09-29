#include "axi4.h"
#include "Vysyx_22040632_top.h"


void connect_wire(axi4_ptr <32,64,4> &pmem_ptr, Vysyx_22040632_top *top){
    pmem_ptr.awid= &(top->axi_aw_id_o);

    pmem_ptr.awaddr= &(top->axi_aw_addr_o);
    pmem_ptr.awlen= &(top->axi_aw_len_o);
    pmem_ptr.awsize= &(top->axi_aw_size_o);
    pmem_ptr.awburst= &(top->axi_aw_burst_o);
    pmem_ptr.awvalid= &(top->axi_aw_valid_o);
    pmem_ptr.awready= &(top->axi_aw_ready_i);//out
    // w
    pmem_ptr.wdata= &(top->axi_w_data_o);
    pmem_ptr.wstrb= &(top->axi_w_strb_o);
    pmem_ptr.wlast= &(top->axi_w_last_o);
    pmem_ptr.wvalid= &(top->axi_w_valid_o);
    pmem_ptr.wready= &(top->axi_w_ready_i);//out
    // b
    pmem_ptr.bid= &(top-> axi_b_id_i);
    pmem_ptr.bresp= &(top->axi_b_resp_i);
    pmem_ptr.bvalid= &(top->axi_b_valid_i);
    pmem_ptr.bready= &(top->axi_b_ready_o);//in
    // ar
    pmem_ptr.arid= &(top->axi_ar_id_o);
    pmem_ptr.araddr= &(top->axi_ar_addr_o);
    pmem_ptr.arlen= &(top->axi_ar_len_o);
    pmem_ptr.arsize= &(top->axi_ar_size_o);
    pmem_ptr.arburst= &(top->axi_ar_burst_o);
    pmem_ptr.arvalid= &(top->axi_ar_valid_o);
    pmem_ptr.arready= &(top->axi_ar_ready_i);//out
    // r
    pmem_ptr.rid= &(top->axi_r_id_i);
    pmem_ptr.rdata = &(top->axi_r_data_i);
    pmem_ptr.rresp= &(top->axi_r_resp_i);
    pmem_ptr.rlast= &(top->axi_r_last_i);
    pmem_ptr.rvalid= &(top->axi_r_valid_i);
    pmem_ptr.rready = &(top->axi_r_ready_o);//in
}