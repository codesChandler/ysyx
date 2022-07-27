// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top___024root.h"

VL_ATTR_COLD void Vysyx_22040632_top___024root___initial__TOP__4(Vysyx_22040632_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_22040632_top___024root___eval_initial(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__rrst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__rrst_n;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
    Vysyx_22040632_top___024root___initial__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vysyx_22040632_top___024root___settle__TOP__5(Vysyx_22040632_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_22040632_top___024root___eval_settle(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040632_top___024root___settle__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
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
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040632_top__DOT__pcchg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__dest = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__pc_op = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__op_div = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__rrst_n = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__div_valid_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__signed_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__divw_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__div_doing = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_rmd = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__idle_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len = VL_RAND_RESET_I(7);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__cs = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ns = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__pci = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__inst_t = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = VL_RAND_RESET_I(6);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtask_paddr_read__2__rdata = 0;
    vlSelf->__Vtask_paddr_read__3__rdata = 0;
    vlSelf->__Vtask_paddr_read__4__rdata = 0;
    vlSelf->__Vtask_paddr_read__5__rdata = 0;
    vlSelf->__Vtask_paddr_read__10__rdata = 0;
    vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__rrst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__rrst_n = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
