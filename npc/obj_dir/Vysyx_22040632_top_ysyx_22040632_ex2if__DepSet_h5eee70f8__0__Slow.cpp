// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top_ysyx_22040632_ex2if.h"

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_ex2if___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_ex2if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_ex2if___ctor_var_reset\n"); );
    // Body
    vlSelf->pc2if = VL_RAND_RESET_I(32);
    vlSelf->pc_en2if = VL_RAND_RESET_I(1);
    vlSelf->btb_add2if = VL_RAND_RESET_I(1);
}
