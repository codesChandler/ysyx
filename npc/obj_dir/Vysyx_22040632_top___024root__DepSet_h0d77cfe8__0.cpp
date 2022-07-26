// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top___024root.h"

void Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit(IData/*31:0*/ code);
extern const VlUnpacked<CData/*0:0*/, 64> Vysyx_22040632_top__ConstPool__TABLE_h8aea5909_0;

VL_INLINE_OPT void Vysyx_22040632_top___024root___sequent__TOP__2(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___sequent__TOP__2\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    CData/*6:0*/ __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len;
    VlWide<4>/*127:0*/ __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd;
    QData/*63:0*/ __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs;
    CData/*6:0*/ __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v1;
    CData/*0:0*/ __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v1;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v2;
    CData/*0:0*/ __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v2;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v3;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v4;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v5;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v6;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v7;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v8;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v9;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v10;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v11;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v12;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v13;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v14;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v15;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v16;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v17;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v18;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v19;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v20;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v21;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v22;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v23;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v24;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v25;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v26;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v27;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v28;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v29;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v30;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v31;
    QData/*63:0*/ __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v32;
    CData/*0:0*/ __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v33;
    // Body
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt;
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs;
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len;
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U] 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U];
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U] 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U];
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U] 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U];
    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[3U] 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[3U];
    __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v0 = 0U;
    __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v1 = 0U;
    __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v2 = 0U;
    __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v33 = 0U;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n)) 
                 | ((0U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ns)) 
                    | (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ns)))));
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__valid_out 
            = (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ns));
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__cs 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ns;
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__valid_out = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__cs = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n)) 
               | (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_flag))))) {
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt = 0U;
    } else if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_flag) {
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)));
    }
    if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n) {
        if (vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid) {
            if (vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw) {
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs 
                    = ((0xffffffff00000000ULL & __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs) 
                       | (IData)((IData)(((1U & ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed)) 
                                                 | (~ (IData)(
                                                              (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                                                               >> 0x1fU)))))
                                           ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                                           : ((IData)(1U) 
                                              + (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)))))));
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_rmd 
                    = (1U & (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                     >> 0x1fU)));
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len = 0x20U;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt 
                    = (1U & (~ ((IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                         >> 0x1fU)) 
                                ^ (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                                           >> 0x1fU)))));
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U] 
                    = ((1U & ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed)) 
                              | (~ (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                            >> 0x1fU)))))
                        ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op)
                        : ((IData)(1U) + (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op))));
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw)))) {
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs 
                        = ((1U & ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed)) 
                                  | (~ (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                                                >> 0x3fU)))))
                            ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op
                            : (1ULL + (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)));
                }
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_rmd 
                    = (1U & (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                     >> 0x3fU)));
                if ((1U & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw)))) {
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len = 0x40U;
                }
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt 
                    = (1U & (~ ((IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                         >> 0x3fU)) 
                                ^ (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                                           >> 0x3fU)))));
                if ((1U & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw)))) {
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U] 
                        = (IData)(((1U & ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed)) 
                                          | (~ (IData)(
                                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                                        >> 0x3fU)))))
                                    ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op
                                    : (1ULL + (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op))));
                    __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U] 
                        = (IData)((((1U & ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed)) 
                                           | (~ (IData)(
                                                        (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                                         >> 0x3fU)))))
                                     ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op
                                     : (1ULL + (~ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op))) 
                                   >> 0x20U));
                }
            }
        } else {
            __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_rmd 
                = (1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_rmd));
            __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt 
                = (1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt));
            if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_flag) {
                if ((0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len))) {
                    if ((1U & (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__result 
                                       >> 0x3fU)))) {
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[(3U 
                                                                                & (((IData)(0x7fU) 
                                                                                - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                                                >> 5U))] 
                            = ((~ ((IData)(1U) << (0x1fU 
                                                   & ((IData)(0x7fU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt))))) 
                               & __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                               (3U & (((IData)(0x7fU) 
                                       - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                      >> 5U))]);
                        VL_ASSIGNSEL_WIIQ(128,64,(0x7fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU))), __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd, 
                                          (((QData)((IData)(
                                                            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                                                            (((IData)(0x3fU) 
                                                              + 
                                                              (0x7fU 
                                                               & (((IData)(0x7eU) 
                                                                   - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                                  - (IData)(0x3fU)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU)))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & (((IData)(0x7eU) 
                                                     - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                    - (IData)(0x3fU))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & (((IData)(0x7eU) 
                                                                          - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                                         - (IData)(0x3fU)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(0x7eU) 
                                                         - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                        - (IData)(0x3fU)))))) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                                                                 (3U 
                                                                  & ((((IData)(0x7eU) 
                                                                       - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                                      - (IData)(0x3fU)) 
                                                                     >> 5U))])) 
                                                 >> 
                                                 (0x1fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU)))))));
                    } else {
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[(3U 
                                                                                & (((IData)(0x7fU) 
                                                                                - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                                                >> 5U))] 
                            = (__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                               (3U & (((IData)(0x7fU) 
                                       - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                      >> 5U))] | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x7fU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)))));
                        VL_ASSIGNSEL_WIIQ(128,64,(0x7fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU))), __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__result);
                    }
                } else if ((0x20U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len))) {
                    if ((1U & (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__result 
                                       >> 0x1fU)))) {
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[(3U 
                                                                                & (((IData)(0x3fU) 
                                                                                - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                                                >> 5U))] 
                            = ((~ ((IData)(1U) << (0x1fU 
                                                   & ((IData)(0x3fU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt))))) 
                               & __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                               (3U & (((IData)(0x3fU) 
                                       - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                      >> 5U))]);
                        VL_ASSIGNSEL_WIII(128,32,(0x7fU 
                                                  & (((IData)(0x3eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x1fU))), __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd, 
                                          (((0U == 
                                             (0x1fU 
                                              & (((IData)(0x3eU) 
                                                  - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                 - (IData)(0x1fU))))
                                             ? 0U : 
                                            (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                                             (((IData)(0x1fU) 
                                               + (0x7fU 
                                                  & (((IData)(0x3eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x1fU)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(0x3eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x1fU)))))) 
                                           | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                                              (3U & 
                                               ((((IData)(0x3eU) 
                                                  - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                 - (IData)(0x1fU)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & (((IData)(0x3eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x1fU))))));
                    } else {
                        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[(3U 
                                                                                & (((IData)(0x3fU) 
                                                                                - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                                                >> 5U))] 
                            = (__Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                               (3U & (((IData)(0x3fU) 
                                       - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                      >> 5U))] | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & ((IData)(0x3fU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)))));
                        VL_ASSIGNSEL_WIII(128,32,(0x7fU 
                                                  & (((IData)(0x3eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x1fU))), __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd, (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__result));
                    }
                }
            } else {
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U] 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U];
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U] 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U];
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U] 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U];
                __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[3U] 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[3U];
            }
        }
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__pci 
            = ((IData)(vlSelf->ysyx_22040632_top__DOT__pcchg)
                ? vlSelf->ysyx_22040632_top__DOT__pc_op
                : (4ULL + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__pci));
        if (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg) {
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v0 
                = ((0U != (0x1fU & (vlSelf->inst >> 7U)))
                    ? vlSelf->ysyx_22040632_top__DOT__data
                    : 0ULL);
            __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v0 = 1U;
            __Vdlyvdim0__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v0 
                = (0x1fU & (vlSelf->inst >> 7U));
        } else {
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v1 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0U];
            __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v1 = 1U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk2__DOT__i = 0x20U;
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v2 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [1U];
            __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v2 = 1U;
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v3 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [2U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v4 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [3U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v5 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [4U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v6 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [5U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v7 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [6U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v8 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [7U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v9 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [8U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v10 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [9U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v11 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0xaU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v12 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0xbU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v13 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0xcU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v14 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0xdU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v15 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0xeU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v16 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0xfU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v17 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x10U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v18 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x11U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v19 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x12U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v20 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x13U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v21 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x14U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v22 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x15U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v23 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x16U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v24 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x17U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v25 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x18U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v26 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x19U];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v27 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x1aU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v28 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x1bU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v29 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x1cU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v30 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x1dU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v31 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x1eU];
            __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v32 
                = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [0x1fU];
        }
    } else {
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_rmd = 0U;
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len = 0x40U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt = 0U;
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U] = 0U;
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U] = 0U;
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U] = 0U;
        __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[3U] = 0U;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__pci = 0x80000000ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v33 = 1U;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt;
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U] 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U] 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U] 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[3U] 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[3U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len 
        = __Vdly__ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len;
    if (__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v0) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[__Vdlyvdim0__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v0] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v0;
    }
    if (__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v1) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v1;
    }
    if (__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v2) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[1U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v2;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[2U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v3;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[3U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v4;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[4U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v5;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[5U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v6;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[6U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v7;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[7U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v8;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[8U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v9;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[9U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v10;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0xaU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v11;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0xbU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v12;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0xcU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v13;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0xdU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v14;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0xeU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v15;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0xfU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v16;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x10U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v17;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x11U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v18;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x12U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v19;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x13U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v20;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x14U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v21;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x15U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v22;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x16U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v23;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x17U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v24;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x18U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v25;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x19U] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v26;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x1aU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v27;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x1bU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v28;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x1cU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v29;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x1dU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v30;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x1eU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v31;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x1fU] 
            = __Vdlyvval__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v32;
    }
    if (__Vdlyvset__ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr__v33) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[1U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[2U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[3U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[4U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[5U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[6U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[7U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[8U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[9U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0xaU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0xbU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0xcU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0xdU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0xeU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0xfU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x10U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x11U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x12U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x13U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x14U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x15U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x16U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x17U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x18U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x19U] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x1aU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x1bU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x1cU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x1dU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x1eU] = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr[0x1fU] = 0ULL;
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_flag 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n) 
           & (1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ns)));
    vlSelf->pc = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__pci;
    Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_paddr_read__8__rdata);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__inst_t 
        = vlSelf->__Vtask_paddr_read__8__rdata;
    vlSelf->inst = ((4ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__pci))
                     ? (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__inst_t 
                                >> 0x20U)) : (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IFU_i__DOT__inst_t));
    if (((((((((0x13U == (0x707fU & vlSelf->inst)) 
               | (0x67U == (0x707fU & vlSelf->inst))) 
              | (0x2003U == (0x707fU & vlSelf->inst))) 
             | (0x1003U == (0x707fU & vlSelf->inst))) 
            | (0x5003U == (0x707fU & vlSelf->inst))) 
           | (0x3003U == (0x707fU & vlSelf->inst))) 
          | (0x4003U == (0x707fU & vlSelf->inst))) 
         | (0x3013U == (0x707fU & vlSelf->inst)))) {
        if ((0x13U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 1U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x67U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 6U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x2003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 3U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x1003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x26U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x5003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x27U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x3003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0xcU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x4003U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x10U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        }
    } else if (((((((((0x1bU == (0x707fU & vlSelf->inst)) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->inst))) 
                     | (0x7013U == (0x707fU & vlSelf->inst))) 
                    | (0x4013U == (0x707fU & vlSelf->inst))) 
                   | (0x1013U == (0xfc00707fU & vlSelf->inst))) 
                  | (0x101bU == (0xfe00707fU & vlSelf->inst))) 
                 | (0x5013U == (0xfc00707fU & vlSelf->inst))) 
                | (0x4000501bU == (0xfe00707fU & vlSelf->inst)))) {
        if ((0x1bU == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0xeU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x40005013U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0xfU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x7013U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x11U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x4013U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x16U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x1013U == (0xfc00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x18U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x101bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x29U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x5013U == (0xfc00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x19U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x2aU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        }
    } else if (((((((((0x501bU == (0xfe00707fU & vlSelf->inst)) 
                      | (0x17U == (0x7fU & vlSelf->inst))) 
                     | (0x37U == (0x7fU & vlSelf->inst))) 
                    | (0x6fU == (0x7fU & vlSelf->inst))) 
                   | (0x3023U == (0x707fU & vlSelf->inst))) 
                  | (0x23U == (0x707fU & vlSelf->inst))) 
                 | (0x2023U == (0x707fU & vlSelf->inst))) 
                | (0x1023U == (0x707fU & vlSelf->inst)))) {
        if ((0x501bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x2cU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 0U;
        } else if ((0x17U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 2U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 1U;
        } else if ((0x37U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 4U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 1U;
        } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 5U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 2U;
        } else if ((0x3023U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 7U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 3U;
        } else if ((0x23U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x13U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 3U;
        } else if ((0x2023U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x1bU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 3U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x28U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 3U;
        }
    } else if (((((((((0x3bU == (0xfe00707fU & vlSelf->inst)) 
                      | (0x4000003bU == (0xfe00707fU 
                                         & vlSelf->inst))) 
                     | (0x40000033U == (0xfe00707fU 
                                        & vlSelf->inst))) 
                    | (0x33U == (0xfe00707fU & vlSelf->inst))) 
                   | (0x6033U == (0xfe00707fU & vlSelf->inst))) 
                  | (0x3033U == (0xfe00707fU & vlSelf->inst))) 
                 | (0x2033U == (0xfe00707fU & vlSelf->inst))) 
                | (0x7033U == (0xfe00707fU & vlSelf->inst)))) {
        if ((0x3bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 8U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x4000003bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x20U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x40000033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0xbU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x33U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0xdU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x6033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x17U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x3033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x15U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x2033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x25U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x12U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        }
    } else if (((((((((0x103bU == (0xfe00707fU & vlSelf->inst)) 
                      | (0x200003bU == (0xfe00707fU 
                                        & vlSelf->inst))) 
                     | (0x200403bU == (0xfe00707fU 
                                       & vlSelf->inst))) 
                    | (0x200503bU == (0xfe00707fU & vlSelf->inst))) 
                   | (0x200603bU == (0xfe00707fU & vlSelf->inst))) 
                  | (0x200703bU == (0xfe00707fU & vlSelf->inst))) 
                 | (0x2000033U == (0xfe00707fU & vlSelf->inst))) 
                | (0x4000503bU == (0xfe00707fU & vlSelf->inst)))) {
        if ((0x103bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x14U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x200003bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x1cU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x200403bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x1dU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x200503bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x23U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x200603bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x1eU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x200703bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x22U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x2000033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x2bU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x2dU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        }
    } else if (((((((((0x503bU == (0xfe00707fU & vlSelf->inst)) 
                      | (0x63U == (0x707fU & vlSelf->inst))) 
                     | (0x1063U == (0x707fU & vlSelf->inst))) 
                    | (0x5063U == (0x707fU & vlSelf->inst))) 
                   | (0x7063U == (0x707fU & vlSelf->inst))) 
                  | (0x4063U == (0x707fU & vlSelf->inst))) 
                 | (0x6063U == (0x707fU & vlSelf->inst))) 
                | (0x100073U == vlSelf->inst))) {
        if ((0x503bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x2eU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 4U;
        } else if ((0x63U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 9U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 5U;
        } else if ((0x1063U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0xaU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 5U;
        } else if ((0x5063U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x1aU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 5U;
        } else if ((0x7063U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x21U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 5U;
        } else if ((0x4063U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x24U;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 5U;
        } else if ((0x6063U == (0x707fU & vlSelf->inst))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun = 0x1fU;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t = 5U;
        } else {
            Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit((IData)(
                                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                                                                                [0xaU]));
        }
    } else if (VL_UNLIKELY((0U != vlSelf->inst))) {
        VL_WRITEF("@pc:%x instruction:%x not implemented\n",
                  64,vlSelf->pc,32,vlSelf->inst);
        Vysyx_22040632_top___024unit____Vdpiimwrap_npcexit_TOP____024unit(1U);
    }
    __Vtableidx2 = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun;
    vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw 
        = Vysyx_22040632_top__ConstPool__TABLE_h8aea5909_0
        [__Vtableidx2];
    vlSelf->ysyx_22040632_top__DOT__dest = ((3U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t))
                                             ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                                            [(0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0x14U))]
                                             : ((5U 
                                                 == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   ((0x800U 
                                                                     & (vlSelf->inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->inst 
                                                                             >> 7U)))))))
                                                 : 0ULL));
    if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t))) {
        vlSelf->ysyx_22040632_top__DOT__src1 = 0ULL;
        vlSelf->ysyx_22040632_top__DOT__src2 = 0ULL;
    } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t))) {
        if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t))) {
            vlSelf->ysyx_22040632_top__DOT__src1 = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__src2 = 0ULL;
        } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t))) {
            vlSelf->ysyx_22040632_top__DOT__src1 = 
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [(0x1fU & (vlSelf->inst >> 0xfU))];
            vlSelf->ysyx_22040632_top__DOT__src2 = 
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [(0x1fU & (vlSelf->inst >> 0x14U))];
        } else {
            vlSelf->ysyx_22040632_top__DOT__src1 = 
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [(0x1fU & (vlSelf->inst >> 0xfU))];
            vlSelf->ysyx_22040632_top__DOT__src2 = 
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [(0x1fU & (vlSelf->inst >> 0x14U))];
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t))) {
        if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t))) {
            vlSelf->ysyx_22040632_top__DOT__src1 = 
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
                [(0x1fU & (vlSelf->inst >> 0xfU))];
            vlSelf->ysyx_22040632_top__DOT__src2 = 
                (((- (QData)((IData)((vlSelf->inst 
                                      >> 0x1fU)))) 
                  << 0xcU) | (QData)((IData)(((0xfe0U 
                                               & (vlSelf->inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 7U))))));
        } else {
            vlSelf->ysyx_22040632_top__DOT__src1 = 
                (((- (QData)((IData)((vlSelf->inst 
                                      >> 0x1fU)))) 
                  << 0x15U) | (QData)((IData)(((0x100000U 
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
            vlSelf->ysyx_22040632_top__DOT__src2 = 0ULL;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__type_t))) {
        vlSelf->ysyx_22040632_top__DOT__src1 = (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->inst 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->inst))));
        vlSelf->ysyx_22040632_top__DOT__src2 = 0ULL;
    } else {
        vlSelf->ysyx_22040632_top__DOT__src1 = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__gpr
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->ysyx_22040632_top__DOT__src2 = (((- (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->inst 
                                                                   >> 0x14U))));
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw)) 
               | (0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__result 
            = ((((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                                 (((IData)(0x3fU) + 
                                   (0x7fU & (((IData)(0x7eU) 
                                              - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                             - (IData)(0x3fU)))) 
                                  >> 5U)])) << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU)))))) 
                | (((0U == (0x1fU & (((IData)(0x7eU) 
                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                     - (IData)(0x3fU))))
                     ? 0ULL : ((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                                               (((IData)(0x1fU) 
                                                 + 
                                                 (0x7fU 
                                                  & (((IData)(0x7eU) 
                                                      - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                     - (IData)(0x3fU)))) 
                                                >> 5U)])) 
                               << ((IData)(0x20U) - 
                                   (0x1fU & (((IData)(0x7eU) 
                                              - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                             - (IData)(0x3fU)))))) 
                   | ((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                                      (3U & ((((IData)(0x7eU) 
                                               - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                              - (IData)(0x3fU)) 
                                             >> 5U))])) 
                      >> (0x1fU & (((IData)(0x7eU) 
                                    - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                   - (IData)(0x3fU)))))) 
               - vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs);
    } else if ((1U & (~ ((~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw)) 
                         | (0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len)))))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__result 
            = (QData)((IData)(((((0U == (0x1fU & (((IData)(0x3eU) 
                                                   - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                  - (IData)(0x1fU))))
                                  ? 0U : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                                          (((IData)(0x1fU) 
                                            + (0x7fU 
                                               & (((IData)(0x3eU) 
                                                   - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                  - (IData)(0x1fU)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & (((IData)(0x3eU) 
                                                     - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                    - (IData)(0x1fU)))))) 
                                | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[
                                   (3U & ((((IData)(0x3eU) 
                                            - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                           - (IData)(0x1fU)) 
                                          >> 5U))] 
                                   >> (0x1fU & (((IData)(0x3eU) 
                                                 - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt)) 
                                                - (IData)(0x1fU))))) 
                               - (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__dvs))));
    }
    if ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        vlSelf->ysyx_22040632_top__DOT__pcchg = (1U 
                                                 & (IData)(
                                                           ((0U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) 
                                                            & ((4U 
                                                                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                                ? (IData)(
                                                                          ((0U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) 
                                                                           & VL_LTS_IQQ(64, vlSelf->ysyx_22040632_top__DOT__src1, vlSelf->ysyx_22040632_top__DOT__src2)))
                                                                : (IData)(
                                                                          ((1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__src1 
                                                                              >= vlSelf->ysyx_22040632_top__DOT__src2)))))));
        if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op = 4ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op = 0x64ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
        } else if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op = 4ULL;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op = 0x64ULL;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                    } else {
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                            = vlSelf->ysyx_22040632_top__DOT__src1;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                            = vlSelf->ysyx_22040632_top__DOT__src2;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
            }
        } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            } else {
                vlSelf->ysyx_22040632_top__DOT__pc_op 
                    = (vlSelf->pc + vlSelf->ysyx_22040632_top__DOT__dest);
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__dest;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->pc;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__src2;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
        } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 
                (vlSelf->pc + vlSelf->ysyx_22040632_top__DOT__dest);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__dest;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                = vlSelf->pc;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__src2;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        vlSelf->ysyx_22040632_top__DOT__pcchg = (1U 
                                                 & (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun) 
                                                     >> 3U) 
                                                    & ((4U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                        ? 
                                                       (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun) 
                                                         >> 1U) 
                                                        & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun) 
                                                           & (vlSelf->ysyx_22040632_top__DOT__src1 
                                                              < vlSelf->ysyx_22040632_top__DOT__src2)))
                                                        : (IData)(
                                                                  ((2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) 
                                                                   & VL_GTES_IQQ(64, vlSelf->ysyx_22040632_top__DOT__src1, vlSelf->ysyx_22040632_top__DOT__src2))))));
        if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                        vlSelf->ysyx_22040632_top__DOT__pc_op 
                            = (vlSelf->pc + vlSelf->ysyx_22040632_top__DOT__dest);
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                            = vlSelf->ysyx_22040632_top__DOT__dest;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                            = vlSelf->pc;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
                    } else {
                        vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                            = vlSelf->ysyx_22040632_top__DOT__src1;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                            = vlSelf->ysyx_22040632_top__DOT__src2;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                    vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__pc_op 
                        = (vlSelf->pc + vlSelf->ysyx_22040632_top__DOT__dest);
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__dest;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->pc;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
                }
            } else {
                vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            }
        } else {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                            = vlSelf->ysyx_22040632_top__DOT__src1;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                            = vlSelf->ysyx_22040632_top__DOT__src2;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                    } else {
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                            = vlSelf->ysyx_22040632_top__DOT__src1;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                            = vlSelf->ysyx_22040632_top__DOT__src2;
                        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                    }
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            }
        }
    } else if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        vlSelf->ysyx_22040632_top__DOT__pcchg = (1U 
                                                 & ((~ 
                                                     ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun) 
                                                      >> 2U)) 
                                                    & ((2U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                        ? 
                                                       ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun)) 
                                                        & (vlSelf->ysyx_22040632_top__DOT__src1 
                                                           != vlSelf->ysyx_22040632_top__DOT__src2))
                                                        : 
                                                       ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun) 
                                                        & (vlSelf->ysyx_22040632_top__DOT__src1 
                                                           == vlSelf->ysyx_22040632_top__DOT__src2)))));
        if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            } else {
                vlSelf->ysyx_22040632_top__DOT__pc_op 
                    = (vlSelf->pc + vlSelf->ysyx_22040632_top__DOT__dest);
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__dest;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->pc;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 
                (vlSelf->pc + vlSelf->ysyx_22040632_top__DOT__dest);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__dest;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                = vlSelf->pc;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
        } else {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                = vlSelf->ysyx_22040632_top__DOT__src1;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                = vlSelf->ysyx_22040632_top__DOT__src2;
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__pcchg = (1U 
                                                 & (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun) 
                                                     >> 2U) 
                                                    & ((2U 
                                                        & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                        : (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))));
        if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                    vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 0U;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__pc_op 
                        = (vlSelf->ysyx_22040632_top__DOT__src1 
                           + vlSelf->ysyx_22040632_top__DOT__src2);
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op = 4ULL;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->pc;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__pc_op 
                    = (vlSelf->ysyx_22040632_top__DOT__src1 
                       + vlSelf->pc);
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op = 4ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->pc;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            } else {
                vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            }
        } else {
            vlSelf->ysyx_22040632_top__DOT__pc_op = 0ULL;
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->ysyx_22040632_top__DOT__src2;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                } else {
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                        = vlSelf->ysyx_22040632_top__DOT__src1;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                        = vlSelf->pc;
                    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
                }
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                    = vlSelf->ysyx_22040632_top__DOT__src1;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                    = vlSelf->ysyx_22040632_top__DOT__src2;
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__gprchg = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_22040632_top___024root___sequent__TOP__3(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__rrst_n) 
           & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid) 
               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed)) 
              | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn)));
}

VL_INLINE_OPT void Vysyx_22040632_top___024root___sequent__TOP__6(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___sequent__TOP__6\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed 
        = ((0x1dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun)) 
           | (0x1eU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun)));
    __Vtableidx1 = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun;
    vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid 
        = Vysyx_22040632_top__ConstPool__TABLE_h8aea5909_0
        [__Vtableidx1];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__ns 
        = ((0U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__cs))
            ? ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid)
                ? 1U : 0U) : ((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__cs))
                               ? (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__eval_cnt) 
                                   == (0x7fU & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len) 
                                                - (IData)(1U))))
                                   ? 2U : ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.flush)
                                            ? 0U : 1U))
                               : ((2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__cs))
                                   ? ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid)
                                       ? 1U : 2U) : 0U)));
}

void Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_22040632_top___024root___multiclk__TOP__8(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___multiclk__TOP__8\n"); );
    // Body
    if ((0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len))) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt))
                ? (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt)) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (1ULL + (~ (((QData)((IData)(
                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U])))))))
                : (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U]))));
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_rmd))
                ? (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt)) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (1ULL + (~ (((QData)((IData)(
                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U])))))))
                : (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U]))));
    } else if ((0x20U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__len))) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt))
                ? (((- (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_qt))) 
                    << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U]))))))
                : (((QData)((IData)((- (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U] 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[0U]))));
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_rmd))
                ? (((- (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__sgn_rmd))) 
                    << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[2U]))))))
                : (((QData)((IData)((- (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U] 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_DIV_i__DOT__qt_rmd[1U]))));
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op 
        = ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
            ? ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                : ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                    ? ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                        ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                                : (QData)((IData)(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op) 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op))))))
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op), 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)))))
                                : (QData)((IData)(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op) 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)))))))
                        : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   * vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                                : (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op), 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op))))))
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   << (0x1fU & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)))
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op))))
                    : ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                        ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                            ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                               + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (VL_LTS_IQQ(64, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                                    ? 1ULL : 0ULL) : 
                               (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)))
                        : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient
                                : vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder)
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   - vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op))))))
            : ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                ? ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                    ? ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                        ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                                : vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder)
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient
                                : VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op)), 
                                              VL_EXTENDS_QI(64,32, (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)))))
                        : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                            ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                               + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   >> (0x3fU & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)))
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   << (0x3fU & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op))))))
                    : ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                        ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                                   | vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op)
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                                   ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op))
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                    < vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                                    ? 1ULL : 0ULL) : 
                               (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                << (0x1fU & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)))))
                        : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op))
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op 
                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op)
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)))))
                : ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                    ? ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                        ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? VL_SHIFTRS_QQI(64,64,5, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op, 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)))
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op))
                            : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                               + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op))
                        : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   - vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op))
                            : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                               + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)))
                    : ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                        ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                           + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                        : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                            ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                               + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                                : ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src1_op 
                                    < vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__src2_op)
                                    ? 1ULL : 0ULL)))))));
    if ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun)))) {
                            Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_write_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op, vlSelf->ysyx_22040632_top__DOT__dest, 3U);
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                        Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_write_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op, vlSelf->ysyx_22040632_top__DOT__dest, 0xfU);
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun) 
                             >> 2U)))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                    Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_write_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op, vlSelf->ysyx_22040632_top__DOT__dest, 1U);
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun) 
                         >> 3U)))) {
        if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                    Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_write_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op, vlSelf->ysyx_22040632_top__DOT__dest, 0xffU);
                }
            }
        }
    }
    if ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
        } else if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
        } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op, vlSelf->__Vtask_paddr_read__0__rdata);
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                    = vlSelf->__Vtask_paddr_read__0__rdata;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
            }
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
        }
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
        } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
        } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
        } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
        } else {
            Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op, vlSelf->__Vtask_paddr_read__1__rdata);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                = vlSelf->__Vtask_paddr_read__1__rdata;
        }
    } else if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
            } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
            } else {
                Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op, vlSelf->__Vtask_paddr_read__2__rdata);
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                    = vlSelf->__Vtask_paddr_read__2__rdata;
            }
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
        }
    } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
    } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op, vlSelf->__Vtask_paddr_read__3__rdata);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                = vlSelf->__Vtask_paddr_read__3__rdata;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr = 0ULL;
    }
    if ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__data = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op;
        } else if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__data = 
                ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                  ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                      ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                          ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op
                          : (((QData)((IData)((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op 
                                                                     >> 0x1fU))))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))))
                      : (((QData)((IData)((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op 
                                                                 >> 0x1fU))))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))))
                  : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                      ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                          ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op
                          : (((QData)((IData)((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op 
                                                                     >> 0x1fU))))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))))
                      : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                          ? (((QData)((IData)((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op 
                                                                     >> 0x1fU))))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op)))
                          : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op)));
        } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
                    if ((0ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) {
                        vlSelf->ysyx_22040632_top__DOT__data 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr))));
                    } else if ((2ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) {
                        vlSelf->ysyx_22040632_top__DOT__data 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                          >> 0x10U)))));
                    } else if ((4ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) {
                        vlSelf->ysyx_22040632_top__DOT__data 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                          >> 0x20U)))));
                    } else if ((6ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) {
                        vlSelf->ysyx_22040632_top__DOT__data 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                          >> 0x30U)))));
                    }
                } else if ((0ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) {
                    vlSelf->ysyx_22040632_top__DOT__data 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr)))));
                } else if ((2ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) {
                    vlSelf->ysyx_22040632_top__DOT__data 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                           >> 0x1fU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                                    >> 0x10U))))));
                } else if ((4ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) {
                    vlSelf->ysyx_22040632_top__DOT__data 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                           >> 0x2fU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                                    >> 0x20U))))));
                } else if ((6ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) {
                    vlSelf->ysyx_22040632_top__DOT__data 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                           >> 0x3fU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                                    >> 0x30U))))));
                }
            } else {
                vlSelf->ysyx_22040632_top__DOT__data 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op;
            }
        } else {
            vlSelf->ysyx_22040632_top__DOT__data = 
                ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                  ? (((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op)))
                  : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                      ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op
                      : (((QData)((IData)((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op 
                                                                 >> 0x1fU))))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op)))));
        }
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
        if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__data = 
                ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                  ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                      ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                          ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op
                          : (((QData)((IData)((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op 
                                                                     >> 0x1fU))))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))))
                      : (((QData)((IData)((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op 
                                                                 >> 0x1fU))))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))))
                  : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op);
        } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__data = 
                ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                  ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op
                  : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                      ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op
                      : (((QData)((IData)((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op 
                                                                 >> 0x1fU))))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op)))));
        } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__data = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op;
        } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__data = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op;
        } else if (((((((((0ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op)) 
                          | (1ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) 
                         | (2ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) 
                        | (3ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) 
                       | (4ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) 
                      | (5ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) 
                     | (6ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))) 
                    | (7ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op)))) {
            vlSelf->ysyx_22040632_top__DOT__data = 
                ((0ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))
                  ? (QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr))))
                  : ((1ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))
                      ? (QData)((IData)((0xffU & (IData)(
                                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                          >> 8U)))))
                      : ((2ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))
                          ? (QData)((IData)((0xffU 
                                             & (IData)(
                                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                        >> 0x10U)))))
                          : ((3ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))
                              ? (QData)((IData)((0xffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                            >> 0x18U)))))
                              : ((4ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))
                                  ? (QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                                >> 0x20U)))))
                                  : ((5ULL == (7ULL 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                                    >> 0x28U)))))
                                      : ((6ULL == (7ULL 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))
                                          ? (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                                        >> 0x30U)))))
                                          : (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                                        >> 0x38U))))))))))));
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__data = ((8U 
                                                 & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                    ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                    ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op
                                                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                   ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                    ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                  ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_IDU_i__DOT__fun))
                                                    ? 
                                                   ((0ULL 
                                                     == 
                                                     (7ULL 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                                                >> 0x3fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__ld_wr 
                                                                        >> 0x20U)))))
                                                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op)
                                                   : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_EXU_i__DOT__data_op)));
    }
}
