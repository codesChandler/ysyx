#include "memory.h"
#include "debug.h"
#include "vrltr.h"


extern void init_monitor(int argc, char *argv[]);
extern void engine_start();




int main(int argc, char** argv, char** env) {
    init_monitor(argc, argv);
    engine_start();


    // while ( main_time>=10) {
    //     main_time++;
    //     top->clk = !top->clk;

    //     top->inst = paddr_read(top->pc);
    //     top->eval();
    //     tfp->dump(main_time);   // 波形文件写入步进


    //     if(break_flag==1) break;

    // }

    // top->final();
    // tfp->close();
    // delete top;
    // delete tfp;
    exit(0);
    return 0;
}


