interface ysyx_22040632_if2id;


logic [31:0] pc2id;
logic [31:0] inst2id;
logic pcen_btb2id;

modport ifu(
  output pc2id,inst2id,pcen_btb2id
);

modport id(
  input pc2id,inst2id,pcen_btb2id
);

modport ex(
  input pc2id,pcen_btb2id
);

endinterface

interface ysyx_22040632_id2ex;

  logic [63:0] src1;
  logic [63:0] src2;
  func operation;
  logic [31:0] pc2ex;
  logic [31:0] inst2ex;
  logic [63:0] data_ext;
  logic [4:0] rd,rs1_2ex,rs2_2ex;
  logic [2:0] src_from_gpr2ex;
  logic uart_en2ex;
  logic op_div2ex;

  logic [31:0] pc_mret_ecall2ex;
  logic [31:0] csr_addr_write2ex;

modport id(
  output src1,src2,operation,pc2ex,inst2ex,data_ext,rd,src_from_gpr2ex,rs1_2ex,rs2_2ex,pc_mret_ecall2ex,csr_addr_write2ex,uart_en2ex,op_div2ex
);

modport ex(
  input src1,src2,operation,pc2ex,inst2ex,data_ext,rd,src_from_gpr2ex,rs1_2ex,rs2_2ex,pc_mret_ecall2ex,csr_addr_write2ex,uart_en2ex,op_div2ex
);

endinterface


interface ysyx_22040632_ex2mem;

  logic [63:0] data2mem;
  logic ld_en2mem;
  ld_t  ld_ty;
  logic sd_en2mem;
  sd_t  sd_ty;
  logic rd_w_ena;
  logic [4:0] rd2mem;
  logic [63:0] data_ext2mem;
  logic [31:0] pc2mem;
  logic [31:0] inst2mem;
  logic uart_en2mem;

  logic wen_csr2mem;
  logic wen_ecall2mem;
  logic [63:0] NO2mem;
  logic [63:0] csr_data_write2mem;
  logic [31:0] csr_addr_write2mem;
  logic wen_mstatus_ecall2mem;
  logic wen_mstatus_mret2mem;
  logic not_submit2mem;

  modport ex(
    output data2mem,ld_en2mem,ld_ty,sd_en2mem,sd_ty,rd_w_ena,rd2mem,data_ext2mem,pc2mem,inst2mem,wen_csr2mem,wen_ecall2mem,NO2mem,csr_data_write2mem,csr_addr_write2mem,wen_mstatus_ecall2mem,wen_mstatus_mret2mem,not_submit2mem,uart_en2mem
  );

  modport mem(
    input data2mem,ld_en2mem,ld_ty,sd_en2mem,sd_ty,rd_w_ena,rd2mem,data_ext2mem,pc2mem,inst2mem,wen_csr2mem,wen_ecall2mem,NO2mem,csr_data_write2mem,csr_addr_write2mem,wen_mstatus_ecall2mem,wen_mstatus_mret2mem,not_submit2mem,uart_en2mem
  );

endinterface

interface ysyx_22040632_ex2if;
    logic [31:0] pc2if;
    logic [31:0] cpc2if;//current pc
    logic pc_en2if;
    logic btb_add2if;

  modport ex(
    output pc2if,pc_en2if,cpc2if,btb_add2if
    );

  modport ifu(
    input pc2if,pc_en2if,cpc2if,btb_add2if
  );
endinterface

interface ysyx_22040632_mem2wb;
  logic [4:0] rd2wb;
  logic [63:0] data2wb;
  logic [63:0] data_ld2wb;
  logic ld_en2wb;
  logic rd_w_ena2wb;
  logic [31:0] pc2wb;
  logic [31:0] inst2wb;
  logic uart_en2wb;

  logic wen_csr2wb;
  logic wen_ecall2wb;
  logic [63:0] NO2wb;
  logic [63:0] csr_data_write2wb;
  logic [31:0] csr_addr_write2wb;
  logic wen_mstatus_ecall2wb;
  logic wen_mstatus_mret2wb;
  logic not_submit2wb;
  logic skip_clint2wb;

  modport mem(
    output rd2wb,data2wb,data_ld2wb,ld_en2wb,rd_w_ena2wb,pc2wb,inst2wb,wen_csr2wb,wen_ecall2wb,NO2wb,csr_data_write2wb,csr_addr_write2wb,wen_mstatus_ecall2wb,wen_mstatus_mret2wb,not_submit2wb,skip_clint2wb,uart_en2wb
  );

  modport wb(
    input rd2wb,data2wb,data_ld2wb,ld_en2wb,rd_w_ena2wb,pc2wb,inst2wb,wen_csr2wb,wen_ecall2wb,NO2wb,csr_data_write2wb,csr_addr_write2wb,wen_mstatus_ecall2wb,wen_mstatus_mret2wb,not_submit2wb,skip_clint2wb,uart_en2wb
  );

  modport ex(
    input rd2wb,data2wb,rd_w_ena2wb
  );

endinterface

interface ysyx_22040632_wb2id;

  logic [63:0] data2reg;
  logic [4:0] rd2reg;
  logic rd_w_ena2reg;

  modport wb(
    output data2reg,rd2reg,rd_w_ena2reg
  );

  modport id(
    input data2reg,rd2reg,rd_w_ena2reg
  );

endinterface

interface ysyx_22040632_wb2csr;
  logic wen_csr2csr;
  logic wen_ecall2csr;
  logic [63:0] NO2csr;
  logic [31:0] pc2csr;
  logic [63:0] csr_data_write2csr;
  logic [31:0] csr_addr_write2csr;
  logic wen_mstatus_ecall2csr;
  logic wen_mstatus_mret2csr;

  modport wb(
    output wen_csr2csr,wen_ecall2csr,NO2csr,pc2csr,csr_data_write2csr,csr_addr_write2csr,wen_mstatus_ecall2csr,wen_mstatus_mret2csr
  );

  modport csr(
    input wen_csr2csr,wen_ecall2csr,NO2csr,pc2csr,csr_data_write2csr,csr_addr_write2csr,wen_mstatus_ecall2csr,wen_mstatus_mret2csr
  );
endinterface

interface ysyx_22040632_id2if;

logic block_id2if;
logic [31:0] pc_f;

modport id(
  output block_id2if,pc_f
);

modport ifu(
  input block_id2if,pc_f
);

endinterface

interface ysyx_22040632_mem2ex;


logic lden2ex_1cy;//2 cycle 1 instruction
logic [63:0]data_ld2ex_1cy;
logic lden2ex_2cy;
logic [4:0] rd2ex_2cy;
logic [63:0] data_ld2ex_2cy;
logic en_clint2ex;

modport mem(
  output lden2ex_1cy,data_ld2ex_1cy,lden2ex_2cy,rd2ex_2cy,data_ld2ex_2cy,en_clint2ex
);

modport ex(
  input lden2ex_1cy,data_ld2ex_1cy,lden2ex_2cy,rd2ex_2cy,data_ld2ex_2cy,en_clint2ex
);

endinterface

interface ysyx_22040632_ex2id;

logic ld_en2id;


modport ex(
  output ld_en2id
);

modport id(
  input ld_en2id
);

endinterface

interface ysyx_22040632_mem2id;
logic ls_sh2id;

modport mem(
  output ls_sh2id
);
modport id(
  input ls_sh2id
);
endinterface

interface ysyx_22040632_id2csr;
  logic [31:0] csr_addr_read2csr;
  logic [63:0] csr_read2id;

  modport id(
    output csr_addr_read2csr,
    input  csr_read2id
  );

  modport csr(
    input csr_addr_read2csr,
    output  csr_read2id
  );
endinterface

interface ysyx_22040632_mem2clint;
  logic wen_clint;
  logic [63:0] data_write_clint;
  logic [31:0] addr_clint;
  logic [63:0] data_read_clint;

  modport mem(
    output wen_clint,addr_clint,data_write_clint,
    input data_read_clint
  );

  modport clint(
    input wen_clint,addr_clint,data_write_clint,
    output data_read_clint
  );


endinterface