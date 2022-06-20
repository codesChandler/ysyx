#ifndef _ISA_H_
#define _ISA_H_
typedef struct {
  uint64_t *gpr;
  uint64_t pc;
} cpu_state;

#endif