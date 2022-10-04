module ysyx_22040632_div#(
  parameter XLEN=64
)(
input logic clk,
input logic rrst_n,
ysyx_22040632_divif.divider dif
);

logic [XLEN-1:0] rmd;
logic [XLEN-1:0] dvd_qt;//divided && quotient
logic [XLEN-1:0] dvs;//divisor
logic [6:0] eval_cnt;
logic [XLEN:0] result;
logic sgn_rmd,sgn_qt,sgn;//sign of quotient && remainder sgn---signed calculation
logic eval_flag;
logic valid_out;
logic [6:0] len;//64 or 32
logic [62:0] rmd_tr,qt_tr;
enum logic[1:0]{idle,eval,valid} cs,ns;

//calculation parsing 32 & 64 signed & unsigned

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    len <= 7'd64;
  else if(dif.div_valid)
    begin
      case(dif.divw)
      1'b1:len <= 7'd32;
      1'b0:len <= 7'd64;
      endcase 
    end
  else
    len <=len;
end

always_ff @(posedge clk or negedge rrst_n) 
begin
  if(!rrst_n)
    sgn_rmd <= '0;
  else if(dif.div_valid)
  begin
    if(dif.divw)//32 bits
      sgn_rmd <= dif.dividend[31];
    else
      sgn_rmd <= dif.dividend[63];
  end
  else
    sgn_rmd <= sgn_rmd;
end

always_ff @(posedge clk or negedge rrst_n) 
begin
  if(!rrst_n)
    sgn_qt <= '0;
  else if(dif.div_valid)
  begin
    if(dif.divw)//32 bits
      sgn_qt <= dif.dividend[31] ^ dif.divisor[31] ;
    else
      sgn_qt <= dif.dividend[63] ^ dif.divisor[63] ;
  end
  else
    sgn_qt <= sgn_qt;
end

always_ff @(posedge clk or negedge rrst_n)//sgn---signed calculation
begin
  if(!rrst_n)
    sgn <= 1'b0;
  else if(dif.div_valid)
    sgn <= dif.div_signed;
  else 
    sgn <= sgn;
end

//state machine changing
always_ff @(posedge clk or negedge rrst_n) begin
  if(!rrst_n)
    cs<=idle;
  else
    cs<=ns;
end

always_comb begin
  unique0 case(cs)/* verilator lint_off CASEINCOMPLETE */
  idle:begin
    if(dif.div_valid) ns=eval;
    else ns=idle;
  end
  eval:begin
    if(eval_cnt==len - 7'd1) ns=valid;
    else if(dif.flush) ns=idle;
    else ns=eval;
  end
  valid:begin
    if(dif.div_valid) ns=eval;
    else ns=idle;
  end
  default:ns=idle;
  endcase
end

//for 3 segment states

always_ff @(posedge clk or negedge rrst_n)begin
  if(!rrst_n)
    eval_flag <= '0;
  else begin
    priority case(ns)
    eval:eval_flag <='1;
    default:eval_flag <='0;
    endcase
  end
end

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    valid_out <= '0;
  else begin
    priority case(ns)
      valid:valid_out <= '1;
      default:valid_out <= '0;
    endcase
  end
end
assign dif.out_valid=valid_out;

logic ready;
always_ff @(posedge clk or negedge rrst_n) 
begin
  if(!rrst_n)
    ready<=1'b1;
  else begin
    priority case(ns)
      idle,valid:ready <= '1;
      default:ready <= '0;
    endcase
  end
end
assign dif.div_ready=ready;

//divide calculation
logic write2rmd;
logic [64:0] minuend;
assign write2rmd=~result[64];
assign minuend={1'b0,rmd[63:0]};//extra bit define whether overflow
logic [63:0] dvd_sw,dvd_s;//signed or word
assign dvd_sw={~dif.dividend[31:0]+32'd1,{32{1'b0}}};
assign dvd_s=~dif.dividend[63:0]+64'd1;
always_ff @(posedge clk or negedge rrst_n) 
begin
  priority if(!rrst_n)
    rmd <= '0;
  else if(dif.div_valid && !eval_flag)
    case({dif.divw,dif.div_signed})
      2'b00:rmd <= {63'b0,dif.dividend[63]};
      2'b01:rmd <= {63'b0,dvd_s[63]};
      2'b10:rmd <= {63'b0,dif.dividend[31]};
      2'b11:rmd <= {63'b0,dvd_sw[31]};
    endcase
  else if(ns==valid && write2rmd)
    rmd <= result[63:0];
  else if(eval_flag && ns!=valid)
    rmd <= write2rmd?{result[62:0],dvd_qt[63]}:{rmd[62:0],dvd_qt[63]};
  else
    rmd <= rmd;
end

always_ff @(posedge clk or negedge rrst_n)
  if(!rrst_n)
    dvd_qt<='0;
  else if(dif.div_valid && !eval_flag)//store dividend
    begin
    case(dif.divw)
    1'b1:
      begin
        if(!dif.div_signed || dif.dividend[31]== 1'b0)
          dvd_qt <= {dif.dividend[30:0],1'b0,{32{1'b0}}};
        else
          dvd_qt <= {dvd_sw[62:0],1'b0};
      end
    1'b0:
      begin
        if(!dif.div_signed || dif.dividend[63]== 1'b0)
          dvd_qt <= {dif.dividend[62:0],1'b0};
        else
          dvd_qt <= {dvd_s[62:0],1'b0};
      end
    endcase
    end
  else if(eval_flag)//iterative calculation
    case(len)
    'd64:dvd_qt<={dvd_qt[62:0],write2rmd};
    'd32:dvd_qt<={dvd_qt[62:0],write2rmd};
    endcase
  else
    dvd_qt <= dvd_qt;


always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    dvs <= '0;
  else if(dif.div_valid)
    begin
    case(dif.divw)
    1'b1:
      begin
        if(!dif.div_signed || dif.divisor[31]== 1'b0)
          dvs[63:0] <= {32'b0,dif.divisor[31:0]};
        else
          dvs[63:0] <= {32'b0,~dif.divisor[31:0]+32'd1};
      end
    1'b0:
      begin
        if(!dif.div_signed || dif.divisor[63]== 1'b0)
          dvs[63:0] <= dif.divisor[63:0];
        else
          dvs[63:0] <= ~dif.divisor[63:0]+64'd1;
      end
    endcase
    end
  else
    dvs <=dvs;
end

always_ff @(posedge clk or negedge rrst_n) 
begin
  if(!rrst_n || !eval_flag )
    eval_cnt <='0;
  else if(eval_flag)
    eval_cnt <= eval_cnt+1;
end

logic [32:0]result_w;
assign result_w={1'b0,minuend[31:0]}-{1'b0,dvs[31:0]};
always_comb 
begin
  case(!dif.divw || len==7'd64)
  1'b1:result=minuend-{1'b0,dvs[XLEN-1:0]};
  1'b0:result={{32{result_w[32]}},result_w};
  endcase
end

//Adjust the final quotient and remainder
assign qt_tr=~dvd_qt[0+:XLEN-1]+63'd1;
always_comb 
begin
unique0 case(len)/* verilator lint_off CASEINCOMPLETE */
  7'd64:
    begin
      if(sgn && sgn_qt==1'b1)
        dif.quotient=qt_tr[62:0]=='0?'0:{sgn_qt,qt_tr[62:0]};
      else 
        dif.quotient=dvd_qt;
    end
  7'd32:
    begin
    if(sgn && sgn_qt==1'b1)
      dif.quotient=qt_tr[30:0]=='0?'0:{{33{sgn_qt}},qt_tr[30:0]};
    else
      dif.quotient={{32{dvd_qt[31]}},dvd_qt[31:0]};
    end
endcase
end

assign rmd_tr=~rmd[0+:XLEN-1]+63'd1;
always_comb begin
  unique0 case(len)/* verilator lint_off CASEINCOMPLETE */
  7'd64:
    begin
      if(sgn && sgn_rmd==1'b1)
        dif.remainder=rmd_tr[62:0]=='0?'0:{sgn_rmd,rmd_tr[62:0]};
      else
        dif.remainder=rmd[0+:XLEN];
    end
  7'd32:
    begin
      if(sgn && sgn_rmd==1'b1)
        dif.remainder=rmd_tr[30:0]=='0?'0:{{33{sgn_rmd}},rmd_tr[30:0]};
      else
        dif.remainder={{32{rmd[31]}},rmd[0+:32]};
    end
  endcase
end

endmodule