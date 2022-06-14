// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top___024root.h"

VL_ATTR_COLD void Vysyx_22040632_top___024root___initial__TOP__1(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__pci = 0x80000000ULL;
}

VL_ATTR_COLD void Vysyx_22040632_top___024root___eval_initial(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___eval_initial\n"); );
    // Body
    Vysyx_22040632_top___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__rrst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__rrst_n;
}

VL_ATTR_COLD void Vysyx_22040632_top___024root___settle__TOP__4(Vysyx_22040632_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_22040632_top___024root___eval_settle(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040632_top___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vysyx_22040632_top___024root___final(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___final\n"); );
}

VL_ATTR_COLD void Vysyx_22040632_top___024root___ctor_var_reset(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__pci = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__rrst_n = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__fun = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__type_t = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_inst__DOT__data_op = VL_RAND_RESET_Q(64);
    vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__rrst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_inst__DOT__rrst_n = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
