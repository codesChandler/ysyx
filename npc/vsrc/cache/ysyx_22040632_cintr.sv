interface ysyx_22040632_if2ic;
  logic [31:0] pc;
  logic ready;
  logic valid;
  logic [127:0] inst;
  logic   uncacheable;
  logic [63:0] inst_uncacheable;

  modport ifu(
    output pc,valid,uncacheable,
    input ready,inst,inst_uncacheable
  );

  modport ic(
    input pc,valid,uncacheable,
    output ready,inst,inst_uncacheable
  );
endinterface

interface ysyx_22040632_mem2dc;
  logic [31:0] addr;
  logic ready;
  logic valid;
  logic [63:0] data_read;
  logic req;
  logic [63:0] data_write;
  logic [63:0] wmask;
  logic [7:0]  wmask_uncacheble;


  modport mem(
    output addr,valid,req,data_write,wmask,wmask_uncacheble,
    input ready,data_read
  );

  modport dc(
    input addr,valid,req,data_write,wmask,wmask_uncacheble,
    output ready,data_read
  );
endinterface
