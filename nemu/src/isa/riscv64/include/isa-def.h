#ifndef __ISA_RISCV64_H__
#define __ISA_RISCV64_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} riscv64_CPU_state;

typedef struct {
  vaddr_t index;
  word_t  reg;
  char * name;
} CSR;//for cte

#define CSR_LEN 4
#define MTVEC_INDEX 0x305
#define MEPC_INDEX 0x341
#define MSTATUS_INDEX 0x300
#define MCAUSE_INDEX 0x342

#define Env_Call_M 0xb //Environment call from M-mode

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} riscv64_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
