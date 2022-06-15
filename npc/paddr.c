#include "memory.h"

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

uint8_t *guest_to_host(paddr_t paddr)
{
  return pmem + paddr - CONFIG_MBASE;
}

static word_t pmem_read(paddr_t addr)
{
  word_t ret = host_read(guest_to_host(addr));
  return ret;
}

static inline word_t host_read(void *addr) {
    return *(uint32_t *) addr;
}

word_t paddr_read(paddr_t addr)
{ word_t data=0;
    data=pmem_read(addr);
  #ifdef CONFIG_MTRACE
    if (likely(in_pmem(addr))) printf("paddr_read-addr: "FMT_PADDR"  data:%ld\n",addr,data);
  #endif
  return data;
}