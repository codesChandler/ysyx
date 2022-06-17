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
    CData/*0:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__rrst_n;
    VL_IN8(rst_n,0,0);
    CData/*0:0*/ ysyx_22040632_top__DOT__pcchg;
    CData/*3:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__fun;
    CData/*3:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__type_t;
    CData/*0:0*/ ysyx_22040632_top__DOT__ysyx_22040632_EXU_inst__DOT__rrst_n;
    CData/*0:0*/ ysyx_22040632_top__DOT__ysyx_22040632_EXU_inst__DOT__gprchg;
    CData/*0:0*/ __VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__rrst_n;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__rrst_n;
    CData/*0:0*/ __Vchglast__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__rrst_n;
    VL_IN(inst,31,0);
    IData/*31:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__unnamedblk1__DOT__i;
    VL_OUT64(pc,63,0);
    QData/*63:0*/ ysyx_22040632_top__DOT__src1;
    QData/*63:0*/ ysyx_22040632_top__DOT__src2;
    QData/*63:0*/ ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__pci;
    QData/*63:0*/ ysyx_22040632_top__DOT__ysyx_22040632_EXU_inst__DOT__src1_op;
    QData/*63:0*/ ysyx_22040632_top__DOT__ysyx_22040632_EXU_inst__DOT__src2_op;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
