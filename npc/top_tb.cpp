 #include <verilated.h> //核心头文件
 #include <verilated_vcd_c.h> //波形生成头文件
#include <iostream>
#include <fstream>
 #include "Vtop.h"  //模块类

 using namespace std;
 Vtop* top; //顶层dut对象指针
 VerilatedVcdC* tfp; //波形生成对象指针

 vluint64_t main_time = 0;           // 仿真时间戳
const vluint64_t sim_time = 1024;   // 最大仿真时间戳

int main(int argc, char **argv)
{
    // 一些初始化工作
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

	// 为对象分配内存空间
    top = new Vtop;
    tfp = new VerilatedVcdC;

    // tfp初始化工作
    top->trace(tfp, 99);
    tfp->open("Vtop.vcd");

    int count = 0;

    while(!Verilated::gotFinish() && main_time < sim_time)
    {
        // 仿真过程
		int a = rand() & 1;
		int b = rand() & 1;
		top->a = a;
		top->b = b;
        top->eval();            // 仿真时间步进
        tfp->dump(main_time);   // 波形文件写入步进
        count++;
        main_time++;
    }

    // 清理工作
    tfp->close();
    delete top;
    delete tfp;
    exit(0);
    return 0;
}
