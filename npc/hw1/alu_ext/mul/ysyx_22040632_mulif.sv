interface ysyx_22040632_mulif;

logic mul_valid;//为高表示输入的数据有效，如果没有新的乘法输入，在乘法被接受的下一个周期要置低
logic flush;//为高表示取消乘法
logic mulw;//为高表示是 32 位乘法
logic [1:0] mul_signed;//2’b11（signed x signed）；2’b10（signed x unsigned）；2’b00（unsigned x unsigned）；
logic [63:0] multiplicand;//被乘数，64 表示乘法器位数
logic [63:0] multiplier;//乘数
// logic mul_ready;//为高表示乘法器准备好，表示可以输入数据
// logic out_valid;//为高表示乘法器输出的结果有效
logic [63:0] result_hi;//高 64 bits 结果
logic [63:0] result_lo;//低 64 bits 结果

modport mulunit(
  input mul_valid,flush,mulw,mul_signed,multiplicand,multiplier,
  output result_hi,result_lo//mul_ready,out_valid,
);

modport cpu(
  output mul_valid,flush,mulw,mul_signed,multiplicand,multiplier,
  input result_hi,result_lo//mul_ready,out_valid,
);


endinterface