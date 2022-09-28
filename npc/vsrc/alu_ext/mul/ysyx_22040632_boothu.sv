module ysyx_22040632_boothu(
  input logic [2:0]   in_y,
  input logic [127:0] in_x,
  input logic [4:0]   index,
  output logic c,
  output logic [127:0] p
);

logic y_add,y,y_sub;
logic sel_single,sel_double;

assign {y_add,y,y_sub}=in_y;

//for unsigned
assign sel_single=(y & ~y_sub) || (~y & y_sub);
assign sel_double=y & y_sub;

logic [127:0] x_double,x;
assign x=in_x<<(index<<1);
assign x_double=x<<1;

always_comb 
begin
    case({sel_single,sel_double,y_add})
      3'b100:p=x;
      3'b101:p=x+x_double;
      3'b010:p=x_double;
      3'b011:p=x_double<<1;
      3'b001:p=x_double;
      default:p='0;
    endcase
end

assign c= '0;

endmodule