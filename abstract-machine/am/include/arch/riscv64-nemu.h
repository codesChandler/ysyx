#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[32],mcause,mstatus,mepc;
  void *pdir;//地址空间，暂时不使用
};

#define GPR1 gpr[17] // a7
#define GPR2 gpr[0]
#define GPR3 gpr[0]
#define GPR4 gpr[0]
#define GPRx gpr[0]
#endif
