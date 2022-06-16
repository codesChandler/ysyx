#include "memory.h"
#include <stdio.h>


extern void init_monitor(int argc, char *argv[]);
extern word_t paddr_read(paddr_t addr);

int main(int argc, char** argv, char** env) {

    init_monitor(argc, argv);
    printf("instr:%lx",paddr_read(0x80000000));
    return 0;
}

