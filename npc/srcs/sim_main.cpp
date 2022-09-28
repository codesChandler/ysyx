#include "memory.h"
#include "debug.h"
#include "vrltr.h"


extern void init_monitor(int argc, char *argv[]);
extern void engine_start();




int main(int argc, char** argv, char** env) {
    init_monitor(argc, argv);
    engine_start();
    exit(0);
    return 0;
}


