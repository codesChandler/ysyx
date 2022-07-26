// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_22040632_TOP__DPI_H_
#define VERILATED_VYSYX_22040632_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/chandler/ysyx-workbench/npc/hw/ysyx_22040632_RISCV_PKG.svh:8:30
    extern void npcexit(int code);
    // DPI import at /home/chandler/ysyx-workbench/npc/hw/ysyx_22040632_RISCV_PKG.svh:4:30
    extern void paddr_read(long long raddr, long long* rdata);
    // DPI import at /home/chandler/ysyx-workbench/npc/hw/ysyx_22040632_RISCV_PKG.svh:6:30
    extern void paddr_write(long long waddr, long long wdata, char wmask);
    // DPI import at /home/chandler/ysyx-workbench/npc/hw/ysyx_22040632_RISCV_PKG.svh:9:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
