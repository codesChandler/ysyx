// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"

#include "Vysyx_22040632_top_ysyx_22040632_axiif.h"

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_axiif___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_axiif* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_axiif___ctor_var_reset\n"); );
    // Body
    vlSelf->axi_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->axi_ar_valid = VL_RAND_RESET_I(1);
}
