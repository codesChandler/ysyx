// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top_ysyx_22040632_if2id.h"

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
