module ysyx_22040632_div#(
  parameter XLEN=64
)(
input logic clk,
input logic rrst_n,
ysyx_22040632_divif.divider dif
);

logic [2*XLEN-1:0] qt_rmd;//quotient && remainder
logic [XLEN-1:0] dvs;//divisor
logic [6:0] eval_cnt;
logic [XLEN-1:0] result;
logic sgn_rmd,sgn_qt,sgn;//sign of quotient && remainder
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

always_ff @(posedge clk or negedge rrst_n)
begin
  if(!rrst_n)
    sgn <= 1'b0;
  else if(dif.div_valid && dif.div_signed)
    sgn <= 1'b1;
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
always_ff @(posedge clk or negedge rrst_n) 
begin
  if(!rrst_n)
    qt_rmd <= '0;
  else if(dif.div_valid)//store dividend
    begin
    case(dif.divw)
    1'b1:
      begin
        if(!dif.div_signed || dif.dividend[31]== 1'b0)
          qt_rmd <= {{96{1'b0}},dif.dividend[31:0]};
        else
          qt_rmd <= {{96{1'b0}},~dif.dividend[31:0]+32'd1};
      end
    1'b0:
      begin
        if(!dif.div_signed || dif.dividend[63]== 1'b0)
          qt_rmd <= {{64{1'b0}},dif.dividend[63:0]};
        else
          qt_rmd <= {{64{1'b0}},~dif.dividend[63:0]+64'd1};
      end
    endcase
    end
  else if(eval_flag)//iterative calculation
    case(len)
    'd64:begin
    if(result[XLEN-1]==1'b0)
      begin
      qt_rmd[2*XLEN-1-eval_cnt]<=1'b1;
      qt_rmd[(2*XLEN-1-1-eval_cnt)-:XLEN]<=result;//
      end 
    else
    begin
      qt_rmd[2*XLEN-1-eval_cnt]<=1'b0;
      qt_rmd[(2*XLEN-1-1-eval_cnt)-:64]<=qt_rmd[(2*XLEN-1-1-eval_cnt)-:XLEN];//
    end
    end
    'd32:
    begin
    if(result[32-1]==1'b0)
      begin
      qt_rmd[2*32-1-eval_cnt]<=1'b1;
      qt_rmd[(2*32-1-1-eval_cnt)-:32]<=result[32-1:0];//
      end 
    else
    begin
      qt_rmd[2*32-1-eval_cnt]<=1'b0;
      qt_rmd[(2*32-1-1-eval_cnt)-:32]<=qt_rmd[(2*32-1-1-eval_cnt)-:32];//
    end
    end
    endcase
  else
    qt_rmd <=qt_rmd;
end

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
          dvs[31:0] <= dif.divisor[31:0];
        else
          dvs[31:0] <= ~dif.divisor[31:0]+32'd1;
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

always_comb 
begin
  case(!dif.divw || len==7'd64)
  1'b1:result=qt_rmd[(2*XLEN-1-1-eval_cnt)-:XLEN]-dvs[XLEN-1:0];
  1'b0:result={{32{1'b0}},qt_rmd[(2*32-1-1-eval_cnt)-:32]-dvs[32-1:0]};//
  endcase
end

//Adjust the final quotient and remainder
assign qt_tr=~qt_rmd[2*XLEN-1-:XLEN-1]+63'd1;
always_comb 
begin
unique0 case(len)/* verilator lint_off CASEINCOMPLETE */
  7'd64:
    begin
      if(sgn && sgn_qt==1'b1)
        dif.quotient={sgn_qt,qt_tr[62:0]};
      else 
        dif.quotient=qt_rmd[2*XLEN-1-:XLEN];
    end
  7'd32:
    begin
    if(sgn && sgn_qt==1'b1)
      dif.quotient={{33{sgn_qt}},qt_tr[30:0]};
    else
      dif.quotient={{32{qt_rmd[2*32-1]}},qt_rmd[2*32-1-:32]};
    end
endcase
end

assign rmd_tr=~qt_rmd[0+:XLEN-1]+63'd1;
always_comb begin
  unique0 case(len)/* verilator lint_off CASEINCOMPLETE */
  7'd64:
    begin
      if(sgn && sgn_rmd==1'b1)
        dif.remainder={sgn_rmd,rmd_tr[62:0]};
      else
        dif.remainder=qt_rmd[0+:XLEN];
    end
  7'd32:
    begin
      if(sgn && sgn_rmd==1'b1)
        dif.remainder={{33{sgn_rmd}},rmd_tr[30:0]};
      else
        dif.remainder={{32{qt_rmd[31]}},qt_rmd[0+:32]};
    end
  endcase
end

endmodule