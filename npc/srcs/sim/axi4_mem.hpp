#ifndef AXI4_MEM
#define AXI4_MEM

#include "axi4_slave.hpp"
#include "common.h"
#include "verilated.h"

#include <fstream>
#include <iostream>

extern void paddr_write(paddr_t addr, int len, word_t data);
extern word_t paddr_read(paddr_t addr, int len);


template <unsigned int A_WIDTH = 32, unsigned int D_WIDTH = 64, unsigned int ID_WIDTH = 4>
class axi4_mem : public axi4_slave<A_WIDTH,D_WIDTH,ID_WIDTH>  {
    public:
        axi4_mem(size_t size_bytes) {
        }
        ~axi4_mem() {
        }
    protected:
        axi_resp do_read(uint64_t start_addr, uint64_t size, uint8_t* buffer) {
            uint64_t *buffer_temp=(uint64_t *)buffer;
            word_t data=0;
            int cacheable=size/8;
            if(cacheable>0)
              for(int i=0;i<size/8;i++)
                {data=paddr_read(start_addr+i*8,(int)size);
                *(buffer_temp+i)=data;}
            else
              {data=paddr_read(start_addr,(int)size);
              *buffer_temp=data;}

            return RESP_OKEY;

        }
        axi_resp do_write(uint64_t start_addr, uint64_t size, const uint8_t* buffer) {
            word_t data;
            memcpy(&data,buffer,size);
            paddr_write(start_addr,(int)size,data);
            return RESP_OKEY;
        }
};

#endif