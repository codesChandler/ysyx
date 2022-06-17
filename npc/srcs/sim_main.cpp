
#include "memory.h"
#include "debug.h"
#include "vrltr.h"


extern void init_monitor(int argc, char *argv[]);
extern word_t paddr_read(paddr_t addr);

int break_flag=0;
int eval_flag=0;
Vysyx_22040632_top* top;                  // 顶层dut对象指针
VerilatedVcdC* tfp;             // 波形生成对象指针
vluint64_t main_time = 0;           // 仿真时间戳
void npcexit(int pc,int code){
    Log("npc: %s at pc = " FMT_WORD,
           (code == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED)),
          pc);
  break_flag=1;
}

int main(int argc, char** argv, char** env) {
    init_monitor(argc, argv);
    // 一些初始化工作
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // 为对象分配内存空间
    top = new Vysyx_22040632_top;
    tfp = new VerilatedVcdC;

    // tfp初始化工作
    top->trace(tfp, 99);
    tfp->open("./build/Vysyx_22040632_top.vcd");

    int count = 0;
    top->rst_n = 1;
    top->clk = 0;

    while (!Verilated::gotFinish()) {

        main_time++;
        top->clk = !top->clk;


        if (!top->clk) {
            if (main_time > 1 && main_time < 10) {
                top->rst_n = 0;  // Assert reset

            } else {
                eval_flag=1;
				        top->rst_n = 1;  // Deassert reset
            }

           
            // Assign some other inputs
        }
        top->eval();
        tfp->dump(main_time);   // 波形文件写入步进
        if(eval_flag){
        top->inst = paddr_read(top->pc);}


        if(break_flag==1) break;

    }

    top->final();
    tfp->close();
    delete top;
    delete tfp;
    exit(0);
    return 0;
}


