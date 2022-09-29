// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i__129(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i__129\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U]))) 
                                                     | (IData)(
                                                               (0xc0U 
                                                                == 
                                                                (0xc0U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))) 
                                                    | (IData)(
                                                              (0x140U 
                                                               == 
                                                               (0x140U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U]))) 
                                                | (IData)(
                                                          (0x18U 
                                                           == 
                                                           (0x18U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))) 
                                               | (IData)(
                                                         (0x28U 
                                                          == 
                                                          (0x28U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U]))) 
                                                  << 0xbU) 
                                                 | (0xfffff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                        << 0xaU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                          << 0xbU)))) 
                                                | (0xfffff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                       << 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U]))) 
                                                   | (IData)(
                                                             (0xc000U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))) 
                                                  | (IData)(
                                                            (0x14000U 
                                                             == 
                                                             (0x14000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x3000U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U]))) 
                                                     | (IData)(
                                                               (0x1800U 
                                                                == 
                                                                (0x1800U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))) 
                                                    | (IData)(
                                                              (0x2800U 
                                                               == 
                                                               (0x2800U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U]))) 
                                                | (IData)(
                                                          (0xc0000U 
                                                           == 
                                                           (0xc0000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))) 
                                               | (IData)(
                                                         (0x140000U 
                                                          == 
                                                          (0x140000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U]))) 
                                              | (IData)(
                                                        (0xc00000U 
                                                         == 
                                                         (0xc00000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))) 
                                             | (IData)(
                                                       (0x1400000U 
                                                        == 
                                                        (0x1400000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                         >> 0x19U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i__385(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i__385\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i__130(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i__130\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U]))) 
                                                     | (IData)(
                                                               (0x30U 
                                                                == 
                                                                (0x30U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
                                                    | (IData)(
                                                              (0x50U 
                                                               == 
                                                               (0x50U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U]))) 
                                                | (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
                                               | (IData)(
                                                         (0xaU 
                                                          == 
                                                          (0xaU 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & (((0x800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
                                                        >> 0x14U))) 
                                                 | ((IData)(
                                                            (0xc0000000U 
                                                             == 
                                                             (0xc0000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U]))) 
                                                    << 0xbU)) 
                                                | (0x1800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U] 
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_4(
                                                             (0xeU 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])) 
                                                 << 1U)) 
                                          | (1U & (
                                                   VL_REDXOR_32(
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0U])) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U]))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                          >> 7U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U]))) 
                                                   | (IData)(
                                                             (0x3000U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
                                                  | (IData)(
                                                            (0x5000U 
                                                             == 
                                                             (0x5000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U]))) 
                                                     | (IData)(
                                                               (0x600U 
                                                                == 
                                                                (0x600U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
                                                    | (IData)(
                                                              (0xa00U 
                                                               == 
                                                               (0xa00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0xe00U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U]))) 
                                                | (IData)(
                                                          (0x30000U 
                                                           == 
                                                           (0x30000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
                                               | (IData)(
                                                         (0x50000U 
                                                          == 
                                                          (0x50000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x70000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U]))) 
                                              | (IData)(
                                                        (0x300000U 
                                                         == 
                                                         (0x300000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
                                             | (IData)(
                                                       (0x500000U 
                                                        == 
                                                        (0x500000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x700000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                         >> 0x17U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i__386(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i__386\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[1U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i__131(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i__131\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U]))) 
                                                     | (IData)(
                                                               (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
                                                    | (IData)(
                                                              (0x14U 
                                                               == 
                                                               (0x14U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((0xfffff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                    << 0xbU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                      << 0xcU))) 
                                               | (0x1000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                      << 0xcU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                        >> 0x13U)))) 
                                              | (0x1000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                     << 0xbU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                       >> 0x13U))))) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x60000000U 
                                                           == 
                                                           (0x60000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U]))) 
                                                  | (IData)(
                                                            (0x30000000U 
                                                             == 
                                                             (0x30000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
                                                 | (IData)(
                                                           (0x50000000U 
                                                            == 
                                                            (0x50000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))) 
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])) 
                                              << 2U)) 
                                       | ((2U & (((0xfffffffeU 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U]) 
                                                  ^ 
                                                  (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                   << 1U)) 
                                                 ^ 
                                                 (2U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U] 
                                                     >> 0x1eU)))) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x70000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[1U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                          >> 5U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U]))) 
                                                   | (IData)(
                                                             (0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
                                                  | (IData)(
                                                            (0x1400U 
                                                             == 
                                                             (0x1400U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x300U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U]))) 
                                                     | (IData)(
                                                               (0x180U 
                                                                == 
                                                                (0x180U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
                                                    | (IData)(
                                                              (0x280U 
                                                               == 
                                                               (0x280U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x380U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U]))) 
                                                | (IData)(
                                                          (0xc000U 
                                                           == 
                                                           (0xc000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
                                               | (IData)(
                                                         (0x14000U 
                                                          == 
                                                          (0x14000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U]))) 
                                              | (IData)(
                                                        (0xc0000U 
                                                         == 
                                                         (0xc0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
                                             | (IData)(
                                                       (0x140000U 
                                                        == 
                                                        (0x140000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U] 
                                                         >> 0x15U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i__387(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i__387\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[2U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i__132(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i__132\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                         >> 0x14U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U]))) 
                                                     << 0xdU) 
                                                    | (0xffffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                           << 0xcU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                             << 0xdU)))) 
                                                   | (0xffffe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                          << 0xbU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                            << 0xdU))))) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc0000000U 
                                                         == 
                                                         (0xc0000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U]))) 
                                                | (IData)(
                                                          (0x60000000U 
                                                           == 
                                                           (0x60000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
                                               | (IData)(
                                                         (0xa0000000U 
                                                          == 
                                                          (0xa0000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x18000000U 
                                                           == 
                                                           (0x18000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U]))) 
                                                  | (IData)(
                                                            (0xc000000U 
                                                             == 
                                                             (0xc000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
                                                 | (IData)(
                                                           (0x14000000U 
                                                            == 
                                                            (0x14000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))) 
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[2U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U]))) 
                                                   | (IData)(
                                                             (0x300U 
                                                              == 
                                                              (0x300U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))) 
                                                  | (IData)(
                                                            (0x500U 
                                                             == 
                                                             (0x500U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U]))) 
                                                     | (IData)(
                                                               (0x60U 
                                                                == 
                                                                (0x60U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))) 
                                                    | (IData)(
                                                              (0xa0U 
                                                               == 
                                                               (0xa0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_8(
                                                                          (0xe0U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U]))) 
                                                | (IData)(
                                                          (0x3000U 
                                                           == 
                                                           (0x3000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))) 
                                               | (IData)(
                                                         (0x5000U 
                                                          == 
                                                          (0x5000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x7000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U]))) 
                                              | (IData)(
                                                        (0x30000U 
                                                         == 
                                                         (0x30000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))) 
                                             | (IData)(
                                                       (0x50000U 
                                                        == 
                                                        (0x50000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x70000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                         >> 0x13U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i__388(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i__388\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[3U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i__133(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i__133\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                         >> 0x12U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                         >> 0x14U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                         << 0xdU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                           >> 0x12U))) 
                                                    | ((IData)(
                                                               (0xc0000000U 
                                                                == 
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U]))) 
                                                       << 0xdU)) 
                                                   | (0x6000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                          << 0xdU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U] 
                                                            >> 0x11U))))) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x30000000U 
                                                         == 
                                                         (0x30000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U]))) 
                                                | (IData)(
                                                          (0x18000000U 
                                                           == 
                                                           (0x18000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))) 
                                               | (IData)(
                                                         (0x28000000U 
                                                          == 
                                                          (0x28000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x6000000U 
                                                           == 
                                                           (0x6000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U]))) 
                                                  | (IData)(
                                                            (0x3000000U 
                                                             == 
                                                             (0x3000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))) 
                                                 | (IData)(
                                                           (0x5000000U 
                                                            == 
                                                            (0x5000000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))) 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])) 
                                               ^ vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U]) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x38000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x7000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[3U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U]))) 
                                                   | (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
                                                  | (IData)(
                                                            (0x140U 
                                                             == 
                                                             (0x140U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U]))) 
                                                     | (IData)(
                                                               (0x18U 
                                                                == 
                                                                (0x18U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
                                                    | (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x28U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_8(
                                                                          (0x38U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U]))) 
                                                | (IData)(
                                                          (0xc00U 
                                                           == 
                                                           (0xc00U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
                                               | (IData)(
                                                         (0x1400U 
                                                          == 
                                                          (0x1400U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x1c00U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U]))) 
                                              | (IData)(
                                                        (0xc000U 
                                                         == 
                                                         (0xc000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
                                             | (IData)(
                                                       (0x14000U 
                                                        == 
                                                        (0x14000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
                                                         >> 0x11U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i__389(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i__389\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[4U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i__134(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i__134\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                         >> 0x10U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                         >> 0x12U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U]))) 
                                                     | (IData)(
                                                               (0x30000000U 
                                                                == 
                                                                (0x30000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
                                                    | (IData)(
                                                              (0x50000000U 
                                                               == 
                                                               (0x50000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc000000U 
                                                         == 
                                                         (0xc000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U]))) 
                                                | (IData)(
                                                          (0x6000000U 
                                                           == 
                                                           (0x6000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
                                               | (IData)(
                                                         (0xa000000U 
                                                          == 
                                                          (0xa000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x1800000U 
                                                           == 
                                                           (0x1800000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U]))) 
                                                  | (IData)(
                                                            (0xc00000U 
                                                             == 
                                                             (0xc00000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
                                                 | (IData)(
                                                           (0x1400000U 
                                                            == 
                                                            (0x1400000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[4U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U]))) 
                                                   | (IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
                                                  | (IData)(
                                                            (0x50U 
                                                             == 
                                                             (0x50U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U]))) 
                                                     | (IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
                                                    | (IData)(
                                                              (0xaU 
                                                               == 
                                                               (0xaU 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_4(
                                                                          (0xeU 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U]))) 
                                                | (IData)(
                                                          (0x300U 
                                                           == 
                                                           (0x300U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
                                               | (IData)(
                                                         (0x500U 
                                                          == 
                                                          (0x500U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x700U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U]))) 
                                              | (IData)(
                                                        (0x3000U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
                                             | (IData)(
                                                       (0x5000U 
                                                        == 
                                                        (0x5000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x7000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                         >> 0xfU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i__390(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i__390\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[5U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i__135(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i__135\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                         >> 0xeU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                         >> 0x10U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U]))) 
                                                     | (IData)(
                                                               (0xc000000U 
                                                                == 
                                                                (0xc000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
                                                    | (IData)(
                                                              (0x14000000U 
                                                               == 
                                                               (0x14000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x3000000U 
                                                         == 
                                                         (0x3000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U]))) 
                                                | (IData)(
                                                          (0x1800000U 
                                                           == 
                                                           (0x1800000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
                                               | (IData)(
                                                         (0x2800000U 
                                                          == 
                                                          (0x2800000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x600000U 
                                                           == 
                                                           (0x600000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U]))) 
                                                  | (IData)(
                                                            (0x300000U 
                                                             == 
                                                             (0x300000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
                                                 | (IData)(
                                                           (0x500000U 
                                                            == 
                                                            (0x500000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x3800000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x700000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                          >> 0x1dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U]))) 
                                                   | (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
                                                  | (IData)(
                                                            (0x14U 
                                                             == 
                                                             (0x14U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   ((0xfffc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                         << 0x11U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                           << 0x12U))) 
                                                    | (0x40000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                           << 0x12U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                             >> 0xdU)))) 
                                                   | (0x40000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                          << 0x11U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                                 >> 1U) 
                                                                ^ 
                                                                vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U]) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[5U] 
                                                                >> 0x1fU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U]))) 
                                                | (IData)(
                                                          (0xc0U 
                                                           == 
                                                           (0xc0U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
                                               | (IData)(
                                                         (0x140U 
                                                          == 
                                                          (0x140U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x1c0U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U]))) 
                                              | (IData)(
                                                        (0xc00U 
                                                         == 
                                                         (0xc00U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
                                             | (IData)(
                                                       (0x1400U 
                                                        == 
                                                        (0x1400U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x1c00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                         >> 0xdU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i__391(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i__391\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[6U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i__136(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i__136\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                         >> 0xcU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                         >> 0xeU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U]))) 
                                                     | (IData)(
                                                               (0x3000000U 
                                                                == 
                                                                (0x3000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
                                                    | (IData)(
                                                              (0x5000000U 
                                                               == 
                                                               (0x5000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc00000U 
                                                         == 
                                                         (0xc00000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U]))) 
                                                | (IData)(
                                                          (0x600000U 
                                                           == 
                                                           (0x600000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
                                               | (IData)(
                                                         (0xa00000U 
                                                          == 
                                                          (0xa00000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x180000U 
                                                           == 
                                                           (0x180000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U]))) 
                                                  | (IData)(
                                                            (0xc0000U 
                                                             == 
                                                             (0xc0000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
                                                 | (IData)(
                                                           (0x140000U 
                                                            == 
                                                            (0x140000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U] 
                                                          >> 0x1bU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U]))) 
                                                   << 0x13U) 
                                                  | (0xfff80000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                         << 0x12U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                           << 0x13U)))) 
                                                 | (0xfff80000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                        << 0x11U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                          << 0x13U))))) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc0000000U 
                                                              == 
                                                              (0xc0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U]))) 
                                                     | (IData)(
                                                               (0x60000000U 
                                                                == 
                                                                (0x60000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
                                                    | (IData)(
                                                              (0xa0000000U 
                                                               == 
                                                               (0xa0000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))) 
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe0000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[6U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U]))) 
                                                | (IData)(
                                                          (0x30U 
                                                           == 
                                                           (0x30U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))) 
                                               | (IData)(
                                                         (0x50U 
                                                          == 
                                                          (0x50U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x70U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U]))) 
                                              | (IData)(
                                                        (0x300U 
                                                         == 
                                                         (0x300U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))) 
                                             | (IData)(
                                                       (0x500U 
                                                        == 
                                                        (0x500U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x700U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                         >> 0xbU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i__392(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i__392\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[7U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i__137(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i__137\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                         >> 0xcU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U]))) 
                                                     | (IData)(
                                                               (0xc00000U 
                                                                == 
                                                                (0xc00000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))) 
                                                    | (IData)(
                                                              (0x1400000U 
                                                               == 
                                                               (0x1400000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x300000U 
                                                         == 
                                                         (0x300000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U]))) 
                                                | (IData)(
                                                          (0x180000U 
                                                           == 
                                                           (0x180000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))) 
                                               | (IData)(
                                                         (0x280000U 
                                                          == 
                                                          (0x280000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x60000U 
                                                           == 
                                                           (0x60000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U]))) 
                                                  | (IData)(
                                                            (0x30000U 
                                                             == 
                                                             (0x30000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))) 
                                                 | (IData)(
                                                           (0x50000U 
                                                            == 
                                                            (0x50000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x380000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x70000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                          >> 0x19U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
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
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                       << 0x13U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                         >> 0xcU))) 
                                                  | ((IData)(
                                                             (0xc0000000U 
                                                              == 
                                                              (0xc0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U]))) 
                                                     << 0x13U)) 
                                                 | (0x180000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                        << 0x13U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U] 
                                                          >> 0xbU))))) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x30000000U 
                                                              == 
                                                              (0x30000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U]))) 
                                                     | (IData)(
                                                               (0x18000000U 
                                                                == 
                                                                (0x18000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))) 
                                                    | (IData)(
                                                              (0x28000000U 
                                                               == 
                                                               (0x28000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))) 
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
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])) 
                                                              ^ 
                                                              vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x38000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[7U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U]))) 
                                                | (IData)(
                                                          (0xcU 
                                                           == 
                                                           (0xcU 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
                                               | (IData)(
                                                         (0x14U 
                                                          == 
                                                          (0x14U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x1cU 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U]))) 
                                              | (IData)(
                                                        (0xc0U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
                                             | (IData)(
                                                       (0x140U 
                                                        == 
                                                        (0x140U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x1c0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                         >> 9U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i__393(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i__393\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[8U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i__138(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i__138\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                         >> 8U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U]))) 
                                                     | (IData)(
                                                               (0x300000U 
                                                                == 
                                                                (0x300000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
                                                    | (IData)(
                                                              (0x500000U 
                                                               == 
                                                               (0x500000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc0000U 
                                                         == 
                                                         (0xc0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U]))) 
                                                | (IData)(
                                                          (0x60000U 
                                                           == 
                                                           (0x60000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
                                               | (IData)(
                                                         (0xa0000U 
                                                          == 
                                                          (0xa0000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x18000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U]))) 
                                                  | (IData)(
                                                            (0xc000U 
                                                             == 
                                                             (0xc000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
                                                 | (IData)(
                                                           (0x14000U 
                                                            == 
                                                            (0x14000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
                                                          >> 0x17U)) 
                                                      | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U]))) 
                                                   | (IData)(
                                                             (0x30000000U 
                                                              == 
                                                              (0x30000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
                                                  | (IData)(
                                                            (0x50000000U 
                                                             == 
                                                             (0x50000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc000000U 
                                                              == 
                                                              (0xc000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U]))) 
                                                     | (IData)(
                                                               (0x6000000U 
                                                                == 
                                                                (0x6000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
                                                    | (IData)(
                                                              (0xa000000U 
                                                               == 
                                                               (0xa000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[8U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U]))) 
                                                << 0x17U) 
                                               | (0xff800000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                      << 0x16U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                        << 0x17U)))) 
                                              | (0xff800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                     << 0x15U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                       << 0x17U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_4(
                                                                  (7U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U]))) 
                                              | (IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))) 
                                             | (IData)(
                                                       (0x50U 
                                                        == 
                                                        (0x50U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_8(
                                                              (0x70U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                         >> 7U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i__394(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i__394\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[9U]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i__139(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i__139\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                         >> 6U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                         >> 8U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U]))) 
                                                     | (IData)(
                                                               (0xc0000U 
                                                                == 
                                                                (0xc0000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))) 
                                                    | (IData)(
                                                              (0x140000U 
                                                               == 
                                                               (0x140000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x30000U 
                                                         == 
                                                         (0x30000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U]))) 
                                                | (IData)(
                                                          (0x18000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))) 
                                               | (IData)(
                                                         (0x28000U 
                                                          == 
                                                          (0x28000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x6000U 
                                                           == 
                                                           (0x6000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U]))) 
                                                  | (IData)(
                                                            (0x3000U 
                                                             == 
                                                             (0x3000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))) 
                                                 | (IData)(
                                                           (0x5000U 
                                                            == 
                                                            (0x5000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x38000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x7000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                          >> 0x15U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U]))) 
                                                   | (IData)(
                                                             (0xc000000U 
                                                              == 
                                                              (0xc000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))) 
                                                  | (IData)(
                                                            (0x14000000U 
                                                             == 
                                                             (0x14000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x3000000U 
                                                              == 
                                                              (0x3000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U]))) 
                                                     | (IData)(
                                                               (0x1800000U 
                                                                == 
                                                                (0x1800000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))) 
                                                    | (IData)(
                                                              (0x2800000U 
                                                               == 
                                                               (0x2800000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x3800000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
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
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                    << 0x17U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                      >> 8U))) 
                                               | ((IData)(
                                                          (0xc0000000U 
                                                           == 
                                                           (0xc0000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U]))) 
                                                  << 0x17U)) 
                                              | (0x1800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                     << 0x17U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U] 
                                                       >> 7U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (VL_REDXOR_32(
                                                                    (0xc0000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[9U])) 
                                                       ^ 
                                                       vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU]))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU]))) 
                                              | (IData)(
                                                        (0xcU 
                                                         == 
                                                         (0xcU 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
                                             | (IData)(
                                                       (0x14U 
                                                        == 
                                                        (0x14U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_8(
                                                              (0x1cU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                         >> 5U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i__395(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i__395\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xaU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i__140(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i__140\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                         >> 4U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                         >> 6U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU]))) 
                                                     | (IData)(
                                                               (0x30000U 
                                                                == 
                                                                (0x30000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
                                                    | (IData)(
                                                              (0x50000U 
                                                               == 
                                                               (0x50000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc000U 
                                                         == 
                                                         (0xc000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU]))) 
                                                | (IData)(
                                                          (0x6000U 
                                                           == 
                                                           (0x6000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
                                               | (IData)(
                                                         (0xa000U 
                                                          == 
                                                          (0xa000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU]))) 
                                                  | (IData)(
                                                            (0xc00U 
                                                             == 
                                                             (0xc00U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
                                                 | (IData)(
                                                           (0x1400U 
                                                            == 
                                                            (0x1400U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0xe000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x1c00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
                                                          >> 0x13U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU]))) 
                                                   | (IData)(
                                                             (0x3000000U 
                                                              == 
                                                              (0x3000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
                                                  | (IData)(
                                                            (0x5000000U 
                                                             == 
                                                             (0x5000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc00000U 
                                                              == 
                                                              (0xc00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU]))) 
                                                     | (IData)(
                                                               (0x600000U 
                                                                == 
                                                                (0x600000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
                                                    | (IData)(
                                                              (0xa00000U 
                                                               == 
                                                               (0xa00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe00000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU]))) 
                                                | (IData)(
                                                          (0x30000000U 
                                                           == 
                                                           (0x30000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
                                               | (IData)(
                                                         (0x50000000U 
                                                          == 
                                                          (0x50000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x70000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xaU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU]))) 
                                              << 0x1aU) 
                                             | (0xfc000000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                    << 0x19U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                      << 0x1aU)))) 
                                            | (0xfc000000U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                   << 0x18U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                     << 0x1aU)))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                         >> 3U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i__396(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i__396\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xbU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i__141(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i__141\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                         >> 2U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                         >> 4U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU]))) 
                                                     | (IData)(
                                                               (0xc000U 
                                                                == 
                                                                (0xc000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))) 
                                                    | (IData)(
                                                              (0x14000U 
                                                               == 
                                                               (0x14000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x3000U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU]))) 
                                                | (IData)(
                                                          (0x1800U 
                                                           == 
                                                           (0x1800U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))) 
                                               | (IData)(
                                                         (0x2800U 
                                                          == 
                                                          (0x2800U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x600U 
                                                           == 
                                                           (0x600U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU]))) 
                                                  | (IData)(
                                                            (0x300U 
                                                             == 
                                                             (0x300U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))) 
                                                 | (IData)(
                                                           (0x500U 
                                                            == 
                                                            (0x500U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0x3800U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x700U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                          >> 0x11U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU]))) 
                                                   | (IData)(
                                                             (0xc00000U 
                                                              == 
                                                              (0xc00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))) 
                                                  | (IData)(
                                                            (0x1400000U 
                                                             == 
                                                             (0x1400000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x300000U 
                                                              == 
                                                              (0x300000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU]))) 
                                                     | (IData)(
                                                               (0x180000U 
                                                                == 
                                                                (0x180000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))) 
                                                    | (IData)(
                                                              (0x280000U 
                                                               == 
                                                               (0x280000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x380000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU]))) 
                                                | (IData)(
                                                          (0xc000000U 
                                                           == 
                                                           (0xc000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))) 
                                               | (IData)(
                                                         (0x14000000U 
                                                          == 
                                                          (0x14000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])))));
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
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                  << 0x1aU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                    >> 5U))) 
                                             | ((IData)(
                                                        (0xc0000000U 
                                                         == 
                                                         (0xc0000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU]))) 
                                                << 0x1aU)) 
                                            | (0xc000000U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                   << 0x1aU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU] 
                                                     >> 4U)))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & (VL_REDXOR_32(
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xbU])) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                         >> 1U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i__397(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i__397\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xcU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i__142(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i__142\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU]));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                         >> 2U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU]))) 
                                                     | (IData)(
                                                               (0x3000U 
                                                                == 
                                                                (0x3000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
                                                    | (IData)(
                                                              (0x5000U 
                                                               == 
                                                               (0x5000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc00U 
                                                         == 
                                                         (0xc00U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU]))) 
                                                | (IData)(
                                                          (0x600U 
                                                           == 
                                                           (0x600U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
                                               | (IData)(
                                                         (0xa00U 
                                                          == 
                                                          (0xa00U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x180U 
                                                           == 
                                                           (0x180U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU]))) 
                                                  | (IData)(
                                                            (0xc0U 
                                                             == 
                                                             (0xc0U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
                                                 | (IData)(
                                                           (0x140U 
                                                            == 
                                                            (0x140U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0xe00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x1c0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                          >> 0xfU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU]))) 
                                                   | (IData)(
                                                             (0x300000U 
                                                              == 
                                                              (0x300000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
                                                  | (IData)(
                                                            (0x500000U 
                                                             == 
                                                             (0x500000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc0000U 
                                                              == 
                                                              (0xc0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU]))) 
                                                     | (IData)(
                                                               (0x60000U 
                                                                == 
                                                                (0x60000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
                                                    | (IData)(
                                                              (0xa0000U 
                                                               == 
                                                               (0xa0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU]))) 
                                                | (IData)(
                                                          (0x3000000U 
                                                           == 
                                                           (0x3000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
                                               | (IData)(
                                                         (0x5000000U 
                                                          == 
                                                          (0x5000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x7000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU]))) 
                                              | (IData)(
                                                        (0x30000000U 
                                                         == 
                                                         (0x30000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
                                             | (IData)(
                                                       (0x50000000U 
                                                        == 
                                                        (0x50000000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x70000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xcU] 
                                                      >> 0x1fU));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i__398(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i__398\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xdU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i__143(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i__143\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                      >> 0x1eU));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU]));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU]))) 
                                                     | (IData)(
                                                               (0xc00U 
                                                                == 
                                                                (0xc00U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
                                                    | (IData)(
                                                              (0x1400U 
                                                               == 
                                                               (0x1400U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0x300U 
                                                         == 
                                                         (0x300U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU]))) 
                                                | (IData)(
                                                          (0x180U 
                                                           == 
                                                           (0x180U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
                                               | (IData)(
                                                         (0x280U 
                                                          == 
                                                          (0x280U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU]))) 
                                                  | (IData)(
                                                            (0x30U 
                                                             == 
                                                             (0x30U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
                                                 | (IData)(
                                                           (0x50U 
                                                            == 
                                                            (0x50U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0x380U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_8(
                                                              (0x70U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                          >> 0xdU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU]))) 
                                                   | (IData)(
                                                             (0xc0000U 
                                                              == 
                                                              (0xc0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
                                                  | (IData)(
                                                            (0x140000U 
                                                             == 
                                                             (0x140000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0x30000U 
                                                              == 
                                                              (0x30000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU]))) 
                                                     | (IData)(
                                                               (0x18000U 
                                                                == 
                                                                (0x18000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
                                                    | (IData)(
                                                              (0x28000U 
                                                               == 
                                                               (0x28000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x38000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU]))) 
                                                | (IData)(
                                                          (0xc00000U 
                                                           == 
                                                           (0xc00000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
                                               | (IData)(
                                                         (0x1400000U 
                                                          == 
                                                          (0x1400000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c00000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU]))) 
                                              | (IData)(
                                                        (0xc000000U 
                                                         == 
                                                         (0xc000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
                                             | (IData)(
                                                       (0x14000000U 
                                                        == 
                                                        (0x14000000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xdU] 
                                                         >> 0x1dU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i__399(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i__399\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xeU]))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i__144(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i__144\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                      >> 0x1eU));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
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
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU]))) 
                                                     | (IData)(
                                                               (0x300U 
                                                                == 
                                                                (0x300U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
                                                    | (IData)(
                                                              (0x500U 
                                                               == 
                                                               (0x500U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((((IData)(
                                                        (0xc0U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU]))) 
                                                | (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
                                               | (IData)(
                                                         (0xa0U 
                                                          == 
                                                          (0xa0U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
                                              << 0xcU)) 
                                          | (0x800U 
                                             & ((((IData)(
                                                          (0x18U 
                                                           == 
                                                           (0x18U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU]))) 
                                                  | (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0xcU 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
                                                 | (IData)(
                                                           (0x14U 
                                                            == 
                                                            (0x14U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0xe0U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_8(
                                                              (0x1cU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                          >> 0xbU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU]))) 
                                                   | (IData)(
                                                             (0x30000U 
                                                              == 
                                                              (0x30000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
                                                  | (IData)(
                                                            (0x50000U 
                                                             == 
                                                             (0x50000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
                                                 << 0x13U)) 
                                    | (0x40000U & (
                                                   (((IData)(
                                                             (0xc000U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU]))) 
                                                     | (IData)(
                                                               (0x6000U 
                                                                == 
                                                                (0x6000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
                                                    | (IData)(
                                                              (0xa000U 
                                                               == 
                                                               (0xa000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0xe000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
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
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU]))) 
                                                | (IData)(
                                                          (0x300000U 
                                                           == 
                                                           (0x300000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
                                               | (IData)(
                                                         (0x500000U 
                                                          == 
                                                          (0x500000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
                                              << 0x17U)))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x700000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))));
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
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU]))) 
                                              | (IData)(
                                                        (0x3000000U 
                                                         == 
                                                         (0x3000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
                                             | (IData)(
                                                       (0x5000000U 
                                                        == 
                                                        (0x5000000U 
                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU])))) 
                                            << 0x1aU))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x7000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0xeU] 
                                                         >> 0x1bU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i__400(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i__400\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0xfU]))))))))))))));
}
