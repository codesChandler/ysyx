// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040632_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040632_TOP_YSYX_22040632_MEM2WB_H_
#define VERILATED_VYSYX_22040632_TOP_YSYX_22040632_MEM2WB_H_  // guard

#include "verilated.h"

class Vysyx_22040632_top__Syms;
VL_MODULE(Vysyx_22040632_top_ysyx_22040632_mem2wb) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ rd2wb;
    CData/*0:0*/ ld_en2wb;
    CData/*0:0*/ rd_w_ena2wb;
    CData/*0:0*/ uart_en2wb;
    CData/*0:0*/ quit2wb;
    CData/*0:0*/ wen_csr2wb;
    CData/*0:0*/ wen_ecall2wb;
    CData/*0:0*/ wen_mstatus_ecall2wb;
    CData/*0:0*/ wen_mstatus_mret2wb;
    CData/*0:0*/ not_submit2wb;
    CData/*0:0*/ skip_clint2wb;
    IData/*31:0*/ pc2wb;
    IData/*31:0*/ inst2wb;
    IData/*31:0*/ csr_addr_write2wb;
    QData/*63:0*/ data2wb;
    QData/*63:0*/ data_ld2wb;
    QData/*63:0*/ NO2wb;
    QData/*63:0*/ csr_data_write2wb;

    // INTERNAL VARIABLES
    Vysyx_22040632_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vysyx_22040632_top_ysyx_22040632_mem2wb(const char* name);
    ~Vysyx_22040632_top_ysyx_22040632_mem2wb();
    VL_UNCOPYABLE(Vysyx_22040632_top_ysyx_22040632_mem2wb);

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040632_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
