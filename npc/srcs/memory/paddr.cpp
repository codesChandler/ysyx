#include "memory.h"
#include "macro.h"
#include "debug.h"
#include "autoconfig.h"
#include <common.h>
#include <stdint.h>

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

extern void out_of_bound(paddr_t addr);

uint8_t *guest_to_host(paddr_t paddr)
{
  return pmem + paddr - CONFIG_MBASE;
}

static inline word_t host_read(void *addr) {
    return *(uint64_t *) addr;
}

static word_t pmem_read(paddr_t addr)
{
  word_t ret = host_read(guest_to_host(addr));
  return ret;
}

extern "C" void paddr_read(paddr_t raddr,word_t* rdata)
{ 
  #ifdef CONFIG_MTRACE
    if (likely(in_pmem(raddr))) printf("paddr_read-addr: "FMT_PADDR"  data:%lx\n",raddr,*rdata);
  #endif
  if (likely(in_pmem(raddr)))
  {
     *rdata=pmem_read(raddr & ~0x7ull);//地址对齐
    return;
  }
  // IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return );
  out_of_bound(raddr);
}

//write

static inline void host_write(void *waddr, char wmask, word_t wdata) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  char msk=1;
  for(int i=0;i<8;i++){
    if((wmask&(msk<<i)!=0))
      *(uint8_t  *)(waddr+i) = wdata>>(8*i);
  }
}

static void pmem_write(paddr_t waddr, char wmask, word_t wdata)
{
  host_write(guest_to_host(waddr), wmask, wdata);
}


extern "C" void paddr_write(long long waddr, long long wdata, char wmask) {
  #ifdef CONFIG_MTRACE
    if (likely(in_pmem(waddr))) printf("paddr_write-addr:"FMT_PADDR"  data:%lx\n",waddr,wdata);
  #endif
  if (likely(in_pmem(waddr)))
  {
    pmem_write(waddr, wmask, wdata);
    return;
  }
  // IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return );
  out_of_bound(waddr);
}

