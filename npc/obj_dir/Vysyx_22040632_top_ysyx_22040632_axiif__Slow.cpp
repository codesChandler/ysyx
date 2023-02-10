// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "Vysyx_22040632_top_ysyx_22040632_axiif.h"
#include "Vysyx_22040632_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040632_top_ysyx_22040632_axiif___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_axiif* vlSelf);

Vysyx_22040632_top_ysyx_22040632_axiif::Vysyx_22040632_top_ysyx_22040632_axiif(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040632_top_ysyx_22040632_axiif___ctor_var_reset(this);
}

void Vysyx_22040632_top_ysyx_22040632_axiif::__Vconfigure(Vysyx_22040632_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040632_top_ysyx_22040632_axiif::~Vysyx_22040632_top_ysyx_22040632_axiif() {
}

void Vysyx_22040632_top_ysyx_22040632_axiif___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_axiif* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_axiif___ctor_var_reset\n"); );
    // Body
    vlSelf->axi_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->axi_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->axi_w_ready = VL_RAND_RESET_I(1);
    vlSelf->axi_b_valid = VL_RAND_RESET_I(1);
    vlSelf->axi_b_resp = VL_RAND_RESET_I(2);
    vlSelf->axi_b_id = VL_RAND_RESET_I(4);
    vlSelf->axi_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->axi_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->axi_r_valid = VL_RAND_RESET_I(1);
    vlSelf->axi_r_resp = VL_RAND_RESET_I(2);
    vlSelf->axi_r_data = VL_RAND_RESET_Q(64);
    vlSelf->axi_r_last = VL_RAND_RESET_I(1);
    vlSelf->axi_r_id = VL_RAND_RESET_I(4);
}
