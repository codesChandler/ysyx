module ysyx_22040632_walloc_32bits(
    input [31:0] src_in,
    input [29:0]  cin,/* verilator lint_off UNOPTFLAT */
    output [29:0] cout_group/* verilator lint_off UNOPTFLAT */,
    output      cout,s/* verilator lint_off UNOPTFLAT */
);

logic [29:0] c/*verilator split_var*/;

///////////////first stage////////////////
logic [10:0] first_s;
ysyx_22040632_csa ysyx_22040632_csa10 (.in(src_in[31:29]),.cout(c[10]),.s(first_s[10]));
ysyx_22040632_csa ysyx_22040632_csa9  (.in(src_in[28:26]),.cout(c[9]),.s(first_s[9]));
ysyx_22040632_csa ysyx_22040632_csa8  (.in(src_in[25:23]),.cout(c[8]),.s(first_s[8]));
ysyx_22040632_csa ysyx_22040632_csa7  (.in(src_in[22:20]),.cout(c[7]),.s(first_s[7]));
ysyx_22040632_csa ysyx_22040632_csa6  (.in(src_in[19:17]),.cout(c[6]),.s(first_s[6]));
ysyx_22040632_csa ysyx_22040632_csa5  (.in(src_in[16:14]),.cout(c[5]),.s(first_s[5]));
ysyx_22040632_csa ysyx_22040632_csa4  (.in(src_in[13:11]),.cout(c[4]),.s(first_s[4]));
ysyx_22040632_csa ysyx_22040632_csa3  (.in(src_in[10:8] ),.cout(c[3]),.s(first_s[3]));
ysyx_22040632_csa ysyx_22040632_csa2  (.in(src_in[7:5]  ),.cout(c[2]),.s(first_s[2]));
ysyx_22040632_csa ysyx_22040632_csa1  (.in(src_in[4:2]  ),.cout(c[1]),.s(first_s[1]));
ysyx_22040632_hcsa ysyx_22040632_hcsa0(.in(src_in[1:0]  ),.cout(c[0]),.s(first_s[0]));


///////////////second stage////////////////
logic [6:0] second_s;
ysyx_22040632_csa ysyx_22040632_csa17(.in(first_s[10:8]        ),.cout(c[17]),.s(second_s[6]));
ysyx_22040632_csa ysyx_22040632_csa16(.in(first_s[7 :5]        ),.cout(c[16]),.s(second_s[5]));
ysyx_22040632_csa ysyx_22040632_csa15(.in(first_s[4 :2]        ),.cout(c[15]),.s(second_s[4]));
ysyx_22040632_csa ysyx_22040632_csa14(.in({first_s[1:0],cin[9]}),.cout(c[14]),.s(second_s[3]));
ysyx_22040632_csa ysyx_22040632_csa13(.in(cin[8:6]             ),.cout(c[13]),.s(second_s[2]));
ysyx_22040632_csa ysyx_22040632_csa12(.in(cin[5:3]             ),.cout(c[12]),.s(second_s[1]));
ysyx_22040632_csa ysyx_22040632_csa11(.in(cin[2:0]             ),.cout(c[11]),.s(second_s[0]));


///////////////third stage////////////////
logic [4:0] third_s;
ysyx_22040632_csa ysyx_22040632_csa22(.in(second_s[6:4]                ),.cout(c[22]),.s(third_s[4]));
ysyx_22040632_csa ysyx_22040632_csa21(.in(second_s[3:1]                ),.cout(c[21]),.s(third_s[3]));
ysyx_22040632_csa ysyx_22040632_csa20(.in({second_s[0],cin[10],cin[17]}),.cout(c[20]),.s(third_s[2]));
ysyx_22040632_csa ysyx_22040632_csa19(.in(cin[16:14]                   ),.cout(c[19]),.s(third_s[1]));
ysyx_22040632_csa ysyx_22040632_csa18(.in(cin[13:11]                   ),.cout(c[18]),.s(third_s[0]));

///////////////fourth stage////////////////
logic [2:0] fourth_s;
ysyx_22040632_csa ysyx_22040632_csa25(.in(third_s[4:2]          ),.cout(c[25]),.s(fourth_s[2]));
ysyx_22040632_csa ysyx_22040632_csa24(.in({third_s[1:0],cin[21]}),.cout(c[24]),.s(fourth_s[1]));
ysyx_22040632_csa ysyx_22040632_csa23(.in(cin[20:18]            ),.cout(c[23]),.s(fourth_s[0]));

///////////////fifth stage////////////////
logic [1:0] fifth_s;
ysyx_22040632_csa ysyx_22040632_csa27(.in(fourth_s),.cout(c[27]),.s(fifth_s[1]));
ysyx_22040632_csa ysyx_22040632_csa26(.in(cin[24:22]),.cout(c[26]),.s(fifth_s[0]));

///////////////sixth stage////////////////
logic  sixth_s;
ysyx_22040632_csa ysyx_22040632_csa28(.in({fifth_s,cin[25]}),.cout(c[28]),.s(sixth_s));

///////////////seventh stage////////////////
logic  seventh_s;
ysyx_22040632_csa ysyx_22040632_csa29(.in({sixth_s,cin[27:26]}),.cout(c[29]),.s(seventh_s));

///////////////eighth stage////////////////

ysyx_22040632_csa ysyx_22040632_csa30(.in({seventh_s,c[29:28]}),.cout(cout),.s(s));

///////////////output///////////////
assign cout_group = c;

endmodule