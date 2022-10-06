// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top___024root.h"

VL_INLINE_OPT void Vysyx_22040632_top___024root___sequent__TOP__13(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___sequent__TOP__13\n"); );
    // Body
    if (vlSelf->rst_n) {
        vlSelf->ysyx_22040632_top__DOT__rst_s2 = vlSelf->ysyx_22040632_top__DOT__rst_s1;
        vlSelf->ysyx_22040632_top__DOT__rst_s1 = 1U;
    } else {
        vlSelf->ysyx_22040632_top__DOT__rst_s1 = 0U;
        vlSelf->ysyx_22040632_top__DOT__rst_s2 = 0U;
    }
}

QData Vysyx_22040632_top___024root___change_request_1(Vysyx_22040632_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22040632_top___024root___change_request(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22040632_top___024root___change_request_1(vlSelf));
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
    if (VL_UNLIKELY((vlSelf->axi_aw_ready_i & 0xfeU))) {
        Verilated::overWidthError("axi_aw_ready_i");}
    if (VL_UNLIKELY((vlSelf->axi_w_ready_i & 0xfeU))) {
        Verilated::overWidthError("axi_w_ready_i");}
    if (VL_UNLIKELY((vlSelf->axi_b_valid_i & 0xfeU))) {
        Verilated::overWidthError("axi_b_valid_i");}
    if (VL_UNLIKELY((vlSelf->axi_b_resp_i & 0xfcU))) {
        Verilated::overWidthError("axi_b_resp_i");}
    if (VL_UNLIKELY((vlSelf->axi_b_id_i & 0xf0U))) {
        Verilated::overWidthError("axi_b_id_i");}
    if (VL_UNLIKELY((vlSelf->axi_b_user_i & 0xfeU))) {
        Verilated::overWidthError("axi_b_user_i");}
    if (VL_UNLIKELY((vlSelf->axi_ar_ready_i & 0xfeU))) {
        Verilated::overWidthError("axi_ar_ready_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_valid_i & 0xfeU))) {
        Verilated::overWidthError("axi_r_valid_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_resp_i & 0xfcU))) {
        Verilated::overWidthError("axi_r_resp_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_last_i & 0xfeU))) {
        Verilated::overWidthError("axi_r_last_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_id_i & 0xf0U))) {
        Verilated::overWidthError("axi_r_id_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_user_i & 0xfeU))) {
        Verilated::overWidthError("axi_r_user_i");}
}
#endif  // VL_DEBUG
