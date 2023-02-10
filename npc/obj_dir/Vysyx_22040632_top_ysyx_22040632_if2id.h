// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040632_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040632_TOP_YSYX_22040632_IF2ID_H_
#define VERILATED_VYSYX_22040632_TOP_YSYX_22040632_IF2ID_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040632_top__Syms;
class Vysyx_22040632_top_VerilatedFst;


//----------

VL_MODULE(Vysyx_22040632_top_ysyx_22040632_if2id) {
  public:

    // LOCAL SIGNALS
    CData/*0:0*/ pcen_btb2id;
    IData/*31:0*/ pc2id;
    IData/*31:0*/ inst2id;

    // LOCAL VARIABLES
    IData/*31:0*/ __Vdly__pc2id;
    IData/*31:0*/ __Vdly__inst2id;

    // INTERNAL VARIABLES
    Vysyx_22040632_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040632_top_ysyx_22040632_if2id);  ///< Copying not allowed
  public:
    Vysyx_22040632_top_ysyx_22040632_if2id(const char* name);
    ~Vysyx_22040632_top_ysyx_22040632_if2id();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040632_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
