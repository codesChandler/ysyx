module ysyx_22040632_arbiter(
  input logic clk,
  input logic rrst_n,
  ysyx_22040632_imif.Slave ims_if,
  ysyx_22040632_imif.Slave ims_mem,
  ysyx_22040632_imif.Master imm
);

enum [1:0]{idle,sig_if,sig_mem} cs,ns;
logic if_sh,mem_sh,mem_flg,idle_flg;
assign if_sh=ims_if.rw_valid & ims_if.rw_ready;
assign mem_sh=ims_mem.rw_valid & ims_mem.rw_ready;

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    cs <= idle;
  else 
    cs <= ns;
end


always_comb
begin
  case(cs)
    idle:
      begin
        priority if(ims_mem.rw_valid)
          ns = sig_mem;
        else if(ims_if.rw_valid)
          ns = sig_if;
        else 
          ns = idle;
      end
    sig_mem:
      begin
        if(mem_sh || (cnt_vld==2'b11 && !ims_mem.rw_valid))
            ns = idle;
        else
            ns = sig_mem;
      end
    sig_if:
      begin
        if(if_sh || (cnt_vld==2'b11 && !ims_if.rw_valid))
            ns = idle;
        else 
          ns = sig_if;
      end
    default:ns = idle;
  endcase
end

logic [1:0] cnt_vld;
always_ff @(posedge clk or negedge rrst_n)
if(!rrst_n || ns==idle)
  cnt_vld <='0;
else if(ns==sig_mem || ns==sig_if)
  cnt_vld <= cnt_vld+'d1;

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    mem_flg <= '0;
  else 
    begin
      case(ns)
        sig_mem: mem_flg <= 1'b1;
        default: mem_flg <= 1'b0;
      endcase
    end 
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    idle_flg <= '1;
  else 
    begin
      case(ns)
        idle: idle_flg <= 1'b1;
        default: idle_flg <= 1'b0;
      endcase
    end 
end

assign imm.rw_valid=idle_flg||if_sh||mem_sh?'0:(mem_flg?ims_mem.rw_valid:ims_if.rw_valid);
assign imm.rw_addr=mem_flg?ims_mem.rw_addr:ims_if.rw_addr;
assign imm.rw_size=mem_flg?ims_mem.rw_size:ims_if.rw_size;
assign imm.rw_req=mem_flg?ims_mem.rw_req:ims_if.rw_req;
assign imm.rw_len=mem_flg?ims_mem.rw_len:ims_if.rw_len;
assign imm.w_strb=mem_flg?ims_mem.w_strb:'0;

assign ims_mem.rw_ready=idle_flg?'0:(mem_flg?imm.rw_ready:'0);
assign ims_if.rw_ready=idle_flg?'0:(mem_flg?'0:imm.rw_ready);

assign ims_mem.data_read=mem_flg?imm.data_read :'0;
assign ims_if.data_read=mem_flg?'0:imm.data_read;
assign ims_mem.r_hs=idle_flg?'0:(mem_flg?imm.r_hs:'0);
assign ims_if.r_hs=idle_flg?'0:(mem_flg?'0:imm.r_hs);
assign ims_mem.r_last=idle_flg?'0:(mem_flg?imm.r_last:'0);
assign ims_if.r_last=idle_flg?'0:(mem_flg?'0:imm.r_last);

assign imm.rw_w_data=mem_flg?ims_mem.rw_w_data:ims_if.rw_w_data;
assign imm.w_last=idle_flg?'0:(mem_flg?ims_mem.w_last:ims_if.w_last);
assign ims_mem.w_hs=idle_flg?'0:(mem_flg?imm.w_hs:'0);
assign ims_if.w_hs=idle_flg?'0:(mem_flg?'0:imm.w_hs);
assign ims_mem.axi_write_ahead=imm.axi_write_ahead;

endmodule