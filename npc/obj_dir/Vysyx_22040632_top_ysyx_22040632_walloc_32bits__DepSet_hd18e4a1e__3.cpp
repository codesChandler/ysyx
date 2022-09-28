// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i__177(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i__177\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         >> 9U)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x180U 
                                                              == 
                                                              (0x180U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU]))) 
                                                     | (IData)(
                                                               (0xc0U 
                                                                == 
                                                                (0xc0U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))) 
                                                    | (IData)(
                                                              (0x140U 
                                                               == 
                                                               (0x140U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU]))) 
                                                | (IData)(
                                                          (0x18U 
                                                           == 
                                                           (0x18U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))) 
                                               | (IData)(
                                                         (0x28U 
                                                          == 
                                                          (0x28U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU]))) 
                                                  << 0xbU) 
                                                 | (0xfffff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                        << 0xaU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                          << 0xbU)))) 
                                                | (0xfffff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                       << 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         << 0xbU))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_16(
                                                           (0x1c0U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                            >> 0x11U))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x18000U 
                                                            == 
                                                            (0x18000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU]))) 
                                                   | (IData)(
                                                             (0xc000U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))) 
                                                  | (IData)(
                                                            (0x14000U 
                                                             == 
                                                             (0x14000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x3000U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU]))) 
                                                     | (IData)(
                                                               (0x1800U 
                                                                == 
                                                                (0x1800U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))) 
                                                    | (IData)(
                                                              (0x2800U 
                                                               == 
                                                               (0x2800U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_32(
                                                                          (0x1c000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         >> 0x15U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x180000U 
                                                         == 
                                                         (0x180000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU]))) 
                                                | (IData)(
                                                          (0xc0000U 
                                                           == 
                                                           (0xc0000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))) 
                                               | (IData)(
                                                         (0x140000U 
                                                          == 
                                                          (0x140000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x1800000U 
                                                       == 
                                                       (0x1800000U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU]))) 
                                              | (IData)(
                                                        (0xc00000U 
                                                         == 
                                                         (0xc00000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))) 
                                             | (IData)(
                                                       (0x1400000U 
                                                        == 
                                                        (0x1400000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         >> 0x19U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i__433(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i__433\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i__178(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i__178\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                         >> 7U)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x60U 
                                                              == 
                                                              (0x60U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU]))) 
                                                     | (IData)(
                                                               (0x30U 
                                                                == 
                                                                (0x30U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                                    | (IData)(
                                                              (0x50U 
                                                               == 
                                                               (0x50U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU]))) 
                                                | (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                               | (IData)(
                                                         (0xaU 
                                                          == 
                                                          (0xaU 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & (((0x800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                        >> 0x14U))) 
                                                 | ((IData)(
                                                            (0xc0000000U 
                                                             == 
                                                             (0xc0000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU]))) 
                                                    << 0xbU)) 
                                                | (0x1800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         >> 0x13U))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_8(
                                                          (0x70U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_4(
                                                             (0xeU 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])) 
                                                 << 1U)) 
                                          | (1U & (
                                                   VL_REDXOR_32(
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU])) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU]))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                          >> 7U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                            >> 0xfU))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x6000U 
                                                            == 
                                                            (0x6000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU]))) 
                                                   | (IData)(
                                                             (0x3000U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                                  | (IData)(
                                                            (0x5000U 
                                                             == 
                                                             (0x5000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU]))) 
                                                     | (IData)(
                                                               (0x600U 
                                                                == 
                                                                (0x600U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                                    | (IData)(
                                                              (0xa00U 
                                                               == 
                                                               (0xa00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_16(
                                                                          (0x7000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0xe00U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                         >> 0x13U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x60000U 
                                                         == 
                                                         (0x60000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU]))) 
                                                | (IData)(
                                                          (0x30000U 
                                                           == 
                                                           (0x30000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                               | (IData)(
                                                         (0x50000U 
                                                          == 
                                                          (0x50000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x70000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x600000U 
                                                       == 
                                                       (0x600000U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU]))) 
                                              | (IData)(
                                                        (0x300000U 
                                                         == 
                                                         (0x300000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                             | (IData)(
                                                       (0x500000U 
                                                        == 
                                                        (0x500000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x700000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                         >> 0x17U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i__434(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i__434\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__179(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__179\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                         >> 5U)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x18U 
                                                              == 
                                                              (0x18U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]))) 
                                                     | (IData)(
                                                               (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                                    | (IData)(
                                                              (0x14U 
                                                               == 
                                                               (0x14U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((0xfffff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    << 0xbU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                      << 0xcU))) 
                                               | (0x1000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                      << 0xcU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                        >> 0x13U)))) 
                                              | (0x1000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                     << 0xbU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                       >> 0x13U))))) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x60000000U 
                                                           == 
                                                           (0x60000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU]))) 
                                                  | (IData)(
                                                            (0x30000000U 
                                                             == 
                                                             (0x30000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                                 | (IData)(
                                                           (0x50000000U 
                                                            == 
                                                            (0x50000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_8(
                                                          (0x1cU 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])) 
                                              << 2U)) 
                                       | ((2U & (((0xfffffffeU 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]) 
                                                  ^ 
                                                  (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   << 1U)) 
                                                 ^ 
                                                 (2U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                     >> 0x1eU)))) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x70000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                          >> 5U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                            >> 0xdU))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x1800U 
                                                            == 
                                                            (0x1800U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]))) 
                                                   | (IData)(
                                                             (0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                                  | (IData)(
                                                            (0x1400U 
                                                             == 
                                                             (0x1400U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x300U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]))) 
                                                     | (IData)(
                                                               (0x180U 
                                                                == 
                                                                (0x180U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                                    | (IData)(
                                                              (0x280U 
                                                               == 
                                                               (0x280U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_16(
                                                                          (0x1c00U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x380U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                         >> 0x11U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x18000U 
                                                         == 
                                                         (0x18000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]))) 
                                                | (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                               | (IData)(
                                                         (0x14000U 
                                                          == 
                                                          (0x14000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x180000U 
                                                       == 
                                                       (0x180000U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]))) 
                                              | (IData)(
                                                        (0xc0000U 
                                                         == 
                                                         (0xc0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                             | (IData)(
                                                       (0x140000U 
                                                        == 
                                                        (0x140000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                         >> 0x15U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__435(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__435\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__180(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__180\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                         >> 0x14U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                         >> 3U)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U]))) 
                                                     << 0xdU) 
                                                    | (0xffffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                           << 0xcU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                             << 0xdU)))) 
                                                   | (0xffffe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                          << 0xbU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                            << 0xdU))))) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc0000000U 
                                                         == 
                                                         (0xc0000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]))) 
                                                | (IData)(
                                                          (0x60000000U 
                                                           == 
                                                           (0x60000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                               | (IData)(
                                                         (0xa0000000U 
                                                          == 
                                                          (0xa0000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x18000000U 
                                                           == 
                                                           (0x18000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]))) 
                                                  | (IData)(
                                                            (0xc000000U 
                                                             == 
                                                             (0xc000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                                 | (IData)(
                                                           (0x14000000U 
                                                            == 
                                                            (0x14000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_4(
                                                          (7U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                            >> 0xbU))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x600U 
                                                            == 
                                                            (0x600U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U]))) 
                                                   | (IData)(
                                                             (0x300U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))) 
                                                  | (IData)(
                                                            (0x500U 
                                                             == 
                                                             (0x500U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U]))) 
                                                     | (IData)(
                                                               (0x60U 
                                                                == 
                                                                (0x60U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))) 
                                                    | (IData)(
                                                              (0xa0U 
                                                               == 
                                                               (0xa0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_16(
                                                                          (0x700U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_8(
                                                                          (0xe0U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                         >> 0xfU)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x6000U 
                                                         == 
                                                         (0x6000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U]))) 
                                                | (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))) 
                                               | (IData)(
                                                         (0x5000U 
                                                          == 
                                                          (0x5000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x7000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x60000U 
                                                       == 
                                                       (0x60000U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U]))) 
                                              | (IData)(
                                                        (0x30000U 
                                                         == 
                                                         (0x30000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))) 
                                             | (IData)(
                                                       (0x50000U 
                                                        == 
                                                        (0x50000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x70000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                         >> 0x13U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__436(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__436\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__181(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__181\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         >> 0x12U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         >> 0x14U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         >> 1U)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   ((0x2000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         << 0xdU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                           >> 0x12U))) 
                                                    | ((IData)(
                                                               (0xc0000000U 
                                                                == 
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U]))) 
                                                       << 0xdU)) 
                                                   | (0x6000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                          << 0xdU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                            >> 0x11U))))) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x30000000U 
                                                         == 
                                                         (0x30000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U]))) 
                                                | (IData)(
                                                          (0x18000000U 
                                                           == 
                                                           (0x18000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))) 
                                               | (IData)(
                                                         (0x28000000U 
                                                          == 
                                                          (0x28000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x6000000U 
                                                           == 
                                                           (0x6000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U]))) 
                                                  | (IData)(
                                                            (0x3000000U 
                                                             == 
                                                             (0x3000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))) 
                                                 | (IData)(
                                                           (0x5000000U 
                                                            == 
                                                            (0x5000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & ((VL_REDXOR_32(
                                                            (0xc0000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])) 
                                               ^ vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U]) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x38000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x7000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                            >> 9U))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x180U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U]))) 
                                                   | (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                                  | (IData)(
                                                            (0x140U 
                                                             == 
                                                             (0x140U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U]))) 
                                                     | (IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x18U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                                    | (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x28U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_16(
                                                                          (0x1c0U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_8(
                                                                          (0x38U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         >> 0xdU)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x1800U 
                                                         == 
                                                         (0x1800U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U]))) 
                                                | (IData)(
                                                          (0xc00U 
                                                           == 
                                                           (0xc00U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                               | (IData)(
                                                         (0x1400U 
                                                          == 
                                                          (0x1400U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x1c00U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x18000U 
                                                       == 
                                                       (0x18000U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U]))) 
                                              | (IData)(
                                                        (0xc000U 
                                                         == 
                                                         (0xc000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                             | (IData)(
                                                       (0x14000U 
                                                        == 
                                                        (0x14000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         >> 0x11U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__437(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__437\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__182(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__182\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                         >> 0x10U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                         >> 0x12U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                      >> 0x1fU));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x60000000U 
                                                              == 
                                                              (0x60000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U]))) 
                                                     | (IData)(
                                                               (0x30000000U 
                                                                == 
                                                                (0x30000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                                    | (IData)(
                                                              (0x50000000U 
                                                               == 
                                                               (0x50000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc000000U 
                                                         == 
                                                         (0xc000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U]))) 
                                                | (IData)(
                                                          (0x6000000U 
                                                           == 
                                                           (0x6000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                               | (IData)(
                                                         (0xa000000U 
                                                          == 
                                                          (0xa000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x1800000U 
                                                           == 
                                                           (0x1800000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U]))) 
                                                  | (IData)(
                                                            (0xc00000U 
                                                             == 
                                                             (0xc00000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                                 | (IData)(
                                                           (0x1400000U 
                                                            == 
                                                            (0x1400000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_32(
                                                           (0x70000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                            >> 7U))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x60U 
                                                            == 
                                                            (0x60U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U]))) 
                                                   | (IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                                  | (IData)(
                                                            (0x50U 
                                                             == 
                                                             (0x50U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U]))) 
                                                     | (IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                                    | (IData)(
                                                              (0xaU 
                                                               == 
                                                               (0xaU 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x70U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_4(
                                                                          (0xeU 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                         >> 0xbU)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x600U 
                                                         == 
                                                         (0x600U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U]))) 
                                                | (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                               | (IData)(
                                                         (0x500U 
                                                          == 
                                                          (0x500U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x700U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x6000U 
                                                       == 
                                                       (0x6000U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U]))) 
                                              | (IData)(
                                                        (0x3000U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                             | (IData)(
                                                       (0x5000U 
                                                        == 
                                                        (0x5000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x7000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                         >> 0xfU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__438(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__438\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__183(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__183\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                         >> 0xeU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                         >> 0x10U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                         >> 0x1dU)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x18000000U 
                                                              == 
                                                              (0x18000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U]))) 
                                                     | (IData)(
                                                               (0xc000000U 
                                                                == 
                                                                (0xc000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                                    | (IData)(
                                                              (0x14000000U 
                                                               == 
                                                               (0x14000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x3000000U 
                                                         == 
                                                         (0x3000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U]))) 
                                                | (IData)(
                                                          (0x1800000U 
                                                           == 
                                                           (0x1800000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                               | (IData)(
                                                         (0x2800000U 
                                                          == 
                                                          (0x2800000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x600000U 
                                                           == 
                                                           (0x600000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U]))) 
                                                  | (IData)(
                                                            (0x300000U 
                                                             == 
                                                             (0x300000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                                 | (IData)(
                                                           (0x500000U 
                                                            == 
                                                            (0x500000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_32(
                                                           (0x1c000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x3800000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x700000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                          >> 0x1dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                            >> 5U))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x18U 
                                                            == 
                                                            (0x18U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U]))) 
                                                   | (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                                  | (IData)(
                                                            (0x14U 
                                                             == 
                                                             (0x14U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   ((0xfffc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                         << 0x11U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                           << 0x12U))) 
                                                    | (0x40000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                           << 0x12U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                             >> 0xdU)))) 
                                                   | (0x40000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                          << 0x11U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                            >> 0xdU))))))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                                 >> 1U) 
                                                                ^ 
                                                                vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U]) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                                >> 0x1fU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                         >> 9U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x180U 
                                                         == 
                                                         (0x180U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U]))) 
                                                | (IData)(
                                                          (0xc0U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                               | (IData)(
                                                         (0x140U 
                                                          == 
                                                          (0x140U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x1c0U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x1800U 
                                                       == 
                                                       (0x1800U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U]))) 
                                              | (IData)(
                                                        (0xc00U 
                                                         == 
                                                         (0xc00U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                             | (IData)(
                                                       (0x1400U 
                                                        == 
                                                        (0x1400U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x1c00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                         >> 0xdU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__439(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__439\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__184(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__184\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 0xcU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 0xeU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                         >> 0x1bU)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x6000000U 
                                                              == 
                                                              (0x6000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U]))) 
                                                     | (IData)(
                                                               (0x3000000U 
                                                                == 
                                                                (0x3000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                                    | (IData)(
                                                              (0x5000000U 
                                                               == 
                                                               (0x5000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc00000U 
                                                         == 
                                                         (0xc00000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U]))) 
                                                | (IData)(
                                                          (0x600000U 
                                                           == 
                                                           (0x600000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                               | (IData)(
                                                         (0xa00000U 
                                                          == 
                                                          (0xa00000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x180000U 
                                                           == 
                                                           (0x180000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U]))) 
                                                  | (IData)(
                                                            (0xc0000U 
                                                             == 
                                                             (0xc0000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                                 | (IData)(
                                                           (0x140000U 
                                                            == 
                                                            (0x140000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_32(
                                                           (0x7000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                          >> 0x1bU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                            >> 3U))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U]))) 
                                                   << 0x13U) 
                                                  | (0xfff80000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         << 0x12U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                           << 0x13U)))) 
                                                 | (0xfff80000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                        << 0x11U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                          << 0x13U))))) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc0000000U 
                                                              == 
                                                              (0xc0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U]))) 
                                                     | (IData)(
                                                               (0x60000000U 
                                                                == 
                                                                (0x60000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                                    | (IData)(
                                                              (0xa0000000U 
                                                               == 
                                                               (0xa0000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_4(
                                                                         (7U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe0000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 7U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x60U 
                                                         == 
                                                         (0x60U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U]))) 
                                                | (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))) 
                                               | (IData)(
                                                         (0x50U 
                                                          == 
                                                          (0x50U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x70U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x600U 
                                                       == 
                                                       (0x600U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U]))) 
                                              | (IData)(
                                                        (0x300U 
                                                         == 
                                                         (0x300U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))) 
                                             | (IData)(
                                                       (0x500U 
                                                        == 
                                                        (0x500U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x700U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 0xbU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__440(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__440\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__185(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__185\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 0xcU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 0x19U)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x1800000U 
                                                              == 
                                                              (0x1800000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U]))) 
                                                     | (IData)(
                                                               (0xc00000U 
                                                                == 
                                                                (0xc00000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))) 
                                                    | (IData)(
                                                              (0x1400000U 
                                                               == 
                                                               (0x1400000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x300000U 
                                                         == 
                                                         (0x300000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U]))) 
                                                | (IData)(
                                                          (0x180000U 
                                                           == 
                                                           (0x180000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))) 
                                               | (IData)(
                                                         (0x280000U 
                                                          == 
                                                          (0x280000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x60000U 
                                                           == 
                                                           (0x60000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U]))) 
                                                  | (IData)(
                                                            (0x30000U 
                                                             == 
                                                             (0x30000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))) 
                                                 | (IData)(
                                                           (0x50000U 
                                                            == 
                                                            (0x50000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_32(
                                                           (0x1c00000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x380000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x70000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                          >> 0x19U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                            >> 1U))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & (((0x80000U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                       << 0x13U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 0xcU))) 
                                                  | ((IData)(
                                                             (0xc0000000U 
                                                              == 
                                                              (0xc0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U]))) 
                                                     << 0x13U)) 
                                                 | (0x180000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                        << 0x13U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                          >> 0xbU))))) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x30000000U 
                                                              == 
                                                              (0x30000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U]))) 
                                                     | (IData)(
                                                               (0x18000000U 
                                                                == 
                                                                (0x18000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))) 
                                                    | (IData)(
                                                              (0x28000000U 
                                                               == 
                                                               (0x28000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & ((VL_REDXOR_32(
                                                                           (0xc0000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])) 
                                                              ^ 
                                                              vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x38000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 5U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x18U 
                                                         == 
                                                         (0x18U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U]))) 
                                                | (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                               | (IData)(
                                                         (0x14U 
                                                          == 
                                                          (0x14U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x1cU 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x180U 
                                                       == 
                                                       (0x180U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U]))) 
                                              | (IData)(
                                                        (0xc0U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                             | (IData)(
                                                       (0x140U 
                                                        == 
                                                        (0x140U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x1c0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 9U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__441(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__441\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__186(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__186\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 8U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 0x17U)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x600000U 
                                                              == 
                                                              (0x600000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U]))) 
                                                     | (IData)(
                                                               (0x300000U 
                                                                == 
                                                                (0x300000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                                    | (IData)(
                                                              (0x500000U 
                                                               == 
                                                               (0x500000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc0000U 
                                                         == 
                                                         (0xc0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U]))) 
                                                | (IData)(
                                                          (0x60000U 
                                                           == 
                                                           (0x60000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                               | (IData)(
                                                         (0xa0000U 
                                                          == 
                                                          (0xa0000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x18000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U]))) 
                                                  | (IData)(
                                                            (0xc000U 
                                                             == 
                                                             (0xc000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                                 | (IData)(
                                                           (0x14000U 
                                                            == 
                                                            (0x14000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_32(
                                                           (0x700000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                          >> 0x17U)) 
                                                      | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 0x1fU)));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x60000000U 
                                                            == 
                                                            (0x60000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U]))) 
                                                   | (IData)(
                                                             (0x30000000U 
                                                              == 
                                                              (0x30000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                                  | (IData)(
                                                            (0x50000000U 
                                                             == 
                                                             (0x50000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc000000U 
                                                              == 
                                                              (0xc000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U]))) 
                                                     | (IData)(
                                                               (0x6000000U 
                                                                == 
                                                                (0x6000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                                    | (IData)(
                                                              (0xa000000U 
                                                               == 
                                                               (0xa000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_32(
                                                                          (0x70000000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 3U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U]))) 
                                                << 0x17U) 
                                               | (0xff800000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                      << 0x16U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                        << 0x17U)))) 
                                              | (0xff800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                     << 0x15U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                       << 0x17U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_4(
                                                                  (7U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x60U 
                                                       == 
                                                       (0x60U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U]))) 
                                              | (IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))) 
                                             | (IData)(
                                                       (0x50U 
                                                        == 
                                                        (0x50U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_8(
                                                              (0x70U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 7U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__442(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__442\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__187(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__187\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 6U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 8U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 0x15U)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x180000U 
                                                              == 
                                                              (0x180000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U]))) 
                                                     | (IData)(
                                                               (0xc0000U 
                                                                == 
                                                                (0xc0000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))) 
                                                    | (IData)(
                                                              (0x140000U 
                                                               == 
                                                               (0x140000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x30000U 
                                                         == 
                                                         (0x30000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U]))) 
                                                | (IData)(
                                                          (0x18000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))) 
                                               | (IData)(
                                                         (0x28000U 
                                                          == 
                                                          (0x28000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x6000U 
                                                           == 
                                                           (0x6000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U]))) 
                                                  | (IData)(
                                                            (0x3000U 
                                                             == 
                                                             (0x3000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))) 
                                                 | (IData)(
                                                           (0x5000U 
                                                            == 
                                                            (0x5000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_32(
                                                           (0x1c0000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x38000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x7000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                          >> 0x15U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                            >> 0x1dU))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x18000000U 
                                                            == 
                                                            (0x18000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U]))) 
                                                   | (IData)(
                                                             (0xc000000U 
                                                              == 
                                                              (0xc000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))) 
                                                  | (IData)(
                                                            (0x14000000U 
                                                             == 
                                                             (0x14000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x3000000U 
                                                              == 
                                                              (0x3000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U]))) 
                                                     | (IData)(
                                                               (0x1800000U 
                                                                == 
                                                                (0x1800000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))) 
                                                    | (IData)(
                                                              (0x2800000U 
                                                               == 
                                                               (0x2800000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_32(
                                                                          (0x1c000000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x3800000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 1U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & (((0x800000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                    << 0x17U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                      >> 8U))) 
                                               | ((IData)(
                                                          (0xc0000000U 
                                                           == 
                                                           (0xc0000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U]))) 
                                                  << 0x17U)) 
                                              | (0x1800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                     << 0x17U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                       >> 7U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (VL_REDXOR_32(
                                                                    (0xc0000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U])) 
                                                       ^ 
                                                       vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U]))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x18U 
                                                       == 
                                                       (0x18U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U]))) 
                                              | (IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                             | (IData)(
                                                       (0x14U 
                                                        == 
                                                        (0x14U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_8(
                                                              (0x1cU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 5U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__443(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__443\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__188(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__188\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                         >> 4U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                         >> 6U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 0x13U)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x60000U 
                                                              == 
                                                              (0x60000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U]))) 
                                                     | (IData)(
                                                               (0x30000U 
                                                                == 
                                                                (0x30000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                                    | (IData)(
                                                              (0x50000U 
                                                               == 
                                                               (0x50000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc000U 
                                                         == 
                                                         (0xc000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U]))) 
                                                | (IData)(
                                                          (0x6000U 
                                                           == 
                                                           (0x6000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                               | (IData)(
                                                         (0xa000U 
                                                          == 
                                                          (0xa000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U]))) 
                                                  | (IData)(
                                                            (0xc00U 
                                                             == 
                                                             (0xc00U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                                 | (IData)(
                                                           (0x1400U 
                                                            == 
                                                            (0x1400U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_32(
                                                           (0x70000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0xe000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x1c00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                          >> 0x13U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                            >> 0x1bU))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x6000000U 
                                                            == 
                                                            (0x6000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U]))) 
                                                   | (IData)(
                                                             (0x3000000U 
                                                              == 
                                                              (0x3000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                                  | (IData)(
                                                            (0x5000000U 
                                                             == 
                                                             (0x5000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc00000U 
                                                              == 
                                                              (0xc00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U]))) 
                                                     | (IData)(
                                                               (0x600000U 
                                                                == 
                                                                (0x600000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                                    | (IData)(
                                                              (0xa00000U 
                                                               == 
                                                               (0xa00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_32(
                                                                          (0x7000000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe00000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                      >> 0x1fU));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x60000000U 
                                                         == 
                                                         (0x60000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U]))) 
                                                | (IData)(
                                                          (0x30000000U 
                                                           == 
                                                           (0x30000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                               | (IData)(
                                                         (0x50000000U 
                                                          == 
                                                          (0x50000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x70000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (6U 
                                                       == 
                                                       (6U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U]))) 
                                              << 0x1aU) 
                                             | (0xfc000000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                    << 0x19U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                      << 0x1aU)))) 
                                            | (0xfc000000U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                   << 0x18U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                     << 0x1aU)))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                         >> 3U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__444(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__444\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i__189(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i__189\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U] 
                                                         >> 2U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U] 
                                                         >> 4U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                         >> 0x11U)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x18000U 
                                                              == 
                                                              (0x18000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U]))) 
                                                     | (IData)(
                                                               (0xc000U 
                                                                == 
                                                                (0xc000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))) 
                                                    | (IData)(
                                                              (0x14000U 
                                                               == 
                                                               (0x14000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x3000U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U]))) 
                                                | (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))) 
                                               | (IData)(
                                                         (0x2800U 
                                                          == 
                                                          (0x2800U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x600U 
                                                           == 
                                                           (0x600U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U]))) 
                                                  | (IData)(
                                                            (0x300U 
                                                             == 
                                                             (0x300U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))) 
                                                 | (IData)(
                                                           (0x500U 
                                                            == 
                                                            (0x500U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_32(
                                                           (0x1c000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0x3800U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x700U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                          >> 0x11U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                            >> 0x19U))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x1800000U 
                                                            == 
                                                            (0x1800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U]))) 
                                                   | (IData)(
                                                             (0xc00000U 
                                                              == 
                                                              (0xc00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))) 
                                                  | (IData)(
                                                            (0x1400000U 
                                                             == 
                                                             (0x1400000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x300000U 
                                                              == 
                                                              (0x300000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U]))) 
                                                     | (IData)(
                                                               (0x180000U 
                                                                == 
                                                                (0x180000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))) 
                                                    | (IData)(
                                                              (0x280000U 
                                                               == 
                                                               (0x280000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_32(
                                                                          (0x1c00000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x380000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                         >> 0x1dU)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x18000000U 
                                                         == 
                                                         (0x18000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U]))) 
                                                | (IData)(
                                                          (0xc000000U 
                                                           == 
                                                           (0xc000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))) 
                                               | (IData)(
                                                         (0x14000000U 
                                                          == 
                                                          (0x14000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & (((0x4000000U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U] 
                                                  << 0x1aU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                    >> 5U))) 
                                             | ((IData)(
                                                        (0xc0000000U 
                                                         == 
                                                         (0xc0000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U]))) 
                                                << 0x1aU)) 
                                            | (0xc000000U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U] 
                                                   << 0x1aU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                     >> 4U)))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & (VL_REDXOR_32(
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U] 
                                                         >> 1U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i__445(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i__445\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i__190(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i__190\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU]));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU] 
                                                         >> 2U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U] 
                                                         >> 0xfU)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x6000U 
                                                              == 
                                                              (0x6000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U]))) 
                                                     | (IData)(
                                                               (0x3000U 
                                                                == 
                                                                (0x3000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                                    | (IData)(
                                                              (0x5000U 
                                                               == 
                                                               (0x5000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc00U 
                                                         == 
                                                         (0xc00U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U]))) 
                                                | (IData)(
                                                          (0x600U 
                                                           == 
                                                           (0x600U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                               | (IData)(
                                                         (0xa00U 
                                                          == 
                                                          (0xa00U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x180U 
                                                           == 
                                                           (0x180U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U]))) 
                                                  | (IData)(
                                                            (0xc0U 
                                                             == 
                                                             (0xc0U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                                 | (IData)(
                                                           (0x140U 
                                                            == 
                                                            (0x140U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_16(
                                                           (0x7000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0xe00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x1c0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U] 
                                                          >> 0xfU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U] 
                                                            >> 0x17U))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x600000U 
                                                            == 
                                                            (0x600000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U]))) 
                                                   | (IData)(
                                                             (0x300000U 
                                                              == 
                                                              (0x300000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                                  | (IData)(
                                                            (0x500000U 
                                                             == 
                                                             (0x500000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc0000U 
                                                              == 
                                                              (0xc0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U]))) 
                                                     | (IData)(
                                                               (0x60000U 
                                                                == 
                                                                (0x60000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                                    | (IData)(
                                                              (0xa0000U 
                                                               == 
                                                               (0xa0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_32(
                                                                          (0x700000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U] 
                                                         >> 0x1bU)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x6000000U 
                                                         == 
                                                         (0x6000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U]))) 
                                                | (IData)(
                                                          (0x3000000U 
                                                           == 
                                                           (0x3000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                               | (IData)(
                                                         (0x5000000U 
                                                          == 
                                                          (0x5000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x7000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x60000000U 
                                                       == 
                                                       (0x60000000U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U]))) 
                                              | (IData)(
                                                        (0x30000000U 
                                                         == 
                                                         (0x30000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                             | (IData)(
                                                       (0x50000000U 
                                                        == 
                                                        (0x50000000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x70000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x39U] 
                                                      >> 0x1fU));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i__446(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i__446\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i__191(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i__191\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU] 
                                                      >> 0x1eU));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU]));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU] 
                                                         >> 0xdU)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x1800U 
                                                              == 
                                                              (0x1800U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU]))) 
                                                     | (IData)(
                                                               (0xc00U 
                                                                == 
                                                                (0xc00U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                                    | (IData)(
                                                              (0x1400U 
                                                               == 
                                                               (0x1400U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x300U 
                                                         == 
                                                         (0x300U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU]))) 
                                                | (IData)(
                                                          (0x180U 
                                                           == 
                                                           (0x180U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                               | (IData)(
                                                         (0x280U 
                                                          == 
                                                          (0x280U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU]))) 
                                                  | (IData)(
                                                            (0x30U 
                                                             == 
                                                             (0x30U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                                 | (IData)(
                                                           (0x50U 
                                                            == 
                                                            (0x50U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_16(
                                                           (0x1c00U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0x380U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_8(
                                                              (0x70U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU] 
                                                          >> 0xdU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU] 
                                                            >> 0x15U))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x180000U 
                                                            == 
                                                            (0x180000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU]))) 
                                                   | (IData)(
                                                             (0xc0000U 
                                                              == 
                                                              (0xc0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                                  | (IData)(
                                                            (0x140000U 
                                                             == 
                                                             (0x140000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x30000U 
                                                              == 
                                                              (0x30000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU]))) 
                                                     | (IData)(
                                                               (0x18000U 
                                                                == 
                                                                (0x18000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                                    | (IData)(
                                                              (0x28000U 
                                                               == 
                                                               (0x28000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_32(
                                                                          (0x1c0000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x38000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU] 
                                                         >> 0x19U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x1800000U 
                                                         == 
                                                         (0x1800000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU]))) 
                                                | (IData)(
                                                          (0xc00000U 
                                                           == 
                                                           (0xc00000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                               | (IData)(
                                                         (0x1400000U 
                                                          == 
                                                          (0x1400000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c00000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x18000000U 
                                                       == 
                                                       (0x18000000U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU]))) 
                                              | (IData)(
                                                        (0xc000000U 
                                                         == 
                                                         (0xc000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                             | (IData)(
                                                       (0x14000000U 
                                                        == 
                                                        (0x14000000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3aU] 
                                                         >> 0x1dU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i__447(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i__447\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i__192(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i__192\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU] 
                                                      >> 0x1eU));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU] 
                                                         >> 0xbU)));
    vlSelf->__PVT__c = ((0x3ffc07ffU & vlSelf->__PVT__c) 
                        | ((0x20000U & ((((IData)((0x600U 
                                                   == 
                                                   (0x600U 
                                                    & (IData)(vlSelf->__PVT__first_s)))) 
                                          | (IData)(
                                                    (0x300U 
                                                     == 
                                                     (0x300U 
                                                      & (IData)(vlSelf->__PVT__first_s))))) 
                                         | (IData)(
                                                   (0x500U 
                                                    == 
                                                    (0x500U 
                                                     & (IData)(vlSelf->__PVT__first_s))))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((IData)(
                                                     (0xc0U 
                                                      == 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->__PVT__first_s)))) 
                                             | (IData)(
                                                       (0x60U 
                                                        == 
                                                        (0x60U 
                                                         & (IData)(vlSelf->__PVT__first_s))))) 
                                            | (IData)(
                                                      (0xa0U 
                                                       == 
                                                       (0xa0U 
                                                        & (IData)(vlSelf->__PVT__first_s))))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSelf->__PVT__first_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__first_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSelf->__PVT__first_s))))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                  << 0xeU) 
                                                 | (0xffffc000U 
                                                    & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                          << 0xeU)))) 
                                                | (0xffffc000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0xcU) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0xeU))))) 
                                    | ((0x2000U & (
                                                   (((IData)(
                                                             (0x600U 
                                                              == 
                                                              (0x600U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU]))) 
                                                     | (IData)(
                                                               (0x300U 
                                                                == 
                                                                (0x300U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                                    | (IData)(
                                                              (0x500U 
                                                               == 
                                                               (0x500U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc0U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU]))) 
                                                | (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                               | (IData)(
                                                         (0xa0U 
                                                          == 
                                                          (0xa0U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x18U 
                                                           == 
                                                           (0x18U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU]))) 
                                                  | (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0xcU 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                                 | (IData)(
                                                           (0x14U 
                                                            == 
                                                            (0x14U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                                << 0xbU)))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_16(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_8(
                                                      (0xe0U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_8(
                                                       (0x1cU 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa14__in) 
                                           << 3U)) 
                                    | ((4U & (VL_REDXOR_16(
                                                           (0x700U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0xe0U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_8(
                                                              (0x1cU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU] 
                                                          >> 0xbU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU] 
                                                            >> 0x13U))));
    vlSelf->__PVT__c = ((0x3f83ffffU & vlSelf->__PVT__c) 
                        | ((0x400000U & ((((IData)(
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & (IData)(vlSelf->__PVT__second_s)))) 
                                           | (IData)(
                                                     (0x30U 
                                                      == 
                                                      (0x30U 
                                                       & (IData)(vlSelf->__PVT__second_s))))) 
                                          | (IData)(
                                                    (0x50U 
                                                     == 
                                                     (0x50U 
                                                      & (IData)(vlSelf->__PVT__second_s))))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__second_s)))) 
                                              | (IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__PVT__second_s))))) 
                                             | (IData)(
                                                       (0xaU 
                                                        == 
                                                        (0xaU 
                                                         & (IData)(vlSelf->__PVT__second_s))))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x14U) 
                                                | (0xfff00000U 
                                                   & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x13U) 
                                                      & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x14U)))) 
                                               | (0xfff00000U 
                                                  & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x12U) 
                                                     & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x14U))))) 
                                 | ((0x80000U & ((((IData)(
                                                           (0x60000U 
                                                            == 
                                                            (0x60000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU]))) 
                                                   | (IData)(
                                                             (0x30000U 
                                                              == 
                                                              (0x30000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                                  | (IData)(
                                                            (0x50000U 
                                                             == 
                                                             (0x50000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc000U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU]))) 
                                                     | (IData)(
                                                               (0x6000U 
                                                                == 
                                                                (0x6000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                                    | (IData)(
                                                              (0xa000U 
                                                               == 
                                                               (0xa000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                                   << 0x12U)))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_8(
                                                    (0x70U 
                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_4(
                                                                   (0xeU 
                                                                    & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_32(
                                                                          (0x70000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0xe000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU] 
                                                         >> 0x17U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSelf->__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSelf->__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSelf->__PVT__third_s))))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in)))) 
                                               << 0x18U) 
                                              | (0xff000000U 
                                                 & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x17U) 
                                                    & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x18U)))) 
                                             | (0xff000000U 
                                                & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x16U) 
                                                   & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x18U))))) 
                              | (0x800000U & ((((IData)(
                                                        (0x600000U 
                                                         == 
                                                         (0x600000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU]))) 
                                                | (IData)(
                                                          (0x300000U 
                                                           == 
                                                           (0x300000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                               | (IData)(
                                                         (0x500000U 
                                                          == 
                                                          (0x500000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x700000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__PVT__fourth_s)))) 
                                            << 0x1bU) 
                                           | (0xf8000000U 
                                              & (((IData)(vlSelf->__PVT__fourth_s) 
                                                  << 0x1aU) 
                                                 & ((IData)(vlSelf->__PVT__fourth_s) 
                                                    << 0x1bU)))) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__PVT__fourth_s) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__PVT__fourth_s) 
                                                   << 0x1bU))))) 
                           | (0x4000000U & ((((IData)(
                                                      (0x6000000U 
                                                       == 
                                                       (0x6000000U 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU]))) 
                                              | (IData)(
                                                        (0x3000000U 
                                                         == 
                                                         (0x3000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                             | (IData)(
                                                       (0x5000000U 
                                                        == 
                                                        (0x5000000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x7000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3bU] 
                                                         >> 0x1bU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i__448(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i__448\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU]))))))))))))));
}
