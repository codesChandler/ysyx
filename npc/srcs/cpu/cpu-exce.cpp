#include "cpu.h"
#include "common.h"
#include "time.h"
#include "debug.h"
#include "generated/autoconfig.h"
#include "ftrace.h"
#include "isa.h"
#include "axi4.h"

#define MAX_INST_TO_PRINT 10

extern cpu_state cpu;
extern char logbuf[128];
int break_flag=0;

//extern "C" void paddr_read(paddr_t raddr,word_t* rdata);
extern uint64_t get_time();
extern vluint64_t main_time;           // 仿真时间戳
static uint64_t g_timer = 0; // unit: us
uint64_t g_nr_guest_inst = 0;
static bool g_print_step = false;
static uint64_t pc_l,pc_end;
// static int code_t;
int code_t;

int index_ibuf=0;//for iringbuf
char iringbuf[64][128];
int flag_cycle=0;

extern void difftest_skip_ref();
extern void difftest_step(vaddr_t pc);
extern void trace(char *buf,uint32_t instr,uint64_t pc);
extern void device_update();


void npcexit(int code){
  break_flag=1;
  code_t=code;
}

static void trace_and_difftest(char *logbuf) {
#ifdef CONFIG_ITRACE_COND
  // if (ITRACE_COND) { log_write("%s\n", logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(top->pc));
}

extern axi4_ptr<32,64,4> pmem_ptr;
extern axi4<32,64,4> pmem_sigs;
extern axi4_ref<32,64,4> pmem_sigs_ref;

axi4_mem<32,64,4> pmem(4096l*1024*1024);

static void exec_once() {
  axi4_ref<32,64,4> pmem_ref(pmem_ptr);
  uint64_t inst_l;
  
  for(int i=0;i<2;i++){
    main_time++;
    top->clk = !top->clk;

    if(top->clk ==1){
      pmem_sigs.update_input(pmem_ref);//pmem_sigs<-mem_ref master->slave

      top->eval();
      IFDEF(CONFIG_WAVE, tfp->dump(main_time));// 波形文件写入步进
    
    //this update surfaces in next posedge
    //update_output:slave->master
      pmem.beat(pmem_sigs_ref);//update this ref
      pmem_sigs.update_output(pmem_ref);}
    else{

      top->eval();
      IFDEF(CONFIG_WAVE, tfp->dump(main_time));// 波形文件写入步进
    }

  }
  *(cpu.gpr_pc+32)=top->pc;

  inst_l=top->inst;
  pc_l=top->pc;
#ifdef CONFIG_ITRACE
  if(top->submit)
    trace(logbuf,inst_l,pc_l);
#endif

#ifdef CONFIG_IRINGBUF
  if(top->submit){
  pc_end=top->pc;
  trace(iringbuf[index_ibuf],inst_l,pc_l);
  index_ibuf++;
  if(index_ibuf==64) {index_ibuf=0;flag_cycle=1;}}
#endif

#ifdef CONFIG_FTRACE
  ftrace_imple(inst_l,top->pc,pc_l);
#endif
}


static void execute(uint64_t n) {
  
  for (;n > 0; n --) {
    exec_once();
    
    if(top->skip){
      difftest_skip_ref();
    }
    if(top->submit){
      g_nr_guest_inst ++;
    trace_and_difftest(logbuf);}
    if (break_flag==1) {
      top->final();
      tfp->close();
      delete top;
      delete tfp;      
      break;}
    IFDEF(CONFIG_DEVICE, device_update());
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
          printf("Program execution has ended. To restart the program, exit npc and run again.\n");
      return;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  if(break_flag==1){
        Log("npc: %s at pc = " FMT_WORD,
           (code_t == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED)),
          pc_end);
        statistic();}
  assert(code_t == 0);
}
