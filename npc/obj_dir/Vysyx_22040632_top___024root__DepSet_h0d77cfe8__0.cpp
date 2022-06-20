// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top___024root.h"

void Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit(IData/*31:0*/ code);

VL_INLINE_OPT void Vysyx_22040632_top___024root___combo__TOP__6(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___combo__TOP__6\n"); );
    // Body
    if (VL_LIKELY(((((((((0x13U == (0x707fU & vlSelf->inst)) 
                         | (0x67U == (0x707fU & vlSelf->inst))) 
                        | (0x17U == (0x7fU & vlSelf->inst))) 
                       | (0x37U == (0x7fU & vlSelf->inst))) 
                      | (0x6fU == (0x7fU & vlSelf->inst))) 
                     | (0x3023U == (0x707fU & vlSelf->inst))) 
                    | (0x100073U == vlSelf->inst)) 
                   | (0U == vlSelf->inst)))) {
        if ((0x13U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x67U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 4U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x17U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 1U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 1U;
        } else if ((0x37U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 2U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 1U;
        } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 3U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 2U;
        } else if ((0x3023U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 5U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 3U;
        } else if ((0x100073U == vlSelf->inst)) {
            Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit((IData)(
                                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                                                                                [0xaU]));
        }
    } else {
        VL_WRITEF("instruction:%b not implemented\n",
                  32,vlSelf->inst);
    }
    if ((0U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t))) {
        vlSelf->ysyx_22040632_top__DOT__src1 = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->ysyx_22040632_top__DOT__src2 = (((- (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x14U))));
    } else if ((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t))) {
        vlSelf->ysyx_22040632_top__DOT__src1 = (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->inst 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->inst))));
    } else if ((2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t))) {
        vlSelf->ysyx_22040632_top__DOT__src1 = (((- (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x1fU)))) 
                                                 << 0x15U) 
                                                | (QData)((IData)(
                                                                  ((0x100000U 
                                                                    & (vlSelf->inst 
                                                                       >> 0xbU)) 
                                                                   | ((0xff000U 
                                                                       & vlSelf->inst) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->inst 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->inst 
                                                                               >> 0x14U))))))));
    }
    if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op = 4ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
            = vlSelf->pc;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
        vlSelf->ysyx_22040632_top__DOT__pcchg = 0U;
    } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op = 4ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                = vlSelf->pc;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
            vlSelf->ysyx_22040632_top__DOT__pcchg = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op = 4ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                = vlSelf->pc;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
            vlSelf->ysyx_22040632_top__DOT__pcchg = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op = 4ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                = vlSelf->pc;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            vlSelf->ysyx_22040632_top__DOT__pcchg = 1U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op = 4ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                = vlSelf->pc;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            vlSelf->ysyx_22040632_top__DOT__pcchg = 1U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                = vlSelf->pc;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op = 4ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            vlSelf->ysyx_22040632_top__DOT__pcchg = 0U;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
            = vlSelf->ysyx_22040632_top__DOT__src1;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
            = vlSelf->pc;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
        vlSelf->ysyx_22040632_top__DOT__pcchg = 0U;
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
            = vlSelf->ysyx_22040632_top__DOT__src1;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
            = vlSelf->ysyx_22040632_top__DOT__src2;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
        vlSelf->ysyx_22040632_top__DOT__pcchg = 0U;
    }
}
