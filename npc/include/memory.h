#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <stdint.h>
#define CONFIG_MBASE 0x80000000
#define RESET_VECTOR 0x80000000
#define CONFIG_MSIZE 0x100
#define PG_ALIGN __attribute((aligned(4096)))
typedef uint64_t word_t;
typedef uint64_t paddr_t;

#endif
