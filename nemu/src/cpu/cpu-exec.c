#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <macro.h>
#include <ftrace.h>

// #include "src/monitor/sdb/sdb.h"

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10
#define IRING_BUGGER_LEN 100

extern char *strtab;
extern Elf64_Sym *symtab;
extern int nr_symtab_entry;

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
static int index_ibuf=0;//for iringbuf
static char iringbuf[IRING_BUGGER_LEN][128];
static int flag_cycle=0;
int space_nr=1;

void device_update();
void wp_evl();
void inst_display(){
  #ifndef CONFIG_ITRACE
    return;
  #endif
  int value=0;
  if (index_ibuf==0) value=15;
  else value=index_ibuf-1;
  printf("*************instructions***************\n");
  for(int i=0;i<IRING_BUGGER_LEN;i++){
    if(i==value) {printf("-->%s\n",iringbuf[i]);
    if(flag_cycle==0) break;}
    else printf("   %s\n",iringbuf[i]);
  }
}

IFDEF(CONFIG_ITRACE, 
void trace(char *buf,Decode *s){
  char *p = buf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  // printf("before itrace:%lx\n",s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = 0; i < ilen; i ++) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
     MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
});

int ftrace_imple(Decode *s){
  uint32_t inst_f=s->isa.inst.val;
  if(!((SEXTU(BITS(inst_f, 6, 0), 7)==111)||(SEXTU(BITS(inst_f, 6, 0), 7)==103 && SEXTU(BITS(inst_f, 14, 12), 3)==0))){
    return 0;
  }
  uint32_t strindex_low=0;
  uint32_t strindex_high=0;
  for(int i=0;i<nr_symtab_entry;i++){
    if(symtab[i].st_info == 18){//STT_FUNC为2,不知道为啥不对
      if(s->dnpc>=symtab[i].st_value && s->dnpc<=symtab[i].st_value+symtab[i].st_size)
        {
          strindex_low=symtab[i].st_name;
          strindex_high=symtab[i+1].st_name;
          printf("0x%lx",s->pc);
          if(inst_f==0x00008067){
            space_nr--;
            for(int i=0;i<space_nr;i++)
              printf(" ");
          printf("ret  [");
          for(int i=strindex_low;i<strindex_high;i++)
            printf("%c",*(strtab+i));   
          printf("@0x%lx]\n",s->dnpc);}
          else{
          for(int i=0;i<space_nr;i++)
              printf(" ");
            space_nr++;
          printf("call [");
          for(int i=strindex_low;i<strindex_high;i++)
            printf("%c",*(strtab+i));   
          printf("@0x%lx]\n",s->dnpc);}
    }
  }}
  return 1;
  
}

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
  IFDEF(CONFIG_WATCHPOINT, wp_evl());

}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  trace(s->logbuf,s);
#endif
#ifdef CONFIG_IRINGBUF
  trace(iringbuf[index_ibuf],s);
  index_ibuf++;
  if(index_ibuf==IRING_BUGGER_LEN) {index_ibuf=0;flag_cycle=1;}
#endif
  // extern void assert_fail_msg();
  // assert_fail_msg();
#ifdef CONFIG_FTRACE
 // printf("I am here\n");
  ftrace_imple(s);
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
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

void assert_fail_msg() {
  isa_reg_display();
  statistic();
  inst_display();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
          nemu_state.halt_pc);inst_display();
      // fall through
    case NEMU_QUIT: statistic();
  }
}
