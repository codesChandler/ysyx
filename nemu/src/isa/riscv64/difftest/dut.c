#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
extern const char *regs[];
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  for(int i=0;i<32;i++){
    if(ref_r->gpr[i]!=cpu.gpr[i]){
      printf("NO[%d]:gpr is wrong\nright:0x%lx\nwrong:0x%lx\n",i,ref_r->gpr[i],cpu.gpr[i]);
      return false;}}
  if(ref_r->pc!=cpu.pc)
    return false;
  return true;
}

void ref_reg_display(CPU_state *ref){
  printf("*************ref registers*******************\n");
  for(int i=0;i<32;i++)
  printf("   NO:%d %s: 0x%08lx\n",i,regs[i],ref->gpr[i]);
}

void isa_difftest_attach() {
}
