// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top_ysyx_22040632_ex2mem.h"

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_ex2mem___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_ex2mem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_ex2mem___ctor_var_reset\n"); );
    // Body
    vlSelf->data2mem = VL_RAND_RESET_Q(64);
    vlSelf->ld_en2mem = VL_RAND_RESET_I(1);
    vlSelf->ld_ty = VL_RAND_RESET_I(3);
    vlSelf->sd_en2mem = VL_RAND_RESET_I(1);
    vlSelf->sd_ty = VL_RAND_RESET_I(2);
    vlSelf->rd_w_ena = VL_RAND_RESET_I(1);
    vlSelf->rd2mem = VL_RAND_RESET_I(5);
    vlSelf->data_ext2mem = VL_RAND_RESET_Q(64);
    vlSelf->pc2mem = VL_RAND_RESET_I(32);
    vlSelf->inst2mem = VL_RAND_RESET_I(32);
    vlSelf->uart_en2mem = VL_RAND_RESET_I(1);
    vlSelf->wen_csr2mem = VL_RAND_RESET_I(1);
    vlSelf->wen_ecall2mem = VL_RAND_RESET_I(1);
    vlSelf->NO2mem = VL_RAND_RESET_Q(64);
    vlSelf->csr_data_write2mem = VL_RAND_RESET_Q(64);
    vlSelf->csr_addr_write2mem = VL_RAND_RESET_I(32);
    vlSelf->wen_mstatus_ecall2mem = VL_RAND_RESET_I(1);
    vlSelf->wen_mstatus_mret2mem = VL_RAND_RESET_I(1);
    vlSelf->not_submit2mem = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pc2mem = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__rd_w_ena = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__data_ext2mem = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__rd2mem = VL_RAND_RESET_I(5);
}
