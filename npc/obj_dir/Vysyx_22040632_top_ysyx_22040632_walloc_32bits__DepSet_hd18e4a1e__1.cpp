// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i__145(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i__145\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU]))) 
                                                     | (IData)(
                                                               (0xc0U 
                                                                == 
                                                                (0xc0U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))) 
                                                    | (IData)(
                                                              (0x140U 
                                                               == 
                                                               (0x140U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU]))) 
                                                | (IData)(
                                                          (0x18U 
                                                           == 
                                                           (0x18U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))) 
                                               | (IData)(
                                                         (0x28U 
                                                          == 
                                                          (0x28U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU]))) 
                                                  << 0xbU) 
                                                 | (0xfffff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                        << 0xaU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                          << 0xbU)))) 
                                                | (0xfffff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                       << 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU]))) 
                                                   | (IData)(
                                                             (0xc000U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))) 
                                                  | (IData)(
                                                            (0x14000U 
                                                             == 
                                                             (0x14000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x3000U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU]))) 
                                                     | (IData)(
                                                               (0x1800U 
                                                                == 
                                                                (0x1800U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))) 
                                                    | (IData)(
                                                              (0x2800U 
                                                               == 
                                                               (0x2800U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU]))) 
                                                | (IData)(
                                                          (0xc0000U 
                                                           == 
                                                           (0xc0000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))) 
                                               | (IData)(
                                                         (0x140000U 
                                                          == 
                                                          (0x140000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU]))) 
                                              | (IData)(
                                                        (0xc00000U 
                                                         == 
                                                         (0xc00000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))) 
                                             | (IData)(
                                                       (0x1400000U 
                                                        == 
                                                        (0x1400000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                         >> 0x19U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i__401(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i__401\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x10U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i__146(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i__146\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U]))) 
                                                     | (IData)(
                                                               (0x30U 
                                                                == 
                                                                (0x30U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
                                                    | (IData)(
                                                              (0x50U 
                                                               == 
                                                               (0x50U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U]))) 
                                                | (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
                                               | (IData)(
                                                         (0xaU 
                                                          == 
                                                          (0xaU 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & (((0x800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
                                                        >> 0x14U))) 
                                                 | ((IData)(
                                                            (0xc0000000U 
                                                             == 
                                                             (0xc0000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU]))) 
                                                    << 0xbU)) 
                                                | (0x1800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU] 
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_4(
                                                             (0xeU 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])) 
                                                 << 1U)) 
                                          | (1U & (
                                                   VL_REDXOR_32(
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xfU])) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U]))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                          >> 7U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U]))) 
                                                   | (IData)(
                                                             (0x3000U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
                                                  | (IData)(
                                                            (0x5000U 
                                                             == 
                                                             (0x5000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U]))) 
                                                     | (IData)(
                                                               (0x600U 
                                                                == 
                                                                (0x600U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
                                                    | (IData)(
                                                              (0xa00U 
                                                               == 
                                                               (0xa00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0xe00U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U]))) 
                                                | (IData)(
                                                          (0x30000U 
                                                           == 
                                                           (0x30000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
                                               | (IData)(
                                                         (0x50000U 
                                                          == 
                                                          (0x50000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x70000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U]))) 
                                              | (IData)(
                                                        (0x300000U 
                                                         == 
                                                         (0x300000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
                                             | (IData)(
                                                       (0x500000U 
                                                        == 
                                                        (0x500000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x700000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                         >> 0x17U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i__402(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i__402\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x11U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i__147(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i__147\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U]))) 
                                                     | (IData)(
                                                               (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
                                                    | (IData)(
                                                              (0x14U 
                                                               == 
                                                               (0x14U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((0xfffff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                    << 0xbU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                      << 0xcU))) 
                                               | (0x1000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                      << 0xcU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                        >> 0x13U)))) 
                                              | (0x1000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                     << 0xbU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                       >> 0x13U))))) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x60000000U 
                                                           == 
                                                           (0x60000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U]))) 
                                                  | (IData)(
                                                            (0x30000000U 
                                                             == 
                                                             (0x30000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
                                                 | (IData)(
                                                           (0x50000000U 
                                                            == 
                                                            (0x50000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))) 
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])) 
                                              << 2U)) 
                                       | ((2U & (((0xfffffffeU 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U]) 
                                                  ^ 
                                                  (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                   << 1U)) 
                                                 ^ 
                                                 (2U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U] 
                                                     >> 0x1eU)))) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x70000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x10U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                          >> 5U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U]))) 
                                                   | (IData)(
                                                             (0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
                                                  | (IData)(
                                                            (0x1400U 
                                                             == 
                                                             (0x1400U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x300U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U]))) 
                                                     | (IData)(
                                                               (0x180U 
                                                                == 
                                                                (0x180U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
                                                    | (IData)(
                                                              (0x280U 
                                                               == 
                                                               (0x280U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x380U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U]))) 
                                                | (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
                                               | (IData)(
                                                         (0x14000U 
                                                          == 
                                                          (0x14000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U]))) 
                                              | (IData)(
                                                        (0xc0000U 
                                                         == 
                                                         (0xc0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
                                             | (IData)(
                                                       (0x140000U 
                                                        == 
                                                        (0x140000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U] 
                                                         >> 0x15U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i__403(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i__403\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x12U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i__148(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i__148\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                         >> 0x14U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U]))) 
                                                     << 0xdU) 
                                                    | (0xffffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                           << 0xcU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                             << 0xdU)))) 
                                                   | (0xffffe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                          << 0xbU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                            << 0xdU))))) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc0000000U 
                                                         == 
                                                         (0xc0000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U]))) 
                                                | (IData)(
                                                          (0x60000000U 
                                                           == 
                                                           (0x60000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
                                               | (IData)(
                                                         (0xa0000000U 
                                                          == 
                                                          (0xa0000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x18000000U 
                                                           == 
                                                           (0x18000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U]))) 
                                                  | (IData)(
                                                            (0xc000000U 
                                                             == 
                                                             (0xc000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
                                                 | (IData)(
                                                           (0x14000000U 
                                                            == 
                                                            (0x14000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))) 
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x11U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U]))) 
                                                   | (IData)(
                                                             (0x300U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))) 
                                                  | (IData)(
                                                            (0x500U 
                                                             == 
                                                             (0x500U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U]))) 
                                                     | (IData)(
                                                               (0x60U 
                                                                == 
                                                                (0x60U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))) 
                                                    | (IData)(
                                                              (0xa0U 
                                                               == 
                                                               (0xa0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_8(
                                                                          (0xe0U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U]))) 
                                                | (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))) 
                                               | (IData)(
                                                         (0x5000U 
                                                          == 
                                                          (0x5000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x7000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U]))) 
                                              | (IData)(
                                                        (0x30000U 
                                                         == 
                                                         (0x30000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))) 
                                             | (IData)(
                                                       (0x50000U 
                                                        == 
                                                        (0x50000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x70000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                         >> 0x13U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i__404(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i__404\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x13U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i__149(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i__149\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                         >> 0x12U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                         >> 0x14U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                         << 0xdU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                           >> 0x12U))) 
                                                    | ((IData)(
                                                               (0xc0000000U 
                                                                == 
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U]))) 
                                                       << 0xdU)) 
                                                   | (0x6000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                          << 0xdU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U] 
                                                            >> 0x11U))))) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x30000000U 
                                                         == 
                                                         (0x30000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U]))) 
                                                | (IData)(
                                                          (0x18000000U 
                                                           == 
                                                           (0x18000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))) 
                                               | (IData)(
                                                         (0x28000000U 
                                                          == 
                                                          (0x28000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x6000000U 
                                                           == 
                                                           (0x6000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U]))) 
                                                  | (IData)(
                                                            (0x3000000U 
                                                             == 
                                                             (0x3000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))) 
                                                 | (IData)(
                                                           (0x5000000U 
                                                            == 
                                                            (0x5000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))) 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])) 
                                               ^ vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U]) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x38000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x7000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x12U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U]))) 
                                                   | (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
                                                  | (IData)(
                                                            (0x140U 
                                                             == 
                                                             (0x140U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U]))) 
                                                     | (IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x18U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
                                                    | (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x28U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_8(
                                                                          (0x38U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U]))) 
                                                | (IData)(
                                                          (0xc00U 
                                                           == 
                                                           (0xc00U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
                                               | (IData)(
                                                         (0x1400U 
                                                          == 
                                                          (0x1400U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x1c00U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U]))) 
                                              | (IData)(
                                                        (0xc000U 
                                                         == 
                                                         (0xc000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
                                             | (IData)(
                                                       (0x14000U 
                                                        == 
                                                        (0x14000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
                                                         >> 0x11U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i__405(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i__405\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x14U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i__150(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i__150\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                         >> 0x10U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                         >> 0x12U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U]))) 
                                                     | (IData)(
                                                               (0x30000000U 
                                                                == 
                                                                (0x30000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
                                                    | (IData)(
                                                              (0x50000000U 
                                                               == 
                                                               (0x50000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc000000U 
                                                         == 
                                                         (0xc000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U]))) 
                                                | (IData)(
                                                          (0x6000000U 
                                                           == 
                                                           (0x6000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
                                               | (IData)(
                                                         (0xa000000U 
                                                          == 
                                                          (0xa000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x1800000U 
                                                           == 
                                                           (0x1800000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U]))) 
                                                  | (IData)(
                                                            (0xc00000U 
                                                             == 
                                                             (0xc00000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
                                                 | (IData)(
                                                           (0x1400000U 
                                                            == 
                                                            (0x1400000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x13U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U]))) 
                                                   | (IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
                                                  | (IData)(
                                                            (0x50U 
                                                             == 
                                                             (0x50U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U]))) 
                                                     | (IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
                                                    | (IData)(
                                                              (0xaU 
                                                               == 
                                                               (0xaU 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_4(
                                                                          (0xeU 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U]))) 
                                                | (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
                                               | (IData)(
                                                         (0x500U 
                                                          == 
                                                          (0x500U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x700U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U]))) 
                                              | (IData)(
                                                        (0x3000U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
                                             | (IData)(
                                                       (0x5000U 
                                                        == 
                                                        (0x5000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x7000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                         >> 0xfU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i__406(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i__406\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x15U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i__151(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i__151\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                         >> 0xeU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                         >> 0x10U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U]))) 
                                                     | (IData)(
                                                               (0xc000000U 
                                                                == 
                                                                (0xc000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
                                                    | (IData)(
                                                              (0x14000000U 
                                                               == 
                                                               (0x14000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x3000000U 
                                                         == 
                                                         (0x3000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U]))) 
                                                | (IData)(
                                                          (0x1800000U 
                                                           == 
                                                           (0x1800000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
                                               | (IData)(
                                                         (0x2800000U 
                                                          == 
                                                          (0x2800000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x600000U 
                                                           == 
                                                           (0x600000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U]))) 
                                                  | (IData)(
                                                            (0x300000U 
                                                             == 
                                                             (0x300000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
                                                 | (IData)(
                                                           (0x500000U 
                                                            == 
                                                            (0x500000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x3800000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x700000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                          >> 0x1dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U]))) 
                                                   | (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
                                                  | (IData)(
                                                            (0x14U 
                                                             == 
                                                             (0x14U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   ((0xfffc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                         << 0x11U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                           << 0x12U))) 
                                                    | (0x40000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                           << 0x12U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                             >> 0xdU)))) 
                                                   | (0x40000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                          << 0x11U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                                 >> 1U) 
                                                                ^ 
                                                                vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U]) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x14U] 
                                                                >> 0x1fU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U]))) 
                                                | (IData)(
                                                          (0xc0U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
                                               | (IData)(
                                                         (0x140U 
                                                          == 
                                                          (0x140U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x1c0U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U]))) 
                                              | (IData)(
                                                        (0xc00U 
                                                         == 
                                                         (0xc00U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
                                             | (IData)(
                                                       (0x1400U 
                                                        == 
                                                        (0x1400U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x1c00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                         >> 0xdU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i__407(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i__407\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x16U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i__152(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i__152\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                         >> 0xcU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                         >> 0xeU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U]))) 
                                                     | (IData)(
                                                               (0x3000000U 
                                                                == 
                                                                (0x3000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
                                                    | (IData)(
                                                              (0x5000000U 
                                                               == 
                                                               (0x5000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc00000U 
                                                         == 
                                                         (0xc00000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U]))) 
                                                | (IData)(
                                                          (0x600000U 
                                                           == 
                                                           (0x600000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
                                               | (IData)(
                                                         (0xa00000U 
                                                          == 
                                                          (0xa00000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x180000U 
                                                           == 
                                                           (0x180000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U]))) 
                                                  | (IData)(
                                                            (0xc0000U 
                                                             == 
                                                             (0xc0000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
                                                 | (IData)(
                                                           (0x140000U 
                                                            == 
                                                            (0x140000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U] 
                                                          >> 0x1bU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U]))) 
                                                   << 0x13U) 
                                                  | (0xfff80000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                         << 0x12U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                           << 0x13U)))) 
                                                 | (0xfff80000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                        << 0x11U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                          << 0x13U))))) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc0000000U 
                                                              == 
                                                              (0xc0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U]))) 
                                                     | (IData)(
                                                               (0x60000000U 
                                                                == 
                                                                (0x60000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
                                                    | (IData)(
                                                              (0xa0000000U 
                                                               == 
                                                               (0xa0000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))) 
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe0000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x15U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U]))) 
                                                | (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))) 
                                               | (IData)(
                                                         (0x50U 
                                                          == 
                                                          (0x50U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x70U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U]))) 
                                              | (IData)(
                                                        (0x300U 
                                                         == 
                                                         (0x300U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))) 
                                             | (IData)(
                                                       (0x500U 
                                                        == 
                                                        (0x500U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x700U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                         >> 0xbU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i__408(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i__408\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x17U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i__153(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i__153\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                         >> 0xcU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U]))) 
                                                     | (IData)(
                                                               (0xc00000U 
                                                                == 
                                                                (0xc00000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))) 
                                                    | (IData)(
                                                              (0x1400000U 
                                                               == 
                                                               (0x1400000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x300000U 
                                                         == 
                                                         (0x300000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U]))) 
                                                | (IData)(
                                                          (0x180000U 
                                                           == 
                                                           (0x180000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))) 
                                               | (IData)(
                                                         (0x280000U 
                                                          == 
                                                          (0x280000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x60000U 
                                                           == 
                                                           (0x60000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U]))) 
                                                  | (IData)(
                                                            (0x30000U 
                                                             == 
                                                             (0x30000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))) 
                                                 | (IData)(
                                                           (0x50000U 
                                                            == 
                                                            (0x50000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x380000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x70000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                          >> 0x19U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
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
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                       << 0x13U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                         >> 0xcU))) 
                                                  | ((IData)(
                                                             (0xc0000000U 
                                                              == 
                                                              (0xc0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U]))) 
                                                     << 0x13U)) 
                                                 | (0x180000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                        << 0x13U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U] 
                                                          >> 0xbU))))) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x30000000U 
                                                              == 
                                                              (0x30000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U]))) 
                                                     | (IData)(
                                                               (0x18000000U 
                                                                == 
                                                                (0x18000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))) 
                                                    | (IData)(
                                                              (0x28000000U 
                                                               == 
                                                               (0x28000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))) 
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
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])) 
                                                              ^ 
                                                              vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x38000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x16U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U]))) 
                                                | (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
                                               | (IData)(
                                                         (0x14U 
                                                          == 
                                                          (0x14U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x1cU 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U]))) 
                                              | (IData)(
                                                        (0xc0U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
                                             | (IData)(
                                                       (0x140U 
                                                        == 
                                                        (0x140U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x1c0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                         >> 9U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i__409(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i__409\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x18U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i__154(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i__154\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                         >> 8U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U]))) 
                                                     | (IData)(
                                                               (0x300000U 
                                                                == 
                                                                (0x300000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
                                                    | (IData)(
                                                              (0x500000U 
                                                               == 
                                                               (0x500000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc0000U 
                                                         == 
                                                         (0xc0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U]))) 
                                                | (IData)(
                                                          (0x60000U 
                                                           == 
                                                           (0x60000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
                                               | (IData)(
                                                         (0xa0000U 
                                                          == 
                                                          (0xa0000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x18000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U]))) 
                                                  | (IData)(
                                                            (0xc000U 
                                                             == 
                                                             (0xc000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
                                                 | (IData)(
                                                           (0x14000U 
                                                            == 
                                                            (0x14000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
                                                          >> 0x17U)) 
                                                      | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U]))) 
                                                   | (IData)(
                                                             (0x30000000U 
                                                              == 
                                                              (0x30000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
                                                  | (IData)(
                                                            (0x50000000U 
                                                             == 
                                                             (0x50000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc000000U 
                                                              == 
                                                              (0xc000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U]))) 
                                                     | (IData)(
                                                               (0x6000000U 
                                                                == 
                                                                (0x6000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
                                                    | (IData)(
                                                              (0xa000000U 
                                                               == 
                                                               (0xa000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x17U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U]))) 
                                                << 0x17U) 
                                               | (0xff800000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                      << 0x16U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                        << 0x17U)))) 
                                              | (0xff800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                     << 0x15U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                       << 0x17U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_4(
                                                                  (7U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U]))) 
                                              | (IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))) 
                                             | (IData)(
                                                       (0x50U 
                                                        == 
                                                        (0x50U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_8(
                                                              (0x70U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                         >> 7U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i__410(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i__410\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x19U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i__155(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i__155\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                         >> 6U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                         >> 8U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U]))) 
                                                     | (IData)(
                                                               (0xc0000U 
                                                                == 
                                                                (0xc0000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))) 
                                                    | (IData)(
                                                              (0x140000U 
                                                               == 
                                                               (0x140000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x30000U 
                                                         == 
                                                         (0x30000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U]))) 
                                                | (IData)(
                                                          (0x18000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))) 
                                               | (IData)(
                                                         (0x28000U 
                                                          == 
                                                          (0x28000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x6000U 
                                                           == 
                                                           (0x6000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U]))) 
                                                  | (IData)(
                                                            (0x3000U 
                                                             == 
                                                             (0x3000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))) 
                                                 | (IData)(
                                                           (0x5000U 
                                                            == 
                                                            (0x5000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x38000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x7000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                          >> 0x15U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U]))) 
                                                   | (IData)(
                                                             (0xc000000U 
                                                              == 
                                                              (0xc000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))) 
                                                  | (IData)(
                                                            (0x14000000U 
                                                             == 
                                                             (0x14000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x3000000U 
                                                              == 
                                                              (0x3000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U]))) 
                                                     | (IData)(
                                                               (0x1800000U 
                                                                == 
                                                                (0x1800000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))) 
                                                    | (IData)(
                                                              (0x2800000U 
                                                               == 
                                                               (0x2800000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x3800000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
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
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                    << 0x17U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                      >> 8U))) 
                                               | ((IData)(
                                                          (0xc0000000U 
                                                           == 
                                                           (0xc0000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U]))) 
                                                  << 0x17U)) 
                                              | (0x1800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                     << 0x17U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U] 
                                                       >> 7U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (VL_REDXOR_32(
                                                                    (0xc0000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x18U])) 
                                                       ^ 
                                                       vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U]))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U]))) 
                                              | (IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
                                             | (IData)(
                                                       (0x14U 
                                                        == 
                                                        (0x14U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_8(
                                                              (0x1cU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                         >> 5U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i__411(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i__411\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1aU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i__156(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i__156\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                         >> 4U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                         >> 6U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U]))) 
                                                     | (IData)(
                                                               (0x30000U 
                                                                == 
                                                                (0x30000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
                                                    | (IData)(
                                                              (0x50000U 
                                                               == 
                                                               (0x50000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc000U 
                                                         == 
                                                         (0xc000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U]))) 
                                                | (IData)(
                                                          (0x6000U 
                                                           == 
                                                           (0x6000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
                                               | (IData)(
                                                         (0xa000U 
                                                          == 
                                                          (0xa000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U]))) 
                                                  | (IData)(
                                                            (0xc00U 
                                                             == 
                                                             (0xc00U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
                                                 | (IData)(
                                                           (0x1400U 
                                                            == 
                                                            (0x1400U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0xe000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x1c00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
                                                          >> 0x13U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U]))) 
                                                   | (IData)(
                                                             (0x3000000U 
                                                              == 
                                                              (0x3000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
                                                  | (IData)(
                                                            (0x5000000U 
                                                             == 
                                                             (0x5000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc00000U 
                                                              == 
                                                              (0xc00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U]))) 
                                                     | (IData)(
                                                               (0x600000U 
                                                                == 
                                                                (0x600000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
                                                    | (IData)(
                                                              (0xa00000U 
                                                               == 
                                                               (0xa00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe00000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U]))) 
                                                | (IData)(
                                                          (0x30000000U 
                                                           == 
                                                           (0x30000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
                                               | (IData)(
                                                         (0x50000000U 
                                                          == 
                                                          (0x50000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x70000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x19U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU]))) 
                                              << 0x1aU) 
                                             | (0xfc000000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                    << 0x19U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                      << 0x1aU)))) 
                                            | (0xfc000000U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                   << 0x18U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                     << 0x1aU)))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                         >> 3U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i__412(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i__412\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1bU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i__157(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i__157\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                         >> 2U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                         >> 4U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU]))) 
                                                     | (IData)(
                                                               (0xc000U 
                                                                == 
                                                                (0xc000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))) 
                                                    | (IData)(
                                                              (0x14000U 
                                                               == 
                                                               (0x14000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x3000U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU]))) 
                                                | (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))) 
                                               | (IData)(
                                                         (0x2800U 
                                                          == 
                                                          (0x2800U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x600U 
                                                           == 
                                                           (0x600U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU]))) 
                                                  | (IData)(
                                                            (0x300U 
                                                             == 
                                                             (0x300U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))) 
                                                 | (IData)(
                                                           (0x500U 
                                                            == 
                                                            (0x500U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0x3800U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x700U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                          >> 0x11U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU]))) 
                                                   | (IData)(
                                                             (0xc00000U 
                                                              == 
                                                              (0xc00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))) 
                                                  | (IData)(
                                                            (0x1400000U 
                                                             == 
                                                             (0x1400000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x300000U 
                                                              == 
                                                              (0x300000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU]))) 
                                                     | (IData)(
                                                               (0x180000U 
                                                                == 
                                                                (0x180000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))) 
                                                    | (IData)(
                                                              (0x280000U 
                                                               == 
                                                               (0x280000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x380000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU]))) 
                                                | (IData)(
                                                          (0xc000000U 
                                                           == 
                                                           (0xc000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))) 
                                               | (IData)(
                                                         (0x14000000U 
                                                          == 
                                                          (0x14000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])))));
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
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                  << 0x1aU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                    >> 5U))) 
                                             | ((IData)(
                                                        (0xc0000000U 
                                                         == 
                                                         (0xc0000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU]))) 
                                                << 0x1aU)) 
                                            | (0xc000000U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                   << 0x1aU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU] 
                                                     >> 4U)))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & (VL_REDXOR_32(
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1aU])) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                         >> 1U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i__413(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i__413\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1cU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i__158(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i__158\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU]));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                         >> 2U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU]))) 
                                                     | (IData)(
                                                               (0x3000U 
                                                                == 
                                                                (0x3000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
                                                    | (IData)(
                                                              (0x5000U 
                                                               == 
                                                               (0x5000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc00U 
                                                         == 
                                                         (0xc00U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU]))) 
                                                | (IData)(
                                                          (0x600U 
                                                           == 
                                                           (0x600U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
                                               | (IData)(
                                                         (0xa00U 
                                                          == 
                                                          (0xa00U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x180U 
                                                           == 
                                                           (0x180U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU]))) 
                                                  | (IData)(
                                                            (0xc0U 
                                                             == 
                                                             (0xc0U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
                                                 | (IData)(
                                                           (0x140U 
                                                            == 
                                                            (0x140U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0xe00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x1c0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                          >> 0xfU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU]))) 
                                                   | (IData)(
                                                             (0x300000U 
                                                              == 
                                                              (0x300000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
                                                  | (IData)(
                                                            (0x500000U 
                                                             == 
                                                             (0x500000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc0000U 
                                                              == 
                                                              (0xc0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU]))) 
                                                     | (IData)(
                                                               (0x60000U 
                                                                == 
                                                                (0x60000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
                                                    | (IData)(
                                                              (0xa0000U 
                                                               == 
                                                               (0xa0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU]))) 
                                                | (IData)(
                                                          (0x3000000U 
                                                           == 
                                                           (0x3000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
                                               | (IData)(
                                                         (0x5000000U 
                                                          == 
                                                          (0x5000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x7000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU]))) 
                                              | (IData)(
                                                        (0x30000000U 
                                                         == 
                                                         (0x30000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
                                             | (IData)(
                                                       (0x50000000U 
                                                        == 
                                                        (0x50000000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x70000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1bU] 
                                                      >> 0x1fU));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i__414(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i__414\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1dU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i__159(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i__159\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                      >> 0x1eU));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU]));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU]))) 
                                                     | (IData)(
                                                               (0xc00U 
                                                                == 
                                                                (0xc00U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
                                                    | (IData)(
                                                              (0x1400U 
                                                               == 
                                                               (0x1400U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x300U 
                                                         == 
                                                         (0x300U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU]))) 
                                                | (IData)(
                                                          (0x180U 
                                                           == 
                                                           (0x180U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
                                               | (IData)(
                                                         (0x280U 
                                                          == 
                                                          (0x280U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU]))) 
                                                  | (IData)(
                                                            (0x30U 
                                                             == 
                                                             (0x30U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
                                                 | (IData)(
                                                           (0x50U 
                                                            == 
                                                            (0x50U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0x380U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_8(
                                                              (0x70U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                          >> 0xdU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU]))) 
                                                   | (IData)(
                                                             (0xc0000U 
                                                              == 
                                                              (0xc0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
                                                  | (IData)(
                                                            (0x140000U 
                                                             == 
                                                             (0x140000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x30000U 
                                                              == 
                                                              (0x30000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU]))) 
                                                     | (IData)(
                                                               (0x18000U 
                                                                == 
                                                                (0x18000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
                                                    | (IData)(
                                                              (0x28000U 
                                                               == 
                                                               (0x28000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x38000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU]))) 
                                                | (IData)(
                                                          (0xc00000U 
                                                           == 
                                                           (0xc00000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
                                               | (IData)(
                                                         (0x1400000U 
                                                          == 
                                                          (0x1400000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c00000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU]))) 
                                              | (IData)(
                                                        (0xc000000U 
                                                         == 
                                                         (0xc000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
                                             | (IData)(
                                                       (0x14000000U 
                                                        == 
                                                        (0x14000000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1cU] 
                                                         >> 0x1dU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i__415(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i__415\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1eU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i__160(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i__160\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                      >> 0x1eU));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU]))) 
                                                     | (IData)(
                                                               (0x300U 
                                                                == 
                                                                (0x300U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
                                                    | (IData)(
                                                              (0x500U 
                                                               == 
                                                               (0x500U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc0U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU]))) 
                                                | (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
                                               | (IData)(
                                                         (0xa0U 
                                                          == 
                                                          (0xa0U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x18U 
                                                           == 
                                                           (0x18U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU]))) 
                                                  | (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0xcU 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
                                                 | (IData)(
                                                           (0x14U 
                                                            == 
                                                            (0x14U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0xe0U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_8(
                                                              (0x1cU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                          >> 0xbU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU]))) 
                                                   | (IData)(
                                                             (0x30000U 
                                                              == 
                                                              (0x30000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
                                                  | (IData)(
                                                            (0x50000U 
                                                             == 
                                                             (0x50000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc000U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU]))) 
                                                     | (IData)(
                                                               (0x6000U 
                                                                == 
                                                                (0x6000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
                                                    | (IData)(
                                                              (0xa000U 
                                                               == 
                                                               (0xa000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0xe000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU]))) 
                                                | (IData)(
                                                          (0x300000U 
                                                           == 
                                                           (0x300000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
                                               | (IData)(
                                                         (0x500000U 
                                                          == 
                                                          (0x500000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x700000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU]))) 
                                              | (IData)(
                                                        (0x3000000U 
                                                         == 
                                                         (0x3000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
                                             | (IData)(
                                                       (0x5000000U 
                                                        == 
                                                        (0x5000000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x7000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x1dU] 
                                                         >> 0x1bU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i__416(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i__416\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x1fU]))))))))))))));
}
