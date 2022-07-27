#include "verilated_dpi.h"
#include "vrltr.h"
#include "common.h"
#include "isa.h"

cpu_state cpu;
extern uint64_t ref_r[33];;
extern Vysyx_22040632_top* top; 
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu.gpr_pc = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6","pc"
};

void isa_reg_display() {
  printf("*************registers*******************\n");
  for(int i=0;i<=32;i++)
  printf("   NO:%d %s: 0x%08lx ref:0x%08lx\n",i,regs[i],*(cpu.gpr_pc+i),*(ref_r+i));

}
