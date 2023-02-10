// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "Vysyx_22040632_top_ysyx_22040632_divif.h"
#include "Vysyx_22040632_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040632_top_ysyx_22040632_divif___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_divif* vlSelf);

Vysyx_22040632_top_ysyx_22040632_divif::Vysyx_22040632_top_ysyx_22040632_divif(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040632_top_ysyx_22040632_divif___ctor_var_reset(this);
}

void Vysyx_22040632_top_ysyx_22040632_divif::__Vconfigure(Vysyx_22040632_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040632_top_ysyx_22040632_divif::~Vysyx_22040632_top_ysyx_22040632_divif() {
}

void Vysyx_22040632_top_ysyx_22040632_divif___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_divif* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_divif___ctor_var_reset\n"); );
    // Body
    vlSelf->div_valid = VL_RAND_RESET_I(1);
    vlSelf->divw = VL_RAND_RESET_I(1);
    vlSelf->div_signed = VL_RAND_RESET_I(1);
    vlSelf->quotient = VL_RAND_RESET_Q(64);
    vlSelf->remainder = VL_RAND_RESET_Q(64);
}
