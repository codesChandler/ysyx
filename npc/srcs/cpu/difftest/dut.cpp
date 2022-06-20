#include "autoconfig.h"
#include "memory.h"
#include "common.h"
#include "debug.h"
#include "macro.h"
#include <dlfcn.h>
#include "difftest.h"
#include "isa.h"

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

extern int break_flag;
extern int code_t;
void npcexit(int code){
  break_flag=1;
  code_t=code;
}//不知道为啥npcexit链接不上
// extern void npcexit(int code);
#ifdef CONFIG_DIFFTEST
extern uint8_t *guest_to_host(paddr_t paddr);
extern cpu_state cpu;
// extern void npcexit(int code);
extern void isa_reg_display();

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY | MUXNDEF(CONFIG_CC_ASAN, RTLD_DEEPBIND, 0));
  assert(handle);

  ref_difftest_memcpy =( void (*)(paddr_t, void*, size_t, bool)) dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec =(void (*)(uint64_t)) dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ASNI_FMT("ON", ASNI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in autoconfig.h.", ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

bool isa_difftest_checkregs(uint64_t *ref_r, vaddr_t pc) {
  for(int i=0;i<32;i++){
    if(*(ref_r+i)!=*(cpu.gpr+i))
      return false;}
  if(*(ref_r+32)!=cpu.pc)
    return false;
  return true;
}

static void checkregs(uint64_t *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npcexit(1);
    isa_reg_display();
  }
}

void difftest_step(vaddr_t pc) {
  uint64_t ref_r[33];
  ref_difftest_exec(1);
  ref_difftest_regcpy(ref_r, DIFFTEST_TO_DUT);

  checkregs(ref_r, pc);
  // if (skip_dut_nr_inst > 0) {
  //   ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  //   if (ref_r.pc == npc) {
  //     skip_dut_nr_inst = 0;
  //     checkregs(&ref_r, npc);
  //     return;
  //   }
  //   skip_dut_nr_inst --;
  //   if (skip_dut_nr_inst == 0)
  //     panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
  //   return;
  // }

  // if (is_skip_ref) {
  //   // to skip the checking of an instruction, just copy the reg state to reference design
  //   ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
  //   is_skip_ref = false;
  //   return;
  // }


}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif
