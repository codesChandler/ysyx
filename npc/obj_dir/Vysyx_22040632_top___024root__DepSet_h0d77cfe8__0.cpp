// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top___024root.h"

void Vysyx_22040632_top___024unit____Vdpiimwrap_myexit_TOP____024unit();

VL_INLINE_OPT void Vysyx_22040632_top___024root___combo__TOP__5(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___combo__TOP__5\n"); );
    // Body
    VL_WRITEF("inst:%bbefore\n",32,vlSelf->inst);
    if (VL_UNLIKELY((0x13U == (0x707fU & vlSelf->inst)))) {
        VL_WRITEF("inst:%bright\n",32,vlSelf->inst);
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__fun = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__type_t = 0U;
    } else if ((0x100073U == vlSelf->inst)) {
        Vysyx_22040632_top___024unit____Vdpiimwrap_myexit_TOP____024unit();
        VL_WRITEF("ebreak\n");
    } else {
        VL_WRITEF("instruction:%b not implemented\n",
                  32,vlSelf->inst);
    }
    if (VL_UNLIKELY((0U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__type_t)))) {
        vlSelf->ysyx_22040632_top__DOT__src1 = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_inst__DOT__gpr
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->ysyx_22040632_top__DOT__src2 = (((- (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x14U))));
        VL_WRITEF("src1:%20#\nsrc2:%20#\n",64,vlSelf->ysyx_22040632_top__DOT__src1,
                  64,vlSelf->ysyx_22040632_top__DOT__src2);
    }
}
