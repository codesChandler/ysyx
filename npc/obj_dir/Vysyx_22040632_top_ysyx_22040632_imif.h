// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040632_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040632_TOP_YSYX_22040632_IMIF_H_
#define VERILATED_VYSYX_22040632_TOP_YSYX_22040632_IMIF_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040632_top__Syms;
class Vysyx_22040632_top_VerilatedFst;


//----------

VL_MODULE(Vysyx_22040632_top_ysyx_22040632_imif) {
  public:

    // LOCAL SIGNALS
    CData/*0:0*/ rw_valid;
    CData/*0:0*/ rw_ready;
    CData/*0:0*/ rw_req;
    CData/*2:0*/ rw_size;
    CData/*7:0*/ rw_len;
    CData/*0:0*/ r_hs;
    CData/*0:0*/ r_last;
    CData/*0:0*/ w_hs;
    CData/*0:0*/ w_last;
    CData/*7:0*/ w_strb;
    CData/*0:0*/ axi_write_ahead;
    IData/*31:0*/ rw_addr;
    QData/*63:0*/ data_read;
    QData/*63:0*/ rw_w_data;

    // INTERNAL VARIABLES
    Vysyx_22040632_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040632_top_ysyx_22040632_imif);  ///< Copying not allowed
  public:
    Vysyx_22040632_top_ysyx_22040632_imif(const char* name);
    ~Vysyx_22040632_top_ysyx_22040632_imif();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040632_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
