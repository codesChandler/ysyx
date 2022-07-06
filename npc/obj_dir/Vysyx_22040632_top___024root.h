// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040632_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040632_TOP___024ROOT_H_
#define VERILATED_VYSYX_22040632_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_22040632_top__Syms;
class Vysyx_22040632_top___024unit;

VL_MODULE(Vysyx_22040632_top___024root) {
  public:
    // CELLS
    Vysyx_22040632_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n;
    VL_IN8(rst_n,0,0);
    CData/*0:0*/ ysyx_22040632_top__DOT__pcchg;
    CData/*0:0*/ ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__rrst_n;
    CData/*0:0*/ ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg;
    CData/*5:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun;
    CData/*3:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t;
    CData/*0:0*/ __VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n;
    CData/*0:0*/ __Vchglast__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n;
    VL_OUT(inst,31,0);
    IData/*31:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk1__DOT__i;
    VL_OUT64(pc,63,0);
    QData/*63:0*/ ysyx_22040632_top__DOT__src1;
    QData/*63:0*/ ysyx_22040632_top__DOT__src2;
    QData/*63:0*/ ysyx_22040632_top__DOT__dest;
    QData/*63:0*/ ysyx_22040632_top__DOT__data;
    QData/*63:0*/ ysyx_22040632_top__DOT__pc_op;
    QData/*63:0*/ ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op;
    QData/*63:0*/ ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op;
    QData/*63:0*/ ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op;
    QData/*63:0*/ ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr;
    QData/*63:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__pci;
    QData/*63:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__inst_t;
    QData/*63:0*/ __Vtask_paddr_read__0__rdata;
    QData/*63:0*/ __Vtask_paddr_read__1__rdata;
    QData/*63:0*/ __Vtask_paddr_read__2__rdata;
    QData/*63:0*/ __Vtask_paddr_read__3__rdata;
    QData/*63:0*/ __Vtask_paddr_read__8__rdata;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22040632_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vysyx_22040632_top___024root(const char* name);
    ~Vysyx_22040632_top___024root();
    VL_UNCOPYABLE(Vysyx_22040632_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040632_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
