// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040632_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040632_TOP_YSYX_22040632_ID2EX_H_
#define VERILATED_VYSYX_22040632_TOP_YSYX_22040632_ID2EX_H_  // guard

#include "verilated.h"

class Vysyx_22040632_top__Syms;
VL_MODULE(Vysyx_22040632_top_ysyx_22040632_id2ex) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*6:0*/ operation;
    CData/*4:0*/ rd;
    CData/*4:0*/ rs1_2ex;
    CData/*4:0*/ rs2_2ex;
    CData/*2:0*/ src_from_gpr2ex;
    CData/*0:0*/ uart_en2ex;
    CData/*0:0*/ quit2ex;
    CData/*4:0*/ __Vdly__rd;
    CData/*4:0*/ __Vdly__rs1_2ex;
    CData/*6:0*/ __Vdly__operation;
    IData/*31:0*/ pc2ex;
    IData/*31:0*/ inst2ex;
    IData/*31:0*/ pc_mret_ecall2ex;
    IData/*31:0*/ csr_addr_write2ex;
    IData/*31:0*/ __Vdly__pc2ex;
    QData/*63:0*/ src1;
    QData/*63:0*/ src2;
    QData/*63:0*/ data_ext;

    // INTERNAL VARIABLES
    Vysyx_22040632_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vysyx_22040632_top_ysyx_22040632_id2ex(const char* name);
    ~Vysyx_22040632_top_ysyx_22040632_id2ex();
    VL_UNCOPYABLE(Vysyx_22040632_top_ysyx_22040632_id2ex);

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040632_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
