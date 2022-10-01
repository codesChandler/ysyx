// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top_ysyx_22040632_id2ex.h"

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_id2ex___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_id2ex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_id2ex___ctor_var_reset\n"); );
    // Body
    vlSelf->src1 = VL_RAND_RESET_Q(64);
    vlSelf->src2 = VL_RAND_RESET_Q(64);
    vlSelf->operation = VL_RAND_RESET_I(7);
    vlSelf->pc2ex = VL_RAND_RESET_I(32);
    vlSelf->inst2ex = VL_RAND_RESET_I(32);
    vlSelf->data_ext = VL_RAND_RESET_Q(64);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->rs1_2ex = VL_RAND_RESET_I(5);
    vlSelf->rs2_2ex = VL_RAND_RESET_I(5);
    vlSelf->src_from_gpr2ex = VL_RAND_RESET_I(3);
    vlSelf->uart_en2ex = VL_RAND_RESET_I(1);
    vlSelf->quit2ex = VL_RAND_RESET_I(1);
    vlSelf->pc_mret_ecall2ex = VL_RAND_RESET_I(32);
    vlSelf->csr_addr_write2ex = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__pc2ex = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__rd = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__rs1_2ex = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__operation = VL_RAND_RESET_I(7);
}
