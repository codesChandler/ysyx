// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top_ysyx_22040632_mulif.h"

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_mulif___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_mulif* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_mulif___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush = VL_RAND_RESET_I(1);
    vlSelf->mul_signed = VL_RAND_RESET_I(2);
    vlSelf->result_lo = VL_RAND_RESET_Q(64);
}
