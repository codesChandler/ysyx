// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040632_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040632_TOP_YSYX_22040632_EX2IF_H_
#define VERILATED_VYSYX_22040632_TOP_YSYX_22040632_EX2IF_H_  // guard

#include "verilated.h"

class Vysyx_22040632_top__Syms;
VL_MODULE(Vysyx_22040632_top_ysyx_22040632_ex2if) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ pc_en2if;
    CData/*0:0*/ btb_add2if;
    IData/*31:0*/ pc2if;

    // INTERNAL VARIABLES
    Vysyx_22040632_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vysyx_22040632_top_ysyx_22040632_ex2if(const char* name);
    ~Vysyx_22040632_top_ysyx_22040632_ex2if();
    VL_UNCOPYABLE(Vysyx_22040632_top_ysyx_22040632_ex2if);

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040632_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
