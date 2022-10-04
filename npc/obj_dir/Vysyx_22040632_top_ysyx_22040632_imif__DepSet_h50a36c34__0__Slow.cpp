// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top_ysyx_22040632_imif.h"

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_imif___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_imif* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_imif___ctor_var_reset\n"); );
    // Body
    vlSelf->rw_valid = VL_RAND_RESET_I(1);
    vlSelf->rw_ready = VL_RAND_RESET_I(1);
    vlSelf->rw_req = VL_RAND_RESET_I(1);
    vlSelf->data_read = VL_RAND_RESET_Q(64);
    vlSelf->rw_w_data = VL_RAND_RESET_Q(64);
    vlSelf->rw_addr = VL_RAND_RESET_I(32);
    vlSelf->rw_size = VL_RAND_RESET_I(3);
    vlSelf->rw_len = VL_RAND_RESET_I(8);
    vlSelf->r_hs = VL_RAND_RESET_I(1);
    vlSelf->r_last = VL_RAND_RESET_I(1);
    vlSelf->w_hs = VL_RAND_RESET_I(1);
    vlSelf->w_last = VL_RAND_RESET_I(1);
    vlSelf->w_strb = VL_RAND_RESET_I(8);
    vlSelf->axi_write_ahead = VL_RAND_RESET_I(1);
}
