// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top___024unit.h"

extern "C" void npcexit(int pc, int code);

VL_INLINE_OPT void Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ code) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int code__Vcvt;
    for (size_t code__Vidx = 0; code__Vidx < 1; ++code__Vidx) code__Vcvt = code;
    npcexit(pc__Vcvt, code__Vcvt);
}
