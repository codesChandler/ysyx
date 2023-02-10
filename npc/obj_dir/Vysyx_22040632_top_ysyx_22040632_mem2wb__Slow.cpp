// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "Vysyx_22040632_top_ysyx_22040632_mem2wb.h"
#include "Vysyx_22040632_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22040632_top_ysyx_22040632_mem2wb___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_mem2wb* vlSelf);

Vysyx_22040632_top_ysyx_22040632_mem2wb::Vysyx_22040632_top_ysyx_22040632_mem2wb(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040632_top_ysyx_22040632_mem2wb___ctor_var_reset(this);
}

void Vysyx_22040632_top_ysyx_22040632_mem2wb::__Vconfigure(Vysyx_22040632_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040632_top_ysyx_22040632_mem2wb::~Vysyx_22040632_top_ysyx_22040632_mem2wb() {
}

void Vysyx_22040632_top_ysyx_22040632_mem2wb___ctor_var_reset(Vysyx_22040632_top_ysyx_22040632_mem2wb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_mem2wb___ctor_var_reset\n"); );
    // Body
    vlSelf->rd2wb = VL_RAND_RESET_I(5);
    vlSelf->data2wb = VL_RAND_RESET_Q(64);
    vlSelf->data_ld2wb = VL_RAND_RESET_Q(64);
    vlSelf->ld_en2wb = VL_RAND_RESET_I(1);
    vlSelf->rd_w_ena2wb = VL_RAND_RESET_I(1);
    vlSelf->pc2wb = VL_RAND_RESET_I(32);
    vlSelf->inst2wb = VL_RAND_RESET_I(32);
    vlSelf->uart_en2wb = VL_RAND_RESET_I(1);
    vlSelf->quit2wb = VL_RAND_RESET_I(1);
    vlSelf->fence_ien2wb = VL_RAND_RESET_I(1);
    vlSelf->wen_csr2wb = VL_RAND_RESET_I(1);
    vlSelf->wen_ecall2wb = VL_RAND_RESET_I(1);
    vlSelf->NO2wb = VL_RAND_RESET_Q(64);
    vlSelf->csr_data_write2wb = VL_RAND_RESET_Q(64);
    vlSelf->csr_addr_write2wb = VL_RAND_RESET_I(32);
    vlSelf->wen_mstatus_ecall2wb = VL_RAND_RESET_I(1);
    vlSelf->wen_mstatus_mret2wb = VL_RAND_RESET_I(1);
    vlSelf->not_submit2wb = VL_RAND_RESET_I(1);
    vlSelf->skip_clint2wb = VL_RAND_RESET_I(1);
}
