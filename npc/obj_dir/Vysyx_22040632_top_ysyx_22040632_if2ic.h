// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040632_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040632_TOP_YSYX_22040632_IF2IC_H_
#define VERILATED_VYSYX_22040632_TOP_YSYX_22040632_IF2IC_H_  // guard

#include "verilated.h"

class Vysyx_22040632_top__Syms;
VL_MODULE(Vysyx_22040632_top_ysyx_22040632_if2ic) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ valid;
    VlWide<4>/*127:0*/ inst;
    QData/*63:0*/ __PVT__inst_uncacheable;

    // INTERNAL VARIABLES
    Vysyx_22040632_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vysyx_22040632_top_ysyx_22040632_if2ic(const char* name);
    ~Vysyx_22040632_top_ysyx_22040632_if2ic();
    VL_UNCOPYABLE(Vysyx_22040632_top_ysyx_22040632_if2ic);

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040632_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
