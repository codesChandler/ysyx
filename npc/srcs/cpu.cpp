#include "cpu.h"
#include "common.h"
#include "time.h"
#include "debug.h"
#include "autoconfig.h"
#define MAX_INST_TO_PRINT 10


int break_flag=0;
extern word_t paddr_read(paddr_t addr);
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
extern uint64_t get_time();
extern vluint64_t main_time;           // 仿真时间戳
static uint64_t g_timer = 0; // unit: us
uint64_t g_nr_guest_inst = 0;
static bool g_print_step = false;
static int code_t;
char logbuf[128];

void npcexit(int pc,int code){
  break_flag=1;
  code_t=code;
}

void trace(char *buf,uint32_t instr,uint64_t pc){
  char *p = buf;
  #pragma GCC diagnostic push//避免报错
  #pragma GCC diagnostic ignored "-Wformat-truncation"
  p+= snprintf(p, sizeof(logbuf), FMT_WORD ":", pc);
  // assert(j <= sizeof(buf));
  #pragma GCC diagnostic pop
  // printf("before itrace:%lx\n",s->pc);
  int ilen = 4;
  int i;
  struct {union {uint32_t val;} inst;} s;
  s.inst.val=instr;
  uint8_t *inst = (uint8_t *)&s.inst.val;
  for (i = 0; i < ilen; i ++) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  // disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
    //  MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
  // (char *str, int size, uint64_t pc, uint8_t *code, int nbyte)
  disassemble(p, buf + sizeof(logbuf) - p,pc, (uint8_t *)&s.inst.val, ilen);
}

static void trace_and_difftest(char *logbuf) {
#ifdef CONFIG_ITRACE_COND
  // if (ITRACE_COND) { log_write("%s\n", logbuf); }
#endif
  if (g_print_step) { printf("here\n");IFDEF(CONFIG_ITRACE, puts(logbuf)); }
  // IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
  // IFDEF(CONFIG_WATCHPOINT, wp_evl());

}

static void exec_once() {
  for(int i=0;i<2;i++){
    main_time++;
    top->clk = !top->clk;
    // printf("pc:0x%08x\n",top->pc);
    // printf("rst_n:%d\n",top->rst_n);
    top->inst = paddr_read(top->pc);
    top->eval();
    tfp->dump(main_time);   // 波形文件写入步进
  }
  
#ifdef CONFIG_ITRACE
  // printf("bufsize:%ld\n",sizeof(logbuf));
  
  trace(logbuf,top->inst,top->pc);
#endif
#ifdef CONFIG_IRINGBUF
  trace(iringbuf[index_ibuf],s);
  index_ibuf++;
  if(index_ibuf==16) {index_ibuf=0;flag_cycle=1;}
#endif
#ifdef CONFIG_FTRACE
 // printf("I am here\n");
  ftrace_imple(s);
#endif
}

static void execute(uint64_t n) {
  for (;n > 0; n --) {
    exec_once();
    // printf("here");
    g_nr_guest_inst ++;
    trace_and_difftest(logbuf);
    if (break_flag==1) {
      top->final();
      tfp->close();
      delete top;
      delete tfp;      
      break;}
    // IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  if (break_flag==1) {
          printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  if(break_flag==1)
        Log("npc: %s at pc = " FMT_WORD,
           (code_t == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED)),
          top->pc);
        statistic();
}

