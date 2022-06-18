#include <cpu.h>
#include "time.h"
#include "debug.h"

int break_flag=0;
extern word_t paddr_read(paddr_t addr);
extern uint64_t get_time();
static uint64_t g_timer = 0; // unit: us
uint64_t g_nr_guest_inst = 0;
static int code_t;
void npcexit(int pc,int code){
  break_flag=1;
  code_t=code;
}

static void exec_once() {
  for(int i=0;i<2;i++){
    top->clk = !top->clk;
    top->inst = paddr_read(top->pc);
    top->eval();
    tfp->dump(main_time);   // 波形文件写入步进
  }
  
#ifdef CONFIG_ITRACE
  trace(s->logbuf,s);
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
    g_nr_guest_inst ++;
    // g_nr_guest_inst ++;
    // trace_and_difftest(&s, cpu.pc);
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
  // g_print_step = (n < MAX_INST_TO_PRINT);
  if (break_flag==1) {
          printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  if(break_flag==1)
        Log("npc: %s at pc = " "0x%08x",
           (code_t == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED)),
          top->pc);
        statistic();
}

