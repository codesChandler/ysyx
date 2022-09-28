module ysyx_22040632_booth(
  input logic [2:0]   in_y,
  input logic [127:0] in_x,
  input logic [4:0]   index,
  output logic c,
  output logic [127:0] p
);

logic y_add,y,y_sub;
logic sel_negative,sel_double_negative,sel_positive,sel_double_positive;

assign {y_add,y,y_sub}=in_y;

assign sel_negative =  y_add & (y & ~y_sub | ~y & y_sub);
assign sel_positive = ~y_add & (y & ~y_sub | ~y & y_sub);
assign sel_double_negative =  y_add & ~y & ~y_sub;
assign sel_double_positive = ~y_add &  y &  y_sub;

logic [127:0] x_double,x;
assign x=in_x<<(index<<1);
assign x_double=x<<1;

always_comb 
begin
  priority if(sel_negative)
      p=~x;
  else if(sel_double_negative)
      p=~x_double;
  else if(sel_positive)
      p=x;
  else if(sel_double_positive)
      p=x_double;
  else 
      p='0;
end

assign c= sel_negative || sel_double_negative;

endmodule