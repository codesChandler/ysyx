// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "Vysyx_22040632_top_ysyx_22040632_if2id.h"
#include "Vysyx_22040632_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040632_top_ysyx_22040632_if2id___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_if2id* vlSelf);

Vysyx_22040632_top_ysyx_22040632_if2id::Vysyx_22040632_top_ysyx_22040632_if2id(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040632_top_ysyx_22040632_if2id___ctor_var_reset(this);
}

void Vysyx_22040632_top_ysyx_22040632_if2id::__Vconfigure(Vysyx_22040632_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040632_top_ysyx_22040632_if2id::~Vysyx_22040632_top_ysyx_22040632_if2id() {
}

void Vysyx_22040632_top_ysyx_22040632_if2id___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_if2id* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_if2id___ctor_var_reset\n"); );
    // Body
    vlSelf->pc2id = VL_RAND_RESET_I(32);
    vlSelf->inst2id = VL_RAND_RESET_I(32);
    vlSelf->pcen_btb2id = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pc2id = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__inst2id = VL_RAND_RESET_I(32);
}
