interface ysyx_22040632_divif #(
  parameter XLEN=64
);
logic [XLEN-1:0] dividend;//被除数
logic [XLEN-1:0] divisor;//除数
logic div_valid;//表示输入数据有效
logic divw;//高代表32位除法
logic div_signed;//高代表有除号除法
logic flush;//为高表示取消除法，修改除法器的状态
logic div_ready;//高代表除法器空闲，可以输入数据
logic out_valid;//高代表除法器结果有效
logic [XLEN-1:0] quotient;//商
logic [XLEN-1:0] remainder;//余数

modport divider(
  input dividend,divisor,div_valid,divw,div_signed,flush,
  output div_ready,out_valid,quotient,remainder
);

modport cpu(
  output dividend,divisor,div_valid,divw,div_signed,flush,
  input div_ready,out_valid,quotient,remainder
);


endinterface