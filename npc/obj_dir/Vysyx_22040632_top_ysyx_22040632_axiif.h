// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040632_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040632_TOP_YSYX_22040632_AXIIF_H_
#define VERILATED_VYSYX_22040632_TOP_YSYX_22040632_AXIIF_H_  // guard

#include "verilated.h"

class Vysyx_22040632_top__Syms;
VL_MODULE(Vysyx_22040632_top_ysyx_22040632_axiif) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ axi_aw_valid;
    CData/*0:0*/ axi_ar_valid;

    // INTERNAL VARIABLES
    Vysyx_22040632_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vysyx_22040632_top_ysyx_22040632_axiif(const char* name);
    ~Vysyx_22040632_top_ysyx_22040632_axiif();
    VL_UNCOPYABLE(Vysyx_22040632_top_ysyx_22040632_axiif);

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040632_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
