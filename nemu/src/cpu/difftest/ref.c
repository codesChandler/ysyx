#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    uint8_t *buf_t=(uint8_t *) buf;
    for(int i=0;i<n;i++)
    paddr_write(addr, 1, *(buf_t+i));
  } else {
    assert(0);
  }
}

void difftest_regcpy(void *dut, bool direction) {
    uint64_t *dut_t=(uint64_t *)dut;
    if (direction == DIFFTEST_TO_REF) {
      for(int i=0;i<32;i++)
        cpu.gpr[i]=*(dut_t+i);
  } else {
      for(int i=0;i<32;i++)
        *(dut_t+i)=cpu.gpr[i];
  }
}

void difftest_exec(uint64_t n) {
    cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
