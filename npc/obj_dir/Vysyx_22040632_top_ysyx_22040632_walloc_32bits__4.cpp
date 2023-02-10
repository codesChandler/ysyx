// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"
#include "Vysyx_22040632_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i__177(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i__177\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                        | ((0x20000U & ((((0x600U == 
                                           (0x600U 
                                            & (IData)(vlSelf->__PVT__first_s))) 
                                          | (0x300U 
                                             == (0x300U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                         | (0x500U 
                                            == (0x500U 
                                                & (IData)(vlSelf->__PVT__first_s)))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->__PVT__first_s))) 
                                             | (0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                            | (0xa0U 
                                               == (0xa0U 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->__PVT__first_s))) 
                                               | (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                              | (0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSelf->__PVT__first_s)))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                      << 5U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                        << 6U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                        << 6U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                          << 7U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                       << 5U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         << 7U)))) 
                                       | ((0x1000U 
                                           & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 << 7U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   << 8U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   << 8U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                     << 9U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  << 7U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    << 9U)))) 
                                          | (0x800U 
                                             & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   << 9U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                     << 0xaU)) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                     << 0xaU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                       << 0xbU))) 
                                                | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    << 9U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                      << 0xbU)))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_32(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_32(
                                                       (0xe0U 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
                                           << 3U)) 
                                    | ((4U & (((0x3fffffcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   >> 6U)) 
                                               ^ (0x7fffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                     >> 5U))) 
                                              ^ (0xffffffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    >> 4U)))) 
                                       | ((2U & (((0xffffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                      >> 4U)) 
                                                  ^ 
                                                  (0x1ffffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                      >> 3U))) 
                                                 ^ 
                                                 (0x3ffffffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                     >> 2U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                     >> 2U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                     >> 1U)) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU]))))))));
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
                        | ((0x400000U & ((((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
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
                                 | ((0x80000U & (((
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    << 3U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                      << 4U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                      << 4U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                        << 5U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                     << 3U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                       << 5U)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                      << 5U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                        << 6U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                        << 6U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                          << 7U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                       << 5U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         << 7U)))))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_32(
                                                     (0x70U 
                                                      & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_32(
                                                                    (0xeU 
                                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((0x1fffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                                  >> 0xfU)) 
                                                              ^ 
                                                              (0x3fffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                                  >> 0xeU))) 
                                                             ^ 
                                                             (0x7fffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                                 >> 0xdU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                                 >> 0xdU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                                 >> 0xcU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                                >> 0xbU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         >> 0x15U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSelf->__PVT__third_s)))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 << 3U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   << 4U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   << 4U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                     << 5U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  << 3U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    << 5U)))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         >> 0x14U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         >> 0x13U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                        >> 0x12U)))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__PVT__fourth_s))) 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                               << 2U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 << 3U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                 << 3U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                   << 4U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                << 2U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                  << 4U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                     >> 0x18U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                     >> 0x17U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    >> 0x16U))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x30U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i__178(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i__178\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                        | ((0x20000U & ((((0x600U == 
                                           (0x600U 
                                            & (IData)(vlSelf->__PVT__first_s))) 
                                          | (0x300U 
                                             == (0x300U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                         | (0x500U 
                                            == (0x500U 
                                                & (IData)(vlSelf->__PVT__first_s)))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->__PVT__first_s))) 
                                             | (0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                            | (0xa0U 
                                               == (0xa0U 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->__PVT__first_s))) 
                                               | (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                              | (0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSelf->__PVT__first_s)))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                      << 7U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                        << 8U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                        << 8U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                          << 9U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                       << 7U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                         << 9U)))) 
                                       | ((0x1000U 
                                           & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 << 9U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   << 0xaU)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   << 0xaU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                     << 0xbU))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  << 9U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    << 0xbU)))) 
                                          | (0x800U 
                                             & ((0x800U 
                                                 & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                        >> 0x14U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                        >> 0x14U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                          >> 0x13U)))) 
                                                | (0x1800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                         >> 0x13U))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_32(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_32(
                                                       (0xe0U 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
                                           << 3U)) 
                                    | ((4U & (((0xffffffcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   >> 4U)) 
                                               ^ (0x1ffffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                     >> 3U))) 
                                              ^ (0x3ffffffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    >> 2U)))) 
                                       | ((2U & (((0x3ffffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                      >> 2U)) 
                                                  ^ 
                                                  (0x7ffffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                      >> 1U))) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU]))) 
                                          | (1U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                     >> 0x1fU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2dU] 
                                                    >> 0x1eU)))))))));
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
                        | ((0x400000U & ((((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
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
                                 | ((0x80000U & (((
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    << 5U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                      << 6U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                      << 6U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                        << 7U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                     << 5U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                       << 7U)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                      << 7U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                        << 8U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                        << 8U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                          << 9U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                       << 7U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                         << 9U)))))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_32(
                                                     (0x70U 
                                                      & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_32(
                                                                    (0xeU 
                                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((0x7fffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                                  >> 0xdU)) 
                                                              ^ 
                                                              (0xffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                                  >> 0xcU))) 
                                                             ^ 
                                                             (0x1ffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                                 >> 0xbU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                                 >> 0xbU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                                 >> 0xaU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                                >> 9U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                         >> 0x13U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSelf->__PVT__third_s)))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 << 5U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   << 6U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   << 6U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                     << 7U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  << 5U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    << 7U)))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                         >> 0x12U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                         >> 0x11U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                        >> 0x10U)))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__PVT__fourth_s))) 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                               << 4U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 << 5U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                 << 5U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                   << 6U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                << 4U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                  << 6U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                     >> 0x16U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                     >> 0x15U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    >> 0x14U))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x31U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__179(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__179\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                        | ((0x20000U & ((((0x600U == 
                                           (0x600U 
                                            & (IData)(vlSelf->__PVT__first_s))) 
                                          | (0x300U 
                                             == (0x300U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                         | (0x500U 
                                            == (0x500U 
                                                & (IData)(vlSelf->__PVT__first_s)))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->__PVT__first_s))) 
                                             | (0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                            | (0xa0U 
                                               == (0xa0U 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->__PVT__first_s))) 
                                               | (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                              | (0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSelf->__PVT__first_s)))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                      << 9U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                        << 0xaU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                        << 0xaU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                          << 0xbU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                       << 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                         << 0xbU)))) 
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
                                             & (((0x1800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                      >> 0x13U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                        >> 0x12U))) 
                                                 | (0x3800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                        >> 0x12U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                          >> 0x11U)))) 
                                                | (0x1800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                       >> 0x13U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                         >> 0x11U))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_32(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_32(
                                                       (0xe0U 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
                                           << 3U)) 
                                    | ((4U & (((0x3ffffffcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   >> 2U)) 
                                               ^ (0x7ffffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                     >> 1U))) 
                                              ^ (0xfffffffcU 
                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]))) 
                                       | ((2U & (((0xfffffffeU 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU]) 
                                                  ^ 
                                                  (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   << 1U)) 
                                                 ^ 
                                                 (2U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                     >> 0x1eU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                     >> 0x1eU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                     >> 0x1dU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2eU] 
                                                    >> 0x1cU)))))))));
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
                        | ((0x400000U & ((((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
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
                                 | ((0x80000U & (((
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    << 7U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                      << 8U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                      << 8U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                        << 9U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                     << 7U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                       << 9U)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                      << 9U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                        << 0xaU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                        << 0xaU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                          << 0xbU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                       << 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                         << 0xbU)))))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_32(
                                                     (0x70U 
                                                      & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_32(
                                                                    (0xeU 
                                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((0x1ffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                                  >> 0xbU)) 
                                                              ^ 
                                                              (0x3ffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                                  >> 0xaU))) 
                                                             ^ 
                                                             (0x7ffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                                 >> 9U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                                 >> 9U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                                 >> 8U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                                >> 7U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                         >> 0x11U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSelf->__PVT__third_s)))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 << 7U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   << 8U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   << 8U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                     << 9U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  << 7U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    << 9U)))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                         >> 0x10U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                         >> 0xfU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                        >> 0xeU)))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__PVT__fourth_s))) 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                               << 6U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 << 7U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                 << 7U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                   << 8U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                << 6U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                  << 8U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                     >> 0x14U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                     >> 0x13U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    >> 0x12U))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x32U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__180(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__180\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                         >> 0x14U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                        | ((0x20000U & ((((0x600U == 
                                           (0x600U 
                                            & (IData)(vlSelf->__PVT__first_s))) 
                                          | (0x300U 
                                             == (0x300U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                         | (0x500U 
                                            == (0x500U 
                                                & (IData)(vlSelf->__PVT__first_s)))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->__PVT__first_s))) 
                                             | (0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                            | (0xa0U 
                                               == (0xa0U 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->__PVT__first_s))) 
                                               | (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                              | (0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSelf->__PVT__first_s)))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                        << 0xcU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                        << 0xcU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                          << 0xdU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                         << 0xdU)))) 
                                       | ((0x1000U 
                                           & (((0x1000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    >> 0x13U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                      >> 0x12U))) 
                                               | (0x3000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                      >> 0x12U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                        >> 0x11U)))) 
                                              | (0x1000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                     >> 0x13U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                       >> 0x11U))))) 
                                          | (0x800U 
                                             & (((0x7800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                      >> 0x11U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                        >> 0x10U))) 
                                                 | (0xf800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                        >> 0x10U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                          >> 0xfU)))) 
                                                | (0x7800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                       >> 0x11U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                         >> 0xfU))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_32(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_32(
                                                       (0xe0U 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
                                           << 3U)) 
                                    | ((4U & (((0xfffffffcU 
                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U]) 
                                               ^ (0xfffffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                     << 1U))) 
                                              ^ (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 << 2U))) 
                                       | ((2U & (((2U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                      >> 0x1eU)) 
                                                  ^ 
                                                  (6U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                      >> 0x1dU))) 
                                                 ^ 
                                                 (0xeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                     >> 0x1cU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                     >> 0x1cU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                     >> 0x1bU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x2fU] 
                                                    >> 0x1aU)))))))));
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
                        | ((0x400000U & ((((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
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
                                 | ((0x80000U & (((
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    << 9U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                      << 0xaU)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                      << 0xaU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                        << 0xbU))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                     << 9U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                       << 0xbU)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                        << 0xcU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                        << 0xcU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                          << 0xdU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                         << 0xdU)))))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_32(
                                                     (0x70U 
                                                      & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_32(
                                                                    (0xeU 
                                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((0x7ffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                                  >> 9U)) 
                                                              ^ 
                                                              (0xfffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                                  >> 8U))) 
                                                             ^ 
                                                             (0x1fffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                                 >> 7U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                                 >> 7U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                                 >> 6U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                                >> 5U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                         >> 0xfU)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSelf->__PVT__third_s)))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 << 9U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                   << 0xaU)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                   << 0xaU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                     << 0xbU))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  << 9U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    << 0xbU)))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                         >> 0xeU) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                         >> 0xdU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                        >> 0xcU)))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__PVT__fourth_s))) 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                               << 8U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 << 9U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                 << 9U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                   << 0xaU))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                << 8U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                  << 0xaU))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                     >> 0x12U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                     >> 0x11U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    >> 0x10U))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x33U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__181(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__181\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         >> 0x12U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                        | ((0x20000U & ((((0x600U == 
                                           (0x600U 
                                            & (IData)(vlSelf->__PVT__first_s))) 
                                          | (0x300U 
                                             == (0x300U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                         | (0x500U 
                                            == (0x500U 
                                                & (IData)(vlSelf->__PVT__first_s)))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->__PVT__first_s))) 
                                             | (0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                            | (0xa0U 
                                               == (0xa0U 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->__PVT__first_s))) 
                                               | (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                              | (0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSelf->__PVT__first_s)))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
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
                                                   (0x2000U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         << 0xdU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                           >> 0x12U)) 
                                                       | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                           >> 0x12U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                             >> 0x11U)))) 
                                                   | (0x6000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                          << 0xdU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                            >> 0x11U))))) 
                                       | ((0x1000U 
                                           & (((0x7000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    >> 0x11U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                      >> 0x10U))) 
                                               | (0xf000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                      >> 0x10U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                        >> 0xfU)))) 
                                              | (0x7000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                     >> 0x11U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                       >> 0xfU))))) 
                                          | (0x800U 
                                             & (((0x1f800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                      >> 0xfU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                        >> 0xeU))) 
                                                 | (0x3f800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                        >> 0xeU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                          >> 0xdU)))) 
                                                | (0x1f800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                       >> 0xfU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                         >> 0xdU))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_32(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_32(
                                                       (0xe0U 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
                                           << 3U)) 
                                    | ((4U & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                << 2U) 
                                               ^ (4U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                     >> 0x1dU))) 
                                              ^ (0xcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    >> 0x1cU)))) 
                                       | ((2U & (((0xeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                      >> 0x1cU)) 
                                                  ^ 
                                                  (0x1eU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                      >> 0x1bU))) 
                                                 ^ 
                                                 (0x3eU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                     >> 0x1aU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                     >> 0x1aU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                     >> 0x19U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x30U] 
                                                    >> 0x18U)))))))));
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
                        | ((0x400000U & ((((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
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
                                 | ((0x80000U & (((
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    << 0xbU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                      << 0xcU)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                      << 0xcU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                        << 0xdU))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                     << 0xbU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                       << 0xdU)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                      << 0xdU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                        << 0xeU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                        << 0xeU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                          << 0xfU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                       << 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         << 0xfU)))))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_32(
                                                     (0x70U 
                                                      & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_32(
                                                                    (0xeU 
                                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((0x1fffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                                  >> 7U)) 
                                                              ^ 
                                                              (0x3fffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                                  >> 6U))) 
                                                             ^ 
                                                             (0x7fffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                                 >> 5U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                                 >> 5U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                                 >> 4U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                                >> 3U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         >> 0xdU)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSelf->__PVT__third_s)))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 << 0xbU) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                   << 0xcU)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                   << 0xcU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                     << 0xdU))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  << 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    << 0xdU)))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         >> 0xcU) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         >> 0xbU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                        >> 0xaU)))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__PVT__fourth_s))) 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                               << 0xaU) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 << 0xbU)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                 << 0xbU) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                   << 0xcU))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                << 0xaU) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                  << 0xcU))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                     >> 0x10U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                     >> 0xfU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    >> 0xeU))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x34U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__182(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__182\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                         >> 0x10U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                        | ((0x20000U & ((((0x600U == 
                                           (0x600U 
                                            & (IData)(vlSelf->__PVT__first_s))) 
                                          | (0x300U 
                                             == (0x300U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                         | (0x500U 
                                            == (0x500U 
                                                & (IData)(vlSelf->__PVT__first_s)))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->__PVT__first_s))) 
                                             | (0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                            | (0xa0U 
                                               == (0xa0U 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->__PVT__first_s))) 
                                               | (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                              | (0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSelf->__PVT__first_s)))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
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
                                                   ((0x6000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         >> 0x11U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                           >> 0x10U))) 
                                                    | (0xe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                           >> 0x10U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                             >> 0xfU)))) 
                                                   | (0x6000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                          >> 0x11U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                            >> 0xfU))))) 
                                       | ((0x1000U 
                                           & (((0x1f000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                      >> 0xeU))) 
                                               | (0x3f000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                        >> 0xdU)))) 
                                              | (0x1f000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                       >> 0xdU))))) 
                                          | (0x800U 
                                             & (((0x7f800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                      >> 0xdU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                        >> 0xcU))) 
                                                 | (0xff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                        >> 0xcU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                          >> 0xbU)))) 
                                                | (0x7f800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                         >> 0xbU))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_32(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_32(
                                                       (0xe0U 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
                                           << 3U)) 
                                    | ((4U & (((0xcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                   >> 0x1cU)) 
                                               ^ (0x1cU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                     >> 0x1bU))) 
                                              ^ (0x3cU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    >> 0x1aU)))) 
                                       | ((2U & (((0x3eU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                      >> 0x1aU)) 
                                                  ^ 
                                                  (0x7eU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                      >> 0x19U))) 
                                                 ^ 
                                                 (0xfeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                     >> 0x18U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                     >> 0x18U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                     >> 0x17U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x31U] 
                                                    >> 0x16U)))))))));
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
                        | ((0x400000U & ((((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
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
                                 | ((0x80000U & (((
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    << 0xdU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                      << 0xeU)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                      << 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                        << 0xfU))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                     << 0xdU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                       << 0xfU)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                      << 0xfU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                        << 0x10U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                        << 0x10U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                          << 0x11U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                       << 0xfU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                         << 0x11U)))))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_32(
                                                     (0x70U 
                                                      & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_32(
                                                                    (0xeU 
                                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((0x7fffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                                  >> 5U)) 
                                                              ^ 
                                                              (0xffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                                  >> 4U))) 
                                                             ^ 
                                                             (0x1ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                                 >> 3U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                                 >> 3U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                                 >> 2U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                                >> 1U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                         >> 0xbU)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSelf->__PVT__third_s)))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 << 0xdU) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                   << 0xeU)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                   << 0xeU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                     << 0xfU))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  << 0xdU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    << 0xfU)))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                         >> 0xaU) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                         >> 9U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                        >> 8U)))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__PVT__fourth_s))) 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                               << 0xcU) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 << 0xdU)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                 << 0xdU) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                   << 0xeU))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                << 0xcU) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                  << 0xeU))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                     >> 0xeU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                     >> 0xdU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    >> 0xcU))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x35U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__183(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__183\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                         >> 0xeU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                        | ((0x20000U & ((((0x600U == 
                                           (0x600U 
                                            & (IData)(vlSelf->__PVT__first_s))) 
                                          | (0x300U 
                                             == (0x300U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                         | (0x500U 
                                            == (0x500U 
                                                & (IData)(vlSelf->__PVT__first_s)))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->__PVT__first_s))) 
                                             | (0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                            | (0xa0U 
                                               == (0xa0U 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->__PVT__first_s))) 
                                               | (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                              | (0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSelf->__PVT__first_s)))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
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
                                                   ((0x1e000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                         >> 0xfU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                           >> 0xeU))) 
                                                    | (0x3e000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                           >> 0xeU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                             >> 0xdU)))) 
                                                   | (0x1e000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                          >> 0xfU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                            >> 0xdU))))) 
                                       | ((0x1000U 
                                           & (((0x7f000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    >> 0xdU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                      >> 0xcU))) 
                                               | (0xff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                      >> 0xcU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                        >> 0xbU)))) 
                                              | (0x7f000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                     >> 0xdU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                       >> 0xbU))))) 
                                          | (0x800U 
                                             & (((0x1ff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                      >> 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                        >> 0xaU))) 
                                                 | (0x3ff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                        >> 0xaU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                          >> 9U)))) 
                                                | (0x1ff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                       >> 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                         >> 9U))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_32(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_32(
                                                       (0xe0U 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
                                           << 3U)) 
                                    | ((4U & (((0x3cU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                   >> 0x1aU)) 
                                               ^ (0x7cU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                     >> 0x19U))) 
                                              ^ (0xfcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    >> 0x18U)))) 
                                       | ((2U & (((0xfeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  (0x1feU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                      >> 0x17U))) 
                                                 ^ 
                                                 (0x3feU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                     >> 0x16U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                     >> 0x16U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                     >> 0x15U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x32U] 
                                                    >> 0x14U)))))))));
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
                        | ((0x400000U & ((((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
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
                                 | ((0x80000U & (((
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                    << 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                      << 0x10U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                      << 0x10U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                        << 0x11U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                     << 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                       << 0x11U)))) 
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
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_32(
                                                     (0x70U 
                                                      & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_32(
                                                                    (0xeU 
                                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                                 >> 1U)))) 
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
                        | ((0x2000000U & ((((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSelf->__PVT__third_s)))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                 << 0xfU) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                   << 0x10U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                   << 0x10U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                     << 0x11U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                  << 0xfU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                    << 0x11U)))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                         >> 8U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                         >> 7U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                        >> 6U)))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__PVT__fourth_s))) 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                               << 0xeU) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                 << 0xfU)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                 << 0xfU) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                   << 0x10U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                << 0xeU) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                  << 0x10U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                     >> 0xcU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                     >> 0xbU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                    >> 0xaU))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x36U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__184(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__184\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 0xcU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                        | ((0x20000U & ((((0x600U == 
                                           (0x600U 
                                            & (IData)(vlSelf->__PVT__first_s))) 
                                          | (0x300U 
                                             == (0x300U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                         | (0x500U 
                                            == (0x500U 
                                                & (IData)(vlSelf->__PVT__first_s)))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->__PVT__first_s))) 
                                             | (0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                            | (0xa0U 
                                               == (0xa0U 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->__PVT__first_s))) 
                                               | (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                              | (0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSelf->__PVT__first_s)))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
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
                                                   ((0x7e000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                         >> 0xdU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                           >> 0xcU))) 
                                                    | (0xfe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                           >> 0xcU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                             >> 0xbU)))) 
                                                   | (0x7e000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                          >> 0xdU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                            >> 0xbU))))) 
                                       | ((0x1000U 
                                           & (((0x1ff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                    >> 0xbU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                      >> 0xaU))) 
                                               | (0x3ff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                      >> 0xaU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                        >> 9U)))) 
                                              | (0x1ff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                     >> 0xbU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                       >> 9U))))) 
                                          | (0x800U 
                                             & (((0x7ff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                      >> 9U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                        >> 8U))) 
                                                 | (0xfff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                        >> 8U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                          >> 7U)))) 
                                                | (0x7ff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                         >> 7U))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_32(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_32(
                                                       (0xe0U 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
                                           << 3U)) 
                                    | ((4U & (((0xfcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                   >> 0x18U)) 
                                               ^ (0x1fcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                     >> 0x17U))) 
                                              ^ (0x3fcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                    >> 0x16U)))) 
                                       | ((2U & (((0x3feU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                      >> 0x16U)) 
                                                  ^ 
                                                  (0x7feU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                      >> 0x15U))) 
                                                 ^ 
                                                 (0xffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                     >> 0x14U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                     >> 0x14U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                     >> 0x13U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                    >> 0x12U)))))))));
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
                        | ((0x400000U & ((((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
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
                                 | ((0x80000U & (((
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                    << 0x11U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                      << 0x12U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                      << 0x12U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                        << 0x13U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                     << 0x11U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                       << 0x13U)))) 
                                    | (0x40000U & (
                                                   ((0x40000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                         >> 0xdU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                           >> 0xcU))) 
                                                    | (0xc0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                           >> 0xcU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                             >> 0xbU)))) 
                                                   | (0x40000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                          >> 0xdU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                            >> 0xbU))))))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_32(
                                                     (0x70U 
                                                      & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_32(
                                                                    (0xeU 
                                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((0x7ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                                  >> 1U)) 
                                                              ^ 
                                                              (0xfffffffeU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U])) 
                                                             ^ 
                                                             (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                              << 1U))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                                 >> 0x1fU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                                 >> 0x1eU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x33U] 
                                                                >> 0x1dU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 7U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSelf->__PVT__third_s)))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                 << 0x11U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                   << 0x12U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                   << 0x12U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                     << 0x13U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                  << 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                    << 0x13U)))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 6U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 5U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                        >> 4U)))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__PVT__fourth_s))) 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                               << 0x10U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                 << 0x11U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                 << 0x11U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                   << 0x12U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                << 0x10U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                  << 0x12U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                     >> 0xaU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                     >> 9U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                    >> 8U))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x37U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__185(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__185\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                        | ((0x20000U & ((((0x600U == 
                                           (0x600U 
                                            & (IData)(vlSelf->__PVT__first_s))) 
                                          | (0x300U 
                                             == (0x300U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                         | (0x500U 
                                            == (0x500U 
                                                & (IData)(vlSelf->__PVT__first_s)))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->__PVT__first_s))) 
                                             | (0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                            | (0xa0U 
                                               == (0xa0U 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->__PVT__first_s))) 
                                               | (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                              | (0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSelf->__PVT__first_s)))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
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
                                                   ((0x1fe000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 0xbU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                           >> 0xaU))) 
                                                    | (0x3fe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                           >> 0xaU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                             >> 9U)))) 
                                                   | (0x1fe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                          >> 0xbU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                            >> 9U))))) 
                                       | ((0x1000U 
                                           & (((0x7ff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                    >> 9U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                      >> 8U))) 
                                               | (0xfff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                      >> 8U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                        >> 7U)))) 
                                              | (0x7ff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                     >> 9U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                       >> 7U))))) 
                                          | (0x800U 
                                             & (((0x1fff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                      >> 7U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                        >> 6U))) 
                                                 | (0x3fff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                        >> 6U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                          >> 5U)))) 
                                                | (0x1fff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                       >> 7U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 5U))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_32(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_32(
                                                       (0xe0U 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
                                           << 3U)) 
                                    | ((4U & (((0x3fcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                   >> 0x16U)) 
                                               ^ (0x7fcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                     >> 0x15U))) 
                                              ^ (0xffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                    >> 0x14U)))) 
                                       | ((2U & (((0xffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                      >> 0x14U)) 
                                                  ^ 
                                                  (0x1ffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                      >> 0x13U))) 
                                                 ^ 
                                                 (0x3ffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                     >> 0x12U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                     >> 0x12U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                     >> 0x11U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                    >> 0x10U)))))))));
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
                        | ((0x400000U & ((((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
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
                                 | ((0x80000U & ((0x80000U 
                                                  & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                       << 0x13U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 0xcU)) 
                                                     | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                           >> 0xbU)))) 
                                                 | (0x180000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                        << 0x13U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                          >> 0xbU))))) 
                                    | (0x40000U & (
                                                   ((0x1c0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                         >> 0xbU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                           >> 0xaU))) 
                                                    | (0x3c0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                           >> 0xaU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                             >> 9U)))) 
                                                   | (0x1c0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                          >> 0xbU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                            >> 9U))))))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_32(
                                                     (0x70U 
                                                      & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_32(
                                                                    (0xeU 
                                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                               << 1U) 
                                                              ^ 
                                                              (2U 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                                  >> 0x1eU))) 
                                                             ^ 
                                                             (6U 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                                 >> 0x1dU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                                 >> 0x1dU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                                 >> 0x1cU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x34U] 
                                                                >> 0x1bU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 5U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSelf->__PVT__third_s)))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                 << 0x13U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                   << 0x14U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                   << 0x14U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                     << 0x15U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                  << 0x13U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                    << 0x15U)))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 4U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 3U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                        >> 2U)))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__PVT__fourth_s))) 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                               << 0x12U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                 << 0x13U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                 << 0x13U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                   << 0x14U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                << 0x12U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                  << 0x14U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                     >> 8U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                     >> 7U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                    >> 6U))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x38U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__186(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__186\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 8U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                        | ((0x20000U & ((((0x600U == 
                                           (0x600U 
                                            & (IData)(vlSelf->__PVT__first_s))) 
                                          | (0x300U 
                                             == (0x300U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                         | (0x500U 
                                            == (0x500U 
                                                & (IData)(vlSelf->__PVT__first_s)))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->__PVT__first_s))) 
                                             | (0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                            | (0xa0U 
                                               == (0xa0U 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->__PVT__first_s))) 
                                               | (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                              | (0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSelf->__PVT__first_s)))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
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
                                                   ((0x7fe000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 9U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                           >> 8U))) 
                                                    | (0xffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                           >> 8U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                             >> 7U)))) 
                                                   | (0x7fe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                          >> 9U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                            >> 7U))))) 
                                       | ((0x1000U 
                                           & (((0x1fff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                    >> 7U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                      >> 6U))) 
                                               | (0x3fff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                      >> 6U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                        >> 5U)))) 
                                              | (0x1fff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                     >> 7U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                       >> 5U))))) 
                                          | (0x800U 
                                             & (((0x7fff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                      >> 5U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                        >> 4U))) 
                                                 | (0xffff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                        >> 4U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                          >> 3U)))) 
                                                | (0x7fff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                       >> 5U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 3U))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_32(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_32(
                                                       (0xe0U 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
                                           << 3U)) 
                                    | ((4U & (((0xffcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                   >> 0x14U)) 
                                               ^ (0x1ffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                     >> 0x13U))) 
                                              ^ (0x3ffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                    >> 0x12U)))) 
                                       | ((2U & (((0x3ffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                      >> 0x12U)) 
                                                  ^ 
                                                  (0x7ffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                      >> 0x11U))) 
                                                 ^ 
                                                 (0xfffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                     >> 0x10U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                     >> 0x10U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                     >> 0xfU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                    >> 0xeU)))))))));
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
                        | ((0x400000U & ((((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
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
                                 | ((0x80000U & (((0x180000U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                       >> 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 0xaU))) 
                                                  | (0x380000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 0xaU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                           >> 9U)))) 
                                                 | (0x180000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                        >> 0xbU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                          >> 9U))))) 
                                    | (0x40000U & (
                                                   ((0x7c0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                         >> 9U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                           >> 8U))) 
                                                    | (0xfc0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                           >> 8U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                             >> 7U)))) 
                                                   | (0x7c0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                          >> 9U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                            >> 7U))))))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_32(
                                                     (0x70U 
                                                      & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_32(
                                                                    (0xeU 
                                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((6U 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                                  >> 0x1dU)) 
                                                              ^ 
                                                              (0xeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                                  >> 0x1cU))) 
                                                             ^ 
                                                             (0x1eU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                                 >> 0x1bU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                                 >> 0x1bU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                                 >> 0x1aU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x35U] 
                                                                >> 0x19U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 3U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSelf->__PVT__third_s)))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                 << 0x15U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                   << 0x16U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                   << 0x16U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                     << 0x17U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                  << 0x15U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                    << 0x17U)))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 2U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 1U)) 
                                                       ^ 
                                                       vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U]))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__PVT__fourth_s))) 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                               << 0x14U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                 << 0x15U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                 << 0x15U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                   << 0x16U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                << 0x14U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                  << 0x16U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                     >> 6U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                     >> 5U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                    >> 4U))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x39U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__187(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__187\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 6U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                        | ((0x20000U & ((((0x600U == 
                                           (0x600U 
                                            & (IData)(vlSelf->__PVT__first_s))) 
                                          | (0x300U 
                                             == (0x300U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                         | (0x500U 
                                            == (0x500U 
                                                & (IData)(vlSelf->__PVT__first_s)))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->__PVT__first_s))) 
                                             | (0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                            | (0xa0U 
                                               == (0xa0U 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->__PVT__first_s))) 
                                               | (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                              | (0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSelf->__PVT__first_s)))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
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
                                                   ((0x1ffe000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 7U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                           >> 6U))) 
                                                    | (0x3ffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                           >> 6U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                             >> 5U)))) 
                                                   | (0x1ffe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                            >> 5U))))) 
                                       | ((0x1000U 
                                           & (((0x7fff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                    >> 5U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                      >> 4U))) 
                                               | (0xffff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                      >> 4U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                        >> 3U)))) 
                                              | (0x7fff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                     >> 5U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                       >> 3U))))) 
                                          | (0x800U 
                                             & (((0x1ffff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                      >> 3U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                        >> 2U))) 
                                                 | (0x3ffff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                        >> 2U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                          >> 1U)))) 
                                                | (0x1ffff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                       >> 3U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 1U))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_32(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_32(
                                                       (0xe0U 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
                                           << 3U)) 
                                    | ((4U & (((0x3ffcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                   >> 0x12U)) 
                                               ^ (0x7ffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                     >> 0x11U))) 
                                              ^ (0xfffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                    >> 0x10U)))) 
                                       | ((2U & (((0xfffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                      >> 0x10U)) 
                                                  ^ 
                                                  (0x1fffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                      >> 0xfU))) 
                                                 ^ 
                                                 (0x3fffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                     >> 0xeU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                     >> 0xeU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                     >> 0xdU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                    >> 0xcU)))))))));
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
                        | ((0x400000U & ((((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
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
                                 | ((0x80000U & (((0x780000U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 8U))) 
                                                  | (0xf80000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                           >> 7U)))) 
                                                 | (0x780000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                          >> 7U))))) 
                                    | (0x40000U & (
                                                   ((0x1fc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 7U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                           >> 6U))) 
                                                    | (0x3fc0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                           >> 6U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                             >> 5U)))) 
                                                   | (0x1fc0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                            >> 5U))))))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_32(
                                                     (0x70U 
                                                      & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_32(
                                                                    (0xeU 
                                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((0x1eU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                                  >> 0x1bU)) 
                                                              ^ 
                                                              (0x3eU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                                  >> 0x1aU))) 
                                                             ^ 
                                                             (0x7eU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                                 >> 0x19U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                                 >> 0x19U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                                 >> 0x18U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                                >> 0x17U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 1U)));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSelf->__PVT__third_s)))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
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
                              | (0x800000U & ((0x800000U 
                                               & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                    << 0x17U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                      >> 8U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                      >> 8U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                        >> 7U)))) 
                                              | (0x1800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                     << 0x17U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                       >> 7U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                         >> 0x1fU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x36U] 
                                                        >> 0x1eU)))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__PVT__fourth_s))) 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                               << 0x16U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                 << 0x17U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                 << 0x17U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                   << 0x18U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                << 0x16U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                  << 0x18U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                     >> 4U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                     >> 3U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                    >> 2U))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3aU] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__188(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__188\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                         >> 4U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                        | ((0x20000U & ((((0x600U == 
                                           (0x600U 
                                            & (IData)(vlSelf->__PVT__first_s))) 
                                          | (0x300U 
                                             == (0x300U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                         | (0x500U 
                                            == (0x500U 
                                                & (IData)(vlSelf->__PVT__first_s)))) 
                                        << 0x11U)) 
                           | ((0x10000U & ((((0xc0U 
                                              == (0xc0U 
                                                  & (IData)(vlSelf->__PVT__first_s))) 
                                             | (0x60U 
                                                == 
                                                (0x60U 
                                                 & (IData)(vlSelf->__PVT__first_s)))) 
                                            | (0xa0U 
                                               == (0xa0U 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                           << 0x10U)) 
                              | ((0x8000U & ((((0x18U 
                                                == 
                                                (0x18U 
                                                 & (IData)(vlSelf->__PVT__first_s))) 
                                               | (0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__first_s)))) 
                                              | (0x14U 
                                                 == 
                                                 (0x14U 
                                                  & (IData)(vlSelf->__PVT__first_s)))) 
                                             << 0xfU)) 
                                 | ((0x4000U & ((((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
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
                                                   ((0x7ffe000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 5U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                           >> 4U))) 
                                                    | (0xfffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                           >> 4U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                             >> 3U)))) 
                                                   | (0x7ffe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                          >> 5U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                            >> 3U))))) 
                                       | ((0x1000U 
                                           & (((0x1ffff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                    >> 3U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                      >> 2U))) 
                                               | (0x3ffff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                      >> 2U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                        >> 1U)))) 
                                              | (0x1ffff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                     >> 3U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                       >> 1U))))) 
                                          | (0x800U 
                                             & (((0x7ffff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                      >> 1U) 
                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U])) 
                                                 | (0xfffff800U 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                          << 1U)))) 
                                                | (0x7ffff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                       >> 1U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         << 1U))))))))))));
    vlSelf->__PVT__second_s = ((0x40U & (VL_REDXOR_32(
                                                      (0x700U 
                                                       & (IData)(vlSelf->__PVT__first_s))) 
                                         << 6U)) | 
                               ((0x20U & (VL_REDXOR_32(
                                                       (0xe0U 
                                                        & (IData)(vlSelf->__PVT__first_s))) 
                                          << 5U)) | 
                                ((0x10U & (VL_REDXOR_32(
                                                        (0x1cU 
                                                         & (IData)(vlSelf->__PVT__first_s))) 
                                           << 4U)) 
                                 | ((8U & (VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa14__in))) 
                                           << 3U)) 
                                    | ((4U & (((0xfffcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                   >> 0x10U)) 
                                               ^ (0x1fffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                     >> 0xfU))) 
                                              ^ (0x3fffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                    >> 0xeU)))) 
                                       | ((2U & (((0x3fffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                      >> 0xeU)) 
                                                  ^ 
                                                  (0x7fffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                      >> 0xdU))) 
                                                 ^ 
                                                 (0xffffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                     >> 0xcU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                     >> 0xcU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                     >> 0xbU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                    >> 0xaU)))))))));
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
                        | ((0x400000U & ((((0x60U == 
                                            (0x60U 
                                             & (IData)(vlSelf->__PVT__second_s))) 
                                           | (0x30U 
                                              == (0x30U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                          | (0x50U 
                                             == (0x50U 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                         << 0x16U)) 
                           | ((0x200000U & ((((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__second_s))) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSelf->__PVT__second_s)))) 
                                             | (0xaU 
                                                == 
                                                (0xaU 
                                                 & (IData)(vlSelf->__PVT__second_s)))) 
                                            << 0x15U)) 
                              | ((0x100000U & ((((6U 
                                                  == 
                                                  (6U 
                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
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
                                 | ((0x80000U & (((0x1f80000U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                       >> 7U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 6U))) 
                                                  | (0x3f80000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 6U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                           >> 5U)))) 
                                                 | (0x1f80000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                        >> 7U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                          >> 5U))))) 
                                    | (0x40000U & (
                                                   ((0x7fc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 5U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                           >> 4U))) 
                                                    | (0xffc0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                           >> 4U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                             >> 3U)))) 
                                                   | (0x7fc0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                          >> 5U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                            >> 3U))))))))));
    vlSelf->__PVT__third_s = ((0x10U & (VL_REDXOR_32(
                                                     (0x70U 
                                                      & (IData)(vlSelf->__PVT__second_s))) 
                                        << 4U)) | (
                                                   (8U 
                                                    & (VL_REDXOR_32(
                                                                    (0xeU 
                                                                     & (IData)(vlSelf->__PVT__second_s))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_32(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa20__in))) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((0x7eU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                                  >> 0x19U)) 
                                                              ^ 
                                                              (0xfeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                                  >> 0x18U))) 
                                                             ^ 
                                                             (0x1feU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                                 >> 0x17U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                                 >> 0x17U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                                 >> 0x16U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                                >> 0x15U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                      >> 0x1fU));
    vlSelf->__PVT__c = ((0x3c7fffffU & vlSelf->__PVT__c) 
                        | ((0x2000000U & ((((0x18U 
                                             == (0x18U 
                                                 & (IData)(vlSelf->__PVT__third_s))) 
                                            | (0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__third_s)))) 
                                           | (0x14U 
                                              == (0x14U 
                                                  & (IData)(vlSelf->__PVT__third_s)))) 
                                          << 0x19U)) 
                           | ((0x1000000U & ((((6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
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
                              | (0x800000U & (((0x1800000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                    >> 7U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                      >> 6U))) 
                                               | (0x3800000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                      >> 6U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                        >> 5U)))) 
                                              | (0x1800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                     >> 7U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                       >> 5U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 0x1eU) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                         >> 0x1dU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x37U] 
                                                        >> 0x1cU)))));
    vlSelf->__PVT__c = ((0x33ffffffU & vlSelf->__PVT__c) 
                        | ((0x8000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__PVT__fourth_s))) 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                               << 0x18U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                 << 0x19U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                 << 0x19U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                   << 0x1aU))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                << 0x18U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                  << 0x1aU))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                     >> 2U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U] 
                                                     >> 1U)) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x38U])));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
                                                               >> 1U))))))))))))));
}
