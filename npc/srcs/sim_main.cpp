// For std::unique_ptr
#include <memory>

// Include common routines
#include <verilated.h>
#include "memory.h"
#include "debug.h"

// Include model header, generated from Verilating "top.v"
#include "Vysyx_22040632_top.h"
#include "Vysyx_22040632_top__Dpi.h"


extern void init_monitor(int argc, char *argv[]);
extern word_t paddr_read(paddr_t addr);

int break_flag=0;
int eval_flag=0;
void npcexit(int pc,int code){
    Log("npc: %s at pc = " FMT_WORD,
           (code == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED)),
          pc);
  break_flag=1;
}

int main(int argc, char** argv, char** env) {

    init_monitor(argc, argv);

    if (false && argc && argv && env) {}

    Verilated::mkdir("logs");

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    contextp->debug(0);

    contextp->randReset(2);

    contextp->traceEverOn(true);

    contextp->commandArgs(argc, argv);

    const std::unique_ptr<Vysyx_22040632_top> top{new Vysyx_22040632_top{contextp.get(), "TOP"}};

    top->rst_n = !0;
    top->clk = 0;

    while (!contextp->gotFinish()) {

        contextp->timeInc(1);  // 1 timeprecision period 
        top->clk = !top->clk;


        if (!top->clk) {
            if (contextp->time() > 1 && contextp->time() < 10) {
                top->rst_n = !1;  // Assert reset
            } else {
                eval_flag=1;
				        top->rst_n = !0;  // Deassert reset
            }

           
            // Assign some other inputs
        }

        if(eval_flag){
        top->eval();
        top->inst = paddr_read(top->pc);}


        if(break_flag==1) break;

    }

    top->final();

    // Coverage analysis (calling write only after the test is known to pass)
#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif

    return 0;
}


