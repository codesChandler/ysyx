#ifndef __MEMORY_H__
#define __MEMORY_H__

#define RESET_VECTOR 0x80000000
#define CONFIG_MSIZE 0x80000000
#define PG_ALIGN __attribute((aligned(4096)))
typedef unsigned __int64 uint64_t;
typedef unsigned __int32 uint32_t;
typedef unsigned __int8 uint8_t;
typedef unsigned __int64 word_t;
typedef uint64_t paddr_t;

#endif