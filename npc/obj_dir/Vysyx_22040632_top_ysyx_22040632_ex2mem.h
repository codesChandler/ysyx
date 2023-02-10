// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040632_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040632_TOP_YSYX_22040632_EX2MEM_H_
#define VERILATED_VYSYX_22040632_TOP_YSYX_22040632_EX2MEM_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040632_top__Syms;
class Vysyx_22040632_top_VerilatedFst;


//----------

VL_MODULE(Vysyx_22040632_top_ysyx_22040632_ex2mem) {
  public:

    // LOCAL SIGNALS
    CData/*0:0*/ ld_en2mem;
    CData/*2:0*/ ld_ty;
    CData/*0:0*/ sd_en2mem;
    CData/*1:0*/ sd_ty;
    CData/*0:0*/ rd_w_ena;
    CData/*4:0*/ rd2mem;
    CData/*0:0*/ uart_en2mem;
    CData/*0:0*/ quit2mem;
    CData/*0:0*/ fence_ien2mem;
    CData/*0:0*/ wen_csr2mem;
    CData/*0:0*/ wen_ecall2mem;
    CData/*0:0*/ wen_mstatus_ecall2mem;
    CData/*0:0*/ wen_mstatus_mret2mem;
    CData/*0:0*/ not_submit2mem;
    IData/*31:0*/ pc2mem;
    IData/*31:0*/ inst2mem;
    IData/*31:0*/ csr_addr_write2mem;
    QData/*63:0*/ data2mem;
    QData/*63:0*/ data_ext2mem;
    QData/*63:0*/ NO2mem;
    QData/*63:0*/ csr_data_write2mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__rd_w_ena;
    CData/*4:0*/ __Vdly__rd2mem;
    IData/*31:0*/ __Vdly__pc2mem;
    QData/*63:0*/ __Vdly__data_ext2mem;
    QData/*63:0*/ __Vdly__data2mem;

    // INTERNAL VARIABLES
    Vysyx_22040632_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040632_top_ysyx_22040632_ex2mem);  ///< Copying not allowed
  public:
    Vysyx_22040632_top_ysyx_22040632_ex2mem(const char* name);
    ~Vysyx_22040632_top_ysyx_22040632_ex2mem();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040632_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
