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

VL_INLINE_OPT void Vysyx_22040632_top___024root___sequent__TOP__7(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n 
        = vlSelf->rst_n;
}

void Vysyx_22040632_top___024root___sequent__TOP__2(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___sequent__TOP__3(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___sequent__TOP__6(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___multiclk__TOP__8(Vysyx_22040632_top___024root* vlSelf);

void Vysyx_22040632_top___024root___eval(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040632_top___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n)))) {
        Vysyx_22040632_top___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vysyx_22040632_top___024root___sequent__TOP__3(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n)))) {
        Vysyx_22040632_top___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040632_top___024root___sequent__TOP__7(vlSelf);
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n)))) {
        Vysyx_22040632_top___024root___multiclk__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
    vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n;
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
    __req |= ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n))) VL_DBG_MSGF("        CHANGE: /home/chandler/ysyx-workbench/npc/hw/alu_ext/ysyx_22040632_DIV.sv:9: ysyx_22040632_top.ysyx_22040632_DIV_i.rrst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n;
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
