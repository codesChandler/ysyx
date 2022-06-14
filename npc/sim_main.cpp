// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================

// For std::unique_ptr
#include <memory>
// #include <getopt_ext.h>

// Include common routines
#include <verilated.h>

// Include model header, generated from Verilating "top.v"
#include "Vysyx_22040632_top.h"
#include "Vysyx_22040632_top__Dpi.h"
int char2dec(char *hex)
{
  int len;
  int num = 0;
  //int temp0=0;

  len = strlen(hex);

  for (int i = 0, temp = 0; i < len; i++)
  {
    //temp0=*(hex + i) - 48;
    temp =( *(hex + i) - 48)*((int)pow(2,(double)(len - i - 1)));
    num = num + temp;
  }

  return num;
}
// Legacy function required only so linking works on Cygwin and MSVC++
// double sc_time_stamp() { return 0; }
// static int parse_args(int argc, char *argv[]) {
//   const struct option table[] = {
//     {"batch"    , no_argument      , NULL, 'b'},
//     {"log"      , required_argument, NULL, 'l'},
//     {"diff"     , required_argument, NULL, 'd'},
//     {"port"     , required_argument, NULL, 'p'},
//     {"help"     , no_argument      , NULL, 'h'},
//     {"ftrace"   , required_argument, NULL, 'f'},
//     {0          , 0                , NULL,  0 },
//   };
//   int o;
//   while ( (o = getopt_long(argc, argv, "-bhl:d:p:f:", table, NULL)) != -1) {
//     switch (o) {
//       case 'b': sdb_set_batch_mode(); break;
//       case 'p': sscanf(optarg, "%d", &difftest_port); break;
//       case 'l': log_file = optarg; break;
//       case 'd': diff_so_file = optarg; break;
//       case 'f':printf("elf:%s\n",optarg); load_elf_tables(optarg);break;
//       case 1: printf("img_o:%d\n",o);printf("0000000000img:%s\n",optarg); img_file = optarg; return 0;
//       default:
//         printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
//         printf("\t-b,--batch              run with batch mode\n");
//         printf("\t-l,--log=FILE           output log to FILE\n");
//         printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
//         printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
//         printf("\n");
//         exit(0);
//     }
//   }
//   return 0;
// }

int pmem_read(int pc){
  char *mem[3]={"00100000000000000000101110010011","00100000000000000 000101110010011","00000000000100000000000001110011"};
 return char2dec(mem[(pc-0x80000000)/32]);
}
int break_flag=0;
int eval_flag=0;
void myexit(){
  break_flag=1;
}

int main(int argc, char** argv, char** env) {
    // This is a more complicated example, please also see the simpler examples/make_hello_c.

    // Prevent unused variable warnings
    if (false && argc && argv && env) {}

    // Create logs/ directory in case we have traces to put under it
    Verilated::mkdir("logs");

    // Construct a VerilatedContext to hold simulation time, etc.
    // Multiple modules (made later below with Vtop) may share the same
    // context to share time, or modules may have different contexts if
    // they should be independent from each other.

    // Using unique_ptr is similar to
    // "VerilatedContext* contextp = new VerilatedContext" then deleting at end.
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};

    // Set debug level, 0 is off, 9 is highest presently used
    // May be overridden by commandArgs argument parsing
    contextp->debug(0);

    // Randomization reset policy
    // May be overridden by commandArgs argument parsing
    contextp->randReset(2);

    // Verilator must compute traced signals
    contextp->traceEverOn(true);

    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    // This needs to be called before you create any model
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v".
    // Using unique_ptr is similar to "Vtop* top = new Vtop" then deleting at end.
    // "TOP" will be the hierarchical name of the module.
    const std::unique_ptr<Vysyx_22040632_top> top{new Vysyx_22040632_top{contextp.get(), "TOP"}};

    // Set Vtop's input signals
    top->rst_n = !0;
    top->clk = 0;

    // Simulate until $finish
    while (!contextp->gotFinish()) {
        // Historical note, before Verilator 4.200 Verilated::gotFinish()
        // was used above in place of contextp->gotFinish().
        // Most of the contextp-> calls can use Verilated:: calls instead;
        // the Verilated:: versions simply assume there's a single context
        // being used (per thread).  It's faster and clearer to use the
        // newer contextp-> versions.

        contextp->timeInc(1);  // 1 timeprecision period passes...
        // Historical note, before Verilator 4.200 a sc_time_stamp()
        // function was required instead of using timeInc.  Once timeInc()
        // is called (with non-zero), the Verilated libraries assume the
        // new API, and sc_time_stamp() will no longer work.

        // Toggle a fast (time/2 period) clock
        top->clk = !top->clk;

        // Toggle control signals on an edge that doesn't correspond
        // to where the controls are sampled; in this example we do
        // this only on a negedge of clk, because we know
        // reset is not sampled there.
        if (!top->clk) {
            if (contextp->time() > 1 && contextp->time() < 10) {
                top->rst_n = !1;  // Assert reset
            } else {
                eval_flag=1;
				        top->rst_n = !0;  // Deassert reset
            }

           
            // Assign some other inputs
        }
        // printf("pc:%lx",top->pc);
        
        // top->inst=1;
        // Evaluate model
        // (If you have multiple models being simulated in the same
        // timestep then instead of eval(), call eval_step() on each, then
        // eval_end_step() on each. See the manual.)
        if(eval_flag){
        top->eval();
         top->inst = pmem_read(top->pc);}


        if(break_flag==1) break;

    }

    // Final model cleanup
    top->final();

    // Coverage analysis (calling write only after the test is known to pass)
#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif

    // Return good completion status
    // Don't use exit() or destructor won't get called
    return 0;
}

