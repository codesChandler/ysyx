// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i__193(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i__193\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU]))) 
                                                     | (IData)(
                                                               (0xc0U 
                                                                == 
                                                                (0xc0U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))) 
                                                    | (IData)(
                                                              (0x140U 
                                                               == 
                                                               (0x140U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU]))) 
                                                | (IData)(
                                                          (0x18U 
                                                           == 
                                                           (0x18U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))) 
                                               | (IData)(
                                                         (0x28U 
                                                          == 
                                                          (0x28U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU]))) 
                                                  << 0xbU) 
                                                 | (0xfffff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
                                                        << 0xaU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
                                                          << 0xbU)))) 
                                                | (0xfffff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
                                                       << 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU]))) 
                                                   | (IData)(
                                                             (0xc000U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))) 
                                                  | (IData)(
                                                            (0x14000U 
                                                             == 
                                                             (0x14000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x3000U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU]))) 
                                                     | (IData)(
                                                               (0x1800U 
                                                                == 
                                                                (0x1800U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))) 
                                                    | (IData)(
                                                              (0x2800U 
                                                               == 
                                                               (0x2800U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU]))) 
                                                | (IData)(
                                                          (0xc0000U 
                                                           == 
                                                           (0xc0000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))) 
                                               | (IData)(
                                                         (0x140000U 
                                                          == 
                                                          (0x140000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU]))) 
                                              | (IData)(
                                                        (0xc00000U 
                                                         == 
                                                         (0xc00000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))) 
                                             | (IData)(
                                                       (0x1400000U 
                                                        == 
                                                        (0x1400000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
                                                         >> 0x19U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i__449(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i__449\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i__194(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i__194\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU]))) 
                                                     | (IData)(
                                                               (0x30U 
                                                                == 
                                                                (0x30U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
                                                    | (IData)(
                                                              (0x50U 
                                                               == 
                                                               (0x50U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU]))) 
                                                | (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
                                               | (IData)(
                                                         (0xaU 
                                                          == 
                                                          (0xaU 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & (((0x800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
                                                        >> 0x14U))) 
                                                 | ((IData)(
                                                            (0xc0000000U 
                                                             == 
                                                             (0xc0000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU]))) 
                                                    << 0xbU)) 
                                                | (0x1800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU] 
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_4(
                                                             (0xeU 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])) 
                                                 << 1U)) 
                                          | (1U & (
                                                   VL_REDXOR_32(
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3cU])) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU]))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU] 
                                                          >> 7U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU]))) 
                                                   | (IData)(
                                                             (0x3000U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
                                                  | (IData)(
                                                            (0x5000U 
                                                             == 
                                                             (0x5000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU]))) 
                                                     | (IData)(
                                                               (0x600U 
                                                                == 
                                                                (0x600U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
                                                    | (IData)(
                                                              (0xa00U 
                                                               == 
                                                               (0xa00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0xe00U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU]))) 
                                                | (IData)(
                                                          (0x30000U 
                                                           == 
                                                           (0x30000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
                                               | (IData)(
                                                         (0x50000U 
                                                          == 
                                                          (0x50000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x70000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU]))) 
                                              | (IData)(
                                                        (0x300000U 
                                                         == 
                                                         (0x300000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
                                             | (IData)(
                                                       (0x500000U 
                                                        == 
                                                        (0x500000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x700000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU] 
                                                         >> 0x17U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i__450(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i__450\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i__195(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i__195\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU]))) 
                                                     | (IData)(
                                                               (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
                                                    | (IData)(
                                                              (0x14U 
                                                               == 
                                                               (0x14U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((0xfffff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU] 
                                                    << 0xbU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU] 
                                                      << 0xcU))) 
                                               | (0x1000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU] 
                                                      << 0xcU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU] 
                                                        >> 0x13U)))) 
                                              | (0x1000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU] 
                                                     << 0xbU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU] 
                                                       >> 0x13U))))) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x60000000U 
                                                           == 
                                                           (0x60000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU]))) 
                                                  | (IData)(
                                                            (0x30000000U 
                                                             == 
                                                             (0x30000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
                                                 | (IData)(
                                                           (0x50000000U 
                                                            == 
                                                            (0x50000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))) 
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])) 
                                              << 2U)) 
                                       | ((2U & (((0xfffffffeU 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU]) 
                                                  ^ 
                                                  (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU] 
                                                   << 1U)) 
                                                 ^ 
                                                 (2U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU] 
                                                     >> 0x1eU)))) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x70000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3dU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU] 
                                                          >> 5U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU]))) 
                                                   | (IData)(
                                                             (0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
                                                  | (IData)(
                                                            (0x1400U 
                                                             == 
                                                             (0x1400U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x300U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU]))) 
                                                     | (IData)(
                                                               (0x180U 
                                                                == 
                                                                (0x180U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
                                                    | (IData)(
                                                              (0x280U 
                                                               == 
                                                               (0x280U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x380U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU]))) 
                                                | (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
                                               | (IData)(
                                                         (0x14000U 
                                                          == 
                                                          (0x14000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU]))) 
                                              | (IData)(
                                                        (0xc0000U 
                                                         == 
                                                         (0xc0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
                                             | (IData)(
                                                       (0x140000U 
                                                        == 
                                                        (0x140000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU] 
                                                         >> 0x15U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i__451(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i__451\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i__196(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i__196\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
                                                         >> 0x14U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU]))) 
                                                     << 0xdU) 
                                                    | (0xffffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
                                                           << 0xcU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
                                                             << 0xdU)))) 
                                                   | (0xffffe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
                                                          << 0xbU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
                                                            << 0xdU))))) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc0000000U 
                                                         == 
                                                         (0xc0000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU]))) 
                                                | (IData)(
                                                          (0x60000000U 
                                                           == 
                                                           (0x60000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
                                               | (IData)(
                                                         (0xa0000000U 
                                                          == 
                                                          (0xa0000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x18000000U 
                                                           == 
                                                           (0x18000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU]))) 
                                                  | (IData)(
                                                            (0xc000000U 
                                                             == 
                                                             (0xc000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
                                                 | (IData)(
                                                           (0x14000000U 
                                                            == 
                                                            (0x14000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))) 
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3eU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU]))) 
                                                   | (IData)(
                                                             (0x300U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))) 
                                                  | (IData)(
                                                            (0x500U 
                                                             == 
                                                             (0x500U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU]))) 
                                                     | (IData)(
                                                               (0x60U 
                                                                == 
                                                                (0x60U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))) 
                                                    | (IData)(
                                                              (0xa0U 
                                                               == 
                                                               (0xa0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_8(
                                                                          (0xe0U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU]))) 
                                                | (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))) 
                                               | (IData)(
                                                         (0x5000U 
                                                          == 
                                                          (0x5000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x7000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU]))) 
                                              | (IData)(
                                                        (0x30000U 
                                                         == 
                                                         (0x30000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))) 
                                             | (IData)(
                                                       (0x50000U 
                                                        == 
                                                        (0x50000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x70000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
                                                         >> 0x13U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i__452(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i__452\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i__197(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i__197\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U] 
                                                         >> 0x12U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U] 
                                                         >> 0x14U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U] 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U] 
                                                         << 0xdU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
                                                           >> 0x12U))) 
                                                    | ((IData)(
                                                               (0xc0000000U 
                                                                == 
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU]))) 
                                                       << 0xdU)) 
                                                   | (0x6000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U] 
                                                          << 0xdU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU] 
                                                            >> 0x11U))))) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x30000000U 
                                                         == 
                                                         (0x30000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU]))) 
                                                | (IData)(
                                                          (0x18000000U 
                                                           == 
                                                           (0x18000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))) 
                                               | (IData)(
                                                         (0x28000000U 
                                                          == 
                                                          (0x28000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x6000000U 
                                                           == 
                                                           (0x6000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU]))) 
                                                  | (IData)(
                                                            (0x3000000U 
                                                             == 
                                                             (0x3000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))) 
                                                 | (IData)(
                                                           (0x5000000U 
                                                            == 
                                                            (0x5000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))) 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])) 
                                               ^ vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U]) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x38000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x7000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x3fU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U] 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U]))) 
                                                   | (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
                                                  | (IData)(
                                                            (0x140U 
                                                             == 
                                                             (0x140U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U]))) 
                                                     | (IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x18U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
                                                    | (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x28U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_8(
                                                                          (0x38U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U]))) 
                                                | (IData)(
                                                          (0xc00U 
                                                           == 
                                                           (0xc00U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
                                               | (IData)(
                                                         (0x1400U 
                                                          == 
                                                          (0x1400U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x1c00U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U]))) 
                                              | (IData)(
                                                        (0xc000U 
                                                         == 
                                                         (0xc000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
                                             | (IData)(
                                                       (0x14000U 
                                                        == 
                                                        (0x14000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U] 
                                                         >> 0x11U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i__453(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i__453\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i__198(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i__198\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U] 
                                                         >> 0x10U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U] 
                                                         >> 0x12U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U]))) 
                                                     | (IData)(
                                                               (0x30000000U 
                                                                == 
                                                                (0x30000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
                                                    | (IData)(
                                                              (0x50000000U 
                                                               == 
                                                               (0x50000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc000000U 
                                                         == 
                                                         (0xc000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U]))) 
                                                | (IData)(
                                                          (0x6000000U 
                                                           == 
                                                           (0x6000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
                                               | (IData)(
                                                         (0xa000000U 
                                                          == 
                                                          (0xa000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x1800000U 
                                                           == 
                                                           (0x1800000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U]))) 
                                                  | (IData)(
                                                            (0xc00000U 
                                                             == 
                                                             (0xc00000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
                                                 | (IData)(
                                                           (0x1400000U 
                                                            == 
                                                            (0x1400000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x40U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U] 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U]))) 
                                                   | (IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
                                                  | (IData)(
                                                            (0x50U 
                                                             == 
                                                             (0x50U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U]))) 
                                                     | (IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
                                                    | (IData)(
                                                              (0xaU 
                                                               == 
                                                               (0xaU 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_4(
                                                                          (0xeU 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U]))) 
                                                | (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
                                               | (IData)(
                                                         (0x500U 
                                                          == 
                                                          (0x500U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x700U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U]))) 
                                              | (IData)(
                                                        (0x3000U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
                                             | (IData)(
                                                       (0x5000U 
                                                        == 
                                                        (0x5000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x7000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U] 
                                                         >> 0xfU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i__454(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i__454\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i__199(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i__199\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U] 
                                                         >> 0xeU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U] 
                                                         >> 0x10U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U]))) 
                                                     | (IData)(
                                                               (0xc000000U 
                                                                == 
                                                                (0xc000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
                                                    | (IData)(
                                                              (0x14000000U 
                                                               == 
                                                               (0x14000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x3000000U 
                                                         == 
                                                         (0x3000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U]))) 
                                                | (IData)(
                                                          (0x1800000U 
                                                           == 
                                                           (0x1800000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
                                               | (IData)(
                                                         (0x2800000U 
                                                          == 
                                                          (0x2800000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x600000U 
                                                           == 
                                                           (0x600000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U]))) 
                                                  | (IData)(
                                                            (0x300000U 
                                                             == 
                                                             (0x300000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
                                                 | (IData)(
                                                           (0x500000U 
                                                            == 
                                                            (0x500000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x3800000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x700000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U] 
                                                          >> 0x1dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U]))) 
                                                   | (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
                                                  | (IData)(
                                                            (0x14U 
                                                             == 
                                                             (0x14U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   ((0xfffc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U] 
                                                         << 0x11U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U] 
                                                           << 0x12U))) 
                                                    | (0x40000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U] 
                                                           << 0x12U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U] 
                                                             >> 0xdU)))) 
                                                   | (0x40000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U] 
                                                          << 0x11U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U] 
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U] 
                                                                 >> 1U) 
                                                                ^ 
                                                                vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U]) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x41U] 
                                                                >> 0x1fU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U]))) 
                                                | (IData)(
                                                          (0xc0U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
                                               | (IData)(
                                                         (0x140U 
                                                          == 
                                                          (0x140U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x1c0U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U]))) 
                                              | (IData)(
                                                        (0xc00U 
                                                         == 
                                                         (0xc00U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
                                             | (IData)(
                                                       (0x1400U 
                                                        == 
                                                        (0x1400U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x1c00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U] 
                                                         >> 0xdU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i__455(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i__455\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i__200(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i__200\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                         >> 0xcU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                         >> 0xeU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U]))) 
                                                     | (IData)(
                                                               (0x3000000U 
                                                                == 
                                                                (0x3000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
                                                    | (IData)(
                                                              (0x5000000U 
                                                               == 
                                                               (0x5000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc00000U 
                                                         == 
                                                         (0xc00000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U]))) 
                                                | (IData)(
                                                          (0x600000U 
                                                           == 
                                                           (0x600000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
                                               | (IData)(
                                                         (0xa00000U 
                                                          == 
                                                          (0xa00000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x180000U 
                                                           == 
                                                           (0x180000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U]))) 
                                                  | (IData)(
                                                            (0xc0000U 
                                                             == 
                                                             (0xc0000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
                                                 | (IData)(
                                                           (0x140000U 
                                                            == 
                                                            (0x140000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U] 
                                                          >> 0x1bU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U]))) 
                                                   << 0x13U) 
                                                  | (0xfff80000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                         << 0x12U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                           << 0x13U)))) 
                                                 | (0xfff80000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                        << 0x11U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                          << 0x13U))))) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc0000000U 
                                                              == 
                                                              (0xc0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U]))) 
                                                     | (IData)(
                                                               (0x60000000U 
                                                                == 
                                                                (0x60000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
                                                    | (IData)(
                                                              (0xa0000000U 
                                                               == 
                                                               (0xa0000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))) 
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe0000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x42U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U]))) 
                                                | (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))) 
                                               | (IData)(
                                                         (0x50U 
                                                          == 
                                                          (0x50U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x70U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U]))) 
                                              | (IData)(
                                                        (0x300U 
                                                         == 
                                                         (0x300U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))) 
                                             | (IData)(
                                                       (0x500U 
                                                        == 
                                                        (0x500U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x700U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                         >> 0xbU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i__456(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i__456\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__201(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__201\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                         >> 0xcU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U]))) 
                                                     | (IData)(
                                                               (0xc00000U 
                                                                == 
                                                                (0xc00000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))) 
                                                    | (IData)(
                                                              (0x1400000U 
                                                               == 
                                                               (0x1400000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x300000U 
                                                         == 
                                                         (0x300000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U]))) 
                                                | (IData)(
                                                          (0x180000U 
                                                           == 
                                                           (0x180000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))) 
                                               | (IData)(
                                                         (0x280000U 
                                                          == 
                                                          (0x280000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x60000U 
                                                           == 
                                                           (0x60000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U]))) 
                                                  | (IData)(
                                                            (0x30000U 
                                                             == 
                                                             (0x30000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))) 
                                                 | (IData)(
                                                           (0x50000U 
                                                            == 
                                                            (0x50000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x380000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x70000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                          >> 0x19U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
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
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                       << 0x13U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                         >> 0xcU))) 
                                                  | ((IData)(
                                                             (0xc0000000U 
                                                              == 
                                                              (0xc0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U]))) 
                                                     << 0x13U)) 
                                                 | (0x180000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                        << 0x13U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                          >> 0xbU))))) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x30000000U 
                                                              == 
                                                              (0x30000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U]))) 
                                                     | (IData)(
                                                               (0x18000000U 
                                                                == 
                                                                (0x18000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))) 
                                                    | (IData)(
                                                              (0x28000000U 
                                                               == 
                                                               (0x28000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))) 
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
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])) 
                                                              ^ 
                                                              vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x38000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U]))) 
                                                | (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
                                               | (IData)(
                                                         (0x14U 
                                                          == 
                                                          (0x14U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x1cU 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U]))) 
                                              | (IData)(
                                                        (0xc0U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
                                             | (IData)(
                                                       (0x140U 
                                                        == 
                                                        (0x140U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x1c0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                         >> 9U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__457(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__457\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__202(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__202\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                         >> 8U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U]))) 
                                                     | (IData)(
                                                               (0x300000U 
                                                                == 
                                                                (0x300000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
                                                    | (IData)(
                                                              (0x500000U 
                                                               == 
                                                               (0x500000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc0000U 
                                                         == 
                                                         (0xc0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U]))) 
                                                | (IData)(
                                                          (0x60000U 
                                                           == 
                                                           (0x60000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
                                               | (IData)(
                                                         (0xa0000U 
                                                          == 
                                                          (0xa0000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x18000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U]))) 
                                                  | (IData)(
                                                            (0xc000U 
                                                             == 
                                                             (0xc000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
                                                 | (IData)(
                                                           (0x14000U 
                                                            == 
                                                            (0x14000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                          >> 0x17U)) 
                                                      | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U]))) 
                                                   | (IData)(
                                                             (0x30000000U 
                                                              == 
                                                              (0x30000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
                                                  | (IData)(
                                                            (0x50000000U 
                                                             == 
                                                             (0x50000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc000000U 
                                                              == 
                                                              (0xc000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U]))) 
                                                     | (IData)(
                                                               (0x6000000U 
                                                                == 
                                                                (0x6000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
                                                    | (IData)(
                                                              (0xa000000U 
                                                               == 
                                                               (0xa000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U]))) 
                                                << 0x17U) 
                                               | (0xff800000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                      << 0x16U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                        << 0x17U)))) 
                                              | (0xff800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                     << 0x15U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                       << 0x17U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_4(
                                                                  (7U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U]))) 
                                              | (IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))) 
                                             | (IData)(
                                                       (0x50U 
                                                        == 
                                                        (0x50U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_8(
                                                              (0x70U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                         >> 7U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__458(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__458\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__203(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__203\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                         >> 6U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                         >> 8U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U]))) 
                                                     | (IData)(
                                                               (0xc0000U 
                                                                == 
                                                                (0xc0000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))) 
                                                    | (IData)(
                                                              (0x140000U 
                                                               == 
                                                               (0x140000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x30000U 
                                                         == 
                                                         (0x30000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U]))) 
                                                | (IData)(
                                                          (0x18000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))) 
                                               | (IData)(
                                                         (0x28000U 
                                                          == 
                                                          (0x28000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x6000U 
                                                           == 
                                                           (0x6000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U]))) 
                                                  | (IData)(
                                                            (0x3000U 
                                                             == 
                                                             (0x3000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))) 
                                                 | (IData)(
                                                           (0x5000U 
                                                            == 
                                                            (0x5000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x38000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x7000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                          >> 0x15U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U]))) 
                                                   | (IData)(
                                                             (0xc000000U 
                                                              == 
                                                              (0xc000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))) 
                                                  | (IData)(
                                                            (0x14000000U 
                                                             == 
                                                             (0x14000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x3000000U 
                                                              == 
                                                              (0x3000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U]))) 
                                                     | (IData)(
                                                               (0x1800000U 
                                                                == 
                                                                (0x1800000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))) 
                                                    | (IData)(
                                                              (0x2800000U 
                                                               == 
                                                               (0x2800000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x3800000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
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
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                    << 0x17U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                      >> 8U))) 
                                               | ((IData)(
                                                          (0xc0000000U 
                                                           == 
                                                           (0xc0000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U]))) 
                                                  << 0x17U)) 
                                              | (0x1800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                     << 0x17U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                       >> 7U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (VL_REDXOR_32(
                                                                    (0xc0000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U])) 
                                                       ^ 
                                                       vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U]))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U]))) 
                                              | (IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
                                             | (IData)(
                                                       (0x14U 
                                                        == 
                                                        (0x14U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_8(
                                                              (0x1cU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                         >> 5U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__459(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__459\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i__204(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i__204\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                         >> 4U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                         >> 6U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U]))) 
                                                     | (IData)(
                                                               (0x30000U 
                                                                == 
                                                                (0x30000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
                                                    | (IData)(
                                                              (0x50000U 
                                                               == 
                                                               (0x50000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc000U 
                                                         == 
                                                         (0xc000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U]))) 
                                                | (IData)(
                                                          (0x6000U 
                                                           == 
                                                           (0x6000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
                                               | (IData)(
                                                         (0xa000U 
                                                          == 
                                                          (0xa000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U]))) 
                                                  | (IData)(
                                                            (0xc00U 
                                                             == 
                                                             (0xc00U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
                                                 | (IData)(
                                                           (0x1400U 
                                                            == 
                                                            (0x1400U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0xe000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x1c00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                          >> 0x13U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U]))) 
                                                   | (IData)(
                                                             (0x3000000U 
                                                              == 
                                                              (0x3000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
                                                  | (IData)(
                                                            (0x5000000U 
                                                             == 
                                                             (0x5000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc00000U 
                                                              == 
                                                              (0xc00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U]))) 
                                                     | (IData)(
                                                               (0x600000U 
                                                                == 
                                                                (0x600000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
                                                    | (IData)(
                                                              (0xa00000U 
                                                               == 
                                                               (0xa00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe00000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U]))) 
                                                | (IData)(
                                                          (0x30000000U 
                                                           == 
                                                           (0x30000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
                                               | (IData)(
                                                         (0x50000000U 
                                                          == 
                                                          (0x50000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x70000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U]))) 
                                              << 0x1aU) 
                                             | (0xfc000000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                    << 0x19U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                      << 0x1aU)))) 
                                            | (0xfc000000U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                   << 0x18U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     << 0x1aU)))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                         >> 3U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i__460(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i__460\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i__205(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i__205\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                         >> 2U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                         >> 4U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U]))) 
                                                     | (IData)(
                                                               (0xc000U 
                                                                == 
                                                                (0xc000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))) 
                                                    | (IData)(
                                                              (0x14000U 
                                                               == 
                                                               (0x14000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x3000U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U]))) 
                                                | (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))) 
                                               | (IData)(
                                                         (0x2800U 
                                                          == 
                                                          (0x2800U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x600U 
                                                           == 
                                                           (0x600U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U]))) 
                                                  | (IData)(
                                                            (0x300U 
                                                             == 
                                                             (0x300U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))) 
                                                 | (IData)(
                                                           (0x500U 
                                                            == 
                                                            (0x500U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0x3800U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x700U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                          >> 0x11U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U]))) 
                                                   | (IData)(
                                                             (0xc00000U 
                                                              == 
                                                              (0xc00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))) 
                                                  | (IData)(
                                                            (0x1400000U 
                                                             == 
                                                             (0x1400000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x300000U 
                                                              == 
                                                              (0x300000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U]))) 
                                                     | (IData)(
                                                               (0x180000U 
                                                                == 
                                                                (0x180000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))) 
                                                    | (IData)(
                                                              (0x280000U 
                                                               == 
                                                               (0x280000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x380000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U]))) 
                                                | (IData)(
                                                          (0xc000000U 
                                                           == 
                                                           (0xc000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))) 
                                               | (IData)(
                                                         (0x14000000U 
                                                          == 
                                                          (0x14000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])))));
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
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                  << 0x1aU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                    >> 5U))) 
                                             | ((IData)(
                                                        (0xc0000000U 
                                                         == 
                                                         (0xc0000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U]))) 
                                                << 0x1aU)) 
                                            | (0xc000000U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                   << 0x1aU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     >> 4U)))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & (VL_REDXOR_32(
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                         >> 1U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i__461(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i__461\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i__206(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i__206\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U]));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                         >> 2U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U]))) 
                                                     | (IData)(
                                                               (0x3000U 
                                                                == 
                                                                (0x3000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
                                                    | (IData)(
                                                              (0x5000U 
                                                               == 
                                                               (0x5000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc00U 
                                                         == 
                                                         (0xc00U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U]))) 
                                                | (IData)(
                                                          (0x600U 
                                                           == 
                                                           (0x600U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
                                               | (IData)(
                                                         (0xa00U 
                                                          == 
                                                          (0xa00U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x180U 
                                                           == 
                                                           (0x180U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U]))) 
                                                  | (IData)(
                                                            (0xc0U 
                                                             == 
                                                             (0xc0U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
                                                 | (IData)(
                                                           (0x140U 
                                                            == 
                                                            (0x140U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0xe00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x1c0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                          >> 0xfU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U]))) 
                                                   | (IData)(
                                                             (0x300000U 
                                                              == 
                                                              (0x300000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
                                                  | (IData)(
                                                            (0x500000U 
                                                             == 
                                                             (0x500000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc0000U 
                                                              == 
                                                              (0xc0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U]))) 
                                                     | (IData)(
                                                               (0x60000U 
                                                                == 
                                                                (0x60000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
                                                    | (IData)(
                                                              (0xa0000U 
                                                               == 
                                                               (0xa0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U]))) 
                                                | (IData)(
                                                          (0x3000000U 
                                                           == 
                                                           (0x3000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
                                               | (IData)(
                                                         (0x5000000U 
                                                          == 
                                                          (0x5000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x7000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U]))) 
                                              | (IData)(
                                                        (0x30000000U 
                                                         == 
                                                         (0x30000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
                                             | (IData)(
                                                       (0x50000000U 
                                                        == 
                                                        (0x50000000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x70000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                      >> 0x1fU));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i__462(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i__462\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i__207(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i__207\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                      >> 0x1eU));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU]));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U]))) 
                                                     | (IData)(
                                                               (0xc00U 
                                                                == 
                                                                (0xc00U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
                                                    | (IData)(
                                                              (0x1400U 
                                                               == 
                                                               (0x1400U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x300U 
                                                         == 
                                                         (0x300U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U]))) 
                                                | (IData)(
                                                          (0x180U 
                                                           == 
                                                           (0x180U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
                                               | (IData)(
                                                         (0x280U 
                                                          == 
                                                          (0x280U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U]))) 
                                                  | (IData)(
                                                            (0x30U 
                                                             == 
                                                             (0x30U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
                                                 | (IData)(
                                                           (0x50U 
                                                            == 
                                                            (0x50U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0x380U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_8(
                                                              (0x70U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                          >> 0xdU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U]))) 
                                                   | (IData)(
                                                             (0xc0000U 
                                                              == 
                                                              (0xc0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
                                                  | (IData)(
                                                            (0x140000U 
                                                             == 
                                                             (0x140000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x30000U 
                                                              == 
                                                              (0x30000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U]))) 
                                                     | (IData)(
                                                               (0x18000U 
                                                                == 
                                                                (0x18000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
                                                    | (IData)(
                                                              (0x28000U 
                                                               == 
                                                               (0x28000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x38000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U]))) 
                                                | (IData)(
                                                          (0xc00000U 
                                                           == 
                                                           (0xc00000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
                                               | (IData)(
                                                         (0x1400000U 
                                                          == 
                                                          (0x1400000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c00000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U]))) 
                                              | (IData)(
                                                        (0xc000000U 
                                                         == 
                                                         (0xc000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
                                             | (IData)(
                                                       (0x14000000U 
                                                        == 
                                                        (0x14000000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                         >> 0x1dU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i__463(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i__463\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i__208(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i__208\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                      >> 0x1eU));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU]))) 
                                                     | (IData)(
                                                               (0x300U 
                                                                == 
                                                                (0x300U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
                                                    | (IData)(
                                                              (0x500U 
                                                               == 
                                                               (0x500U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc0U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU]))) 
                                                | (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
                                               | (IData)(
                                                         (0xa0U 
                                                          == 
                                                          (0xa0U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x18U 
                                                           == 
                                                           (0x18U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU]))) 
                                                  | (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0xcU 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
                                                 | (IData)(
                                                           (0x14U 
                                                            == 
                                                            (0x14U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0xe0U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_8(
                                                              (0x1cU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                          >> 0xbU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU]))) 
                                                   | (IData)(
                                                             (0x30000U 
                                                              == 
                                                              (0x30000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
                                                  | (IData)(
                                                            (0x50000U 
                                                             == 
                                                             (0x50000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc000U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU]))) 
                                                     | (IData)(
                                                               (0x6000U 
                                                                == 
                                                                (0x6000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
                                                    | (IData)(
                                                              (0xa000U 
                                                               == 
                                                               (0xa000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0xe000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU]))) 
                                                | (IData)(
                                                          (0x300000U 
                                                           == 
                                                           (0x300000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
                                               | (IData)(
                                                         (0x500000U 
                                                          == 
                                                          (0x500000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x700000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU]))) 
                                              | (IData)(
                                                        (0x3000000U 
                                                         == 
                                                         (0x3000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
                                             | (IData)(
                                                       (0x5000000U 
                                                        == 
                                                        (0x5000000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x7000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                         >> 0x1bU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i__464(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i__464\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU]))))))))))))));
}
