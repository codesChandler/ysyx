// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top___024root.h"

VL_INLINE_OPT void Vysyx_22040632_top___024root___sequent__TOP__1(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__rrst_n 
        = vlSelf->rst_n;
}

VL_INLINE_OPT void Vysyx_22040632_top___024root___sequent__TOP__4(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n 
        = vlSelf->rst_n;
}

void Vysyx_22040632_top___024root___sequent__TOP__2(Vysyx_22040632_top___024root* vlSelf);

void Vysyx_22040632_top___024root___eval(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040632_top___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n)))) {
        Vysyx_22040632_top___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040632_top___024root___sequent__TOP__4(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n;
    vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n;
}

QData Vysyx_22040632_top___024root___change_request_1(Vysyx_22040632_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22040632_top___024root___change_request(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22040632_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22040632_top___024root___change_request_1(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n))) VL_DBG_MSGF("        CHANGE: /home/chandler/ysyx-workbench/npc/hw/ysyx_22040632_IFU.sv:15: ysyx_22040632_top.ysyx_22040632_IFU_i.rrst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__rrst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22040632_top___024root___eval_debug_assertions(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
