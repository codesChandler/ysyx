#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <stdint.h>
#define CONFIG_MBASE 0x80000000
#define RESET_VECTOR 0x80000000
#define CONFIG_MSIZE 0x8000000
#define PG_ALIGN __attribute((aligned(4096)))
#define FMT_PADDR  "0x%016lx"
typedef uint64_t word_t;
typedef uint64_t paddr_t;
typedef word_t vaddr_t;

static inline bool in_pmem(paddr_t addr) {
  return (addr >= CONFIG_MBASE) && (addr < (paddr_t)CONFIG_MBASE + CONFIG_MSIZE);
}

#endif
