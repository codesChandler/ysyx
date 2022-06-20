#include <stdio.h>
#include <getopt.h>
#include "memory.h"
#include <stdint.h>
#include <debug.h>
#include "vrltr.h"
#include "macro.h"
#include "autoconfig.h"
#include "isa.h"

extern uint8_t *guest_to_host(paddr_t paddr);
extern "C" void init_disasm(const char *triple);
extern void load_elf_tables(char *file);
extern void init_difftest(char *ref_so_file, long img_size, int port);
static char *img_file = NULL;
static char *diff_so_file = NULL;
static int difftest_port = 1234;
extern cpu_state cpu;

Vysyx_22040632_top* top;                  // 顶层dut对象指针
VerilatedVcdC* tfp;             // 波形生成对象指针
vluint64_t main_time = 0;           // 仿真时间戳

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ASNI_FMT("ON", ASNI_FG_GREEN), ASNI_FMT("OFF", ASNI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-npc!\n", ASNI_FMT(str(riscv64), ASNI_FG_YELLOW ASNI_BG_RED));
  printf("For help, type \"help\"\n");
  //Log("Exercise: Please remove me in the source code and compile NEMU again.");
}

static long load_img() {
  if(img_file == NULL){
    printf("no input\n");
    return 0;
  }
  else{
    printf("img:%s\n",img_file);
  }
  FILE *fp = fopen(img_file, "rb");
  // Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  // assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"binary"    , required_argument      , NULL, 'b'},
    // {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    // {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"ftrace"   , required_argument, NULL, 'f'},
    {0          , 0                , NULL,  0 },
  };

  int o;
  while ( (o = getopt_long(argc, argv, "b:hl:d:p:f:", table, NULL)) != -1) {
    switch (o) {
      case 'b': img_file=optarg; break;
      // case 'p': sscanf(optarg, "%d", &difftest_port); break;
      // case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'f': load_elf_tables(optarg);break;
      case 1: return 0; //img_file = optarg; 
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        // exit(0);
    }
  }
  return 0;
}
void inti_vei(int argc, char *argv[]){
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    // 为对象分配内存空间
    top = new Vysyx_22040632_top;
    tfp = new VerilatedVcdC;

    // tfp初始化工作
    top->trace(tfp, 99);
    tfp->open("./build/Vysyx_22040632_top.vcd");
    top->rst_n = 1;
    top->clk = 0;
    while(main_time<9){
    main_time++;
    top->clk = !top->clk;
    if (!top->clk) 
      {if (main_time > 1 && main_time < 8) 
                top->rst_n = 0;  // Assert rese
      else top->rst_n = 1;}
      
    top->eval();
    tfp->dump(main_time);   // 波形文件写入步进
    }
      *(cpu.gpr_pc+32)=top->pc;

}

void init_monitor(int argc, char *argv[]){
    parse_args(argc,argv);
    long img_size =load_img();
    inti_vei(argc,argv);
    IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(1, "riscv64", "bad")))) "-pc-linux-gnu"
  ));
    init_difftest(diff_so_file, img_size, difftest_port);
    welcome();
}