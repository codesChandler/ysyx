// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040632_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040632_TOP_YSYX_22040632_MEM2DC_H_
#define VERILATED_VYSYX_22040632_TOP_YSYX_22040632_MEM2DC_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040632_top__Syms;
class Vysyx_22040632_top_VerilatedFst;


//----------

VL_MODULE(Vysyx_22040632_top_ysyx_22040632_mem2dc) {
  public:

    // LOCAL SIGNALS
    CData/*2:0*/ size;
    CData/*0:0*/ ready;
    CData/*0:0*/ valid;

    // INTERNAL VARIABLES
    Vysyx_22040632_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040632_top_ysyx_22040632_mem2dc);  ///< Copying not allowed
  public:
    Vysyx_22040632_top_ysyx_22040632_mem2dc(const char* name);
    ~Vysyx_22040632_top_ysyx_22040632_mem2dc();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040632_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
