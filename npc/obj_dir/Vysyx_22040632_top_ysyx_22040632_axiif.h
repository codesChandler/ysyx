// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040632_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040632_TOP_YSYX_22040632_AXIIF_H_
#define VERILATED_VYSYX_22040632_TOP_YSYX_22040632_AXIIF_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040632_top__Syms;
class Vysyx_22040632_top_VerilatedFst;


//----------

VL_MODULE(Vysyx_22040632_top_ysyx_22040632_axiif) {
  public:

    // LOCAL SIGNALS
    CData/*0:0*/ axi_aw_ready;
    CData/*0:0*/ axi_aw_valid;
    CData/*0:0*/ axi_w_ready;
    CData/*0:0*/ axi_b_valid;
    CData/*1:0*/ axi_b_resp;
    CData/*3:0*/ axi_b_id;
    CData/*0:0*/ axi_ar_ready;
    CData/*0:0*/ axi_ar_valid;
    CData/*0:0*/ axi_r_valid;
    CData/*1:0*/ axi_r_resp;
    CData/*0:0*/ axi_r_last;
    CData/*3:0*/ axi_r_id;
    QData/*63:0*/ axi_r_data;

    // INTERNAL VARIABLES
    Vysyx_22040632_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040632_top_ysyx_22040632_axiif);  ///< Copying not allowed
  public:
    Vysyx_22040632_top_ysyx_22040632_axiif(const char* name);
    ~Vysyx_22040632_top_ysyx_22040632_axiif();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040632_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
