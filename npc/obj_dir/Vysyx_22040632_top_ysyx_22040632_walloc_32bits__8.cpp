// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"
#include "Vysyx_22040632_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i__225(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i__225\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                      << 5U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                        << 6U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                        << 6U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                          << 7U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                       << 5U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                         << 7U)))) 
                                       | ((0x1000U 
                                           & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                 << 7U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                   << 8U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                   << 8U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                     << 9U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                  << 7U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                    << 9U)))) 
                                          | (0x800U 
                                             & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                   << 9U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                     << 0xaU)) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                     << 0xaU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                       << 0xbU))) 
                                                | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                    << 9U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                   >> 6U)) 
                                               ^ (0x7fffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                     >> 5U))) 
                                              ^ (0xffffffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                    >> 4U)))) 
                                       | ((2U & (((0xffffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                      >> 4U)) 
                                                  ^ 
                                                  (0x1ffffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                      >> 3U))) 
                                                 ^ 
                                                 (0x3ffffffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                     >> 2U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                     >> 2U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                     >> 1U)) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU]))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                    << 3U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                      << 4U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                      << 4U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                        << 5U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                     << 3U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                       << 5U)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                      << 5U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                        << 6U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                        << 6U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                          << 7U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                       << 5U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                                  >> 0xfU)) 
                                                              ^ 
                                                              (0x3fffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                                  >> 0xeU))) 
                                                             ^ 
                                                             (0x7fffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                                 >> 0xdU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                                 >> 0xdU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                                 >> 0xcU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                                >> 0xbU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                 << 3U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                   << 4U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                   << 4U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                     << 5U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                  << 3U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                         >> 0x14U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                         >> 0x13U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                               << 2U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                 << 3U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                 << 3U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                   << 4U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                << 2U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                  << 4U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                     >> 0x18U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                     >> 0x17U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                    >> 0x16U))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                         >> 0x19U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i__481(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i__481\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i__226(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i__226\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                      << 7U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                        << 8U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                        << 8U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                          << 9U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                       << 7U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                         << 9U)))) 
                                       | ((0x1000U 
                                           & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                 << 9U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                   << 0xaU)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                   << 0xaU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                     << 0xbU))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                  << 9U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                    << 0xbU)))) 
                                          | (0x800U 
                                             & ((0x800U 
                                                 & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                        >> 0x14U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                        >> 0x14U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                          >> 0x13U)))) 
                                                | (0x1800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                   >> 4U)) 
                                               ^ (0x1ffffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                     >> 3U))) 
                                              ^ (0x3ffffffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                    >> 2U)))) 
                                       | ((2U & (((0x3ffffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                      >> 2U)) 
                                                  ^ 
                                                  (0x7ffffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                      >> 1U))) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU]))) 
                                          | (1U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                     >> 0x1fU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                    >> 0x1eU)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                          >> 7U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                    << 5U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                      << 6U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                      << 6U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                        << 7U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                     << 5U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                       << 7U)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                      << 7U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                        << 8U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                        << 8U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                          << 9U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                       << 7U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                                  >> 0xdU)) 
                                                              ^ 
                                                              (0xffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                                  >> 0xcU))) 
                                                             ^ 
                                                             (0x1ffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                                 >> 0xbU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                                 >> 0xbU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                                 >> 0xaU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                                >> 9U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                 << 5U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                   << 6U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                   << 6U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                     << 7U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                  << 5U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                         >> 0x12U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                         >> 0x11U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                               << 4U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                 << 5U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                 << 5U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                   << 6U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                << 4U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                  << 6U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                     >> 0x16U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                     >> 0x15U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                    >> 0x14U))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                         >> 0x17U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i__482(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i__482\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i__227(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i__227\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                      << 9U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                        << 0xaU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                        << 0xaU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                          << 0xbU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                       << 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                         << 0xbU)))) 
                                       | ((0x1000U 
                                           & (((0xfffff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                    << 0xbU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                      << 0xcU))) 
                                               | (0x1000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                      << 0xcU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                        >> 0x13U)))) 
                                              | (0x1000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                     << 0xbU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                       >> 0x13U))))) 
                                          | (0x800U 
                                             & (((0x1800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                      >> 0x13U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                        >> 0x12U))) 
                                                 | (0x3800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                        >> 0x12U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                          >> 0x11U)))) 
                                                | (0x1800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                       >> 0x13U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                   >> 2U)) 
                                               ^ (0x7ffffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                     >> 1U))) 
                                              ^ (0xfffffffcU 
                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU]))) 
                                       | ((2U & (((0xfffffffeU 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU]) 
                                                  ^ 
                                                  (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                   << 1U)) 
                                                 ^ 
                                                 (2U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                     >> 0x1eU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                     >> 0x1eU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                     >> 0x1dU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                    >> 0x1cU)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                          >> 5U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                    << 7U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                      << 8U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                      << 8U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                        << 9U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                     << 7U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                       << 9U)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                      << 9U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                        << 0xaU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                        << 0xaU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                          << 0xbU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                       << 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                                  >> 0xbU)) 
                                                              ^ 
                                                              (0x3ffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                                  >> 0xaU))) 
                                                             ^ 
                                                             (0x7ffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                                 >> 9U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                                 >> 9U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                                 >> 8U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                                >> 7U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                 << 7U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                   << 8U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                   << 8U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                     << 9U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                  << 7U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                         >> 0x10U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                         >> 0xfU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                               << 6U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                 << 7U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                 << 7U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                   << 8U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                << 6U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                  << 8U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                     >> 0x14U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                     >> 0x13U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                    >> 0x12U))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                         >> 0x15U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i__483(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i__483\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i__228(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i__228\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                         >> 0x14U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                        << 0xcU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                        << 0xcU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                          << 0xdU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                         << 0xdU)))) 
                                       | ((0x1000U 
                                           & (((0x1000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                    >> 0x13U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                      >> 0x12U))) 
                                               | (0x3000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                      >> 0x12U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                        >> 0x11U)))) 
                                              | (0x1000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                     >> 0x13U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                       >> 0x11U))))) 
                                          | (0x800U 
                                             & (((0x7800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                      >> 0x11U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                        >> 0x10U))) 
                                                 | (0xf800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                        >> 0x10U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                          >> 0xfU)))) 
                                                | (0x7800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                       >> 0x11U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
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
                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU]) 
                                               ^ (0xfffffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                     << 1U))) 
                                              ^ (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                 << 2U))) 
                                       | ((2U & (((2U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                      >> 0x1eU)) 
                                                  ^ 
                                                  (6U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                      >> 0x1dU))) 
                                                 ^ 
                                                 (0xeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                     >> 0x1cU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                     >> 0x1cU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                     >> 0x1bU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                    >> 0x1aU)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                    << 9U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                      << 0xaU)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                      << 0xaU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                        << 0xbU))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                     << 9U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                       << 0xbU)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                        << 0xcU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                        << 0xcU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                          << 0xdU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                                  >> 9U)) 
                                                              ^ 
                                                              (0xfffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                                  >> 8U))) 
                                                             ^ 
                                                             (0x1fffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                                 >> 7U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                                 >> 7U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                                 >> 6U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                                >> 5U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                 << 9U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                   << 0xaU)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                   << 0xaU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                     << 0xbU))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                  << 9U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                         >> 0xeU) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                         >> 0xdU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                               << 8U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                 << 9U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                 << 9U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                   << 0xaU))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                << 8U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                  << 0xaU))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                     >> 0x12U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                     >> 0x11U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                    >> 0x10U))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                         >> 0x13U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i__484(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i__484\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i__229(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i__229\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                         >> 0x12U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                         >> 0x14U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                         << 0xdU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                           >> 0x12U)) 
                                                       | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                           >> 0x12U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                             >> 0x11U)))) 
                                                   | (0x6000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                          << 0xdU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                            >> 0x11U))))) 
                                       | ((0x1000U 
                                           & (((0x7000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                    >> 0x11U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                      >> 0x10U))) 
                                               | (0xf000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                      >> 0x10U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                        >> 0xfU)))) 
                                              | (0x7000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                     >> 0x11U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                       >> 0xfU))))) 
                                          | (0x800U 
                                             & (((0x1f800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                      >> 0xfU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                        >> 0xeU))) 
                                                 | (0x3f800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                        >> 0xeU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                          >> 0xdU)))) 
                                                | (0x1f800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                       >> 0xfU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
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
                                    | ((4U & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                << 2U) 
                                               ^ (4U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                     >> 0x1dU))) 
                                              ^ (0xcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                    >> 0x1cU)))) 
                                       | ((2U & (((0xeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                      >> 0x1cU)) 
                                                  ^ 
                                                  (0x1eU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                      >> 0x1bU))) 
                                                 ^ 
                                                 (0x3eU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                     >> 0x1aU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                     >> 0x1aU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                     >> 0x19U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                    >> 0x18U)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                    << 0xbU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                      << 0xcU)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                      << 0xcU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                        << 0xdU))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                     << 0xbU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                       << 0xdU)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                      << 0xdU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                        << 0xeU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                        << 0xeU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                          << 0xfU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                       << 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                                  >> 7U)) 
                                                              ^ 
                                                              (0x3fffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                                  >> 6U))) 
                                                             ^ 
                                                             (0x7fffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                                 >> 5U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                                 >> 5U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                                 >> 4U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                                >> 3U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                 << 0xbU) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                   << 0xcU)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                   << 0xcU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                     << 0xdU))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                  << 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                         >> 0xcU) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                         >> 0xbU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                               << 0xaU) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                 << 0xbU)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                 << 0xbU) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                   << 0xcU))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                << 0xaU) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                  << 0xcU))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                     >> 0x10U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                     >> 0xfU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                    >> 0xeU))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                         >> 0x11U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i__485(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i__485\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i__230(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i__230\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                         >> 0x10U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                         >> 0x12U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                         >> 0x11U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                           >> 0x10U))) 
                                                    | (0xe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                           >> 0x10U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                             >> 0xfU)))) 
                                                   | (0x6000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                          >> 0x11U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                            >> 0xfU))))) 
                                       | ((0x1000U 
                                           & (((0x1f000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                      >> 0xeU))) 
                                               | (0x3f000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                        >> 0xdU)))) 
                                              | (0x1f000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                       >> 0xdU))))) 
                                          | (0x800U 
                                             & (((0x7f800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                      >> 0xdU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                        >> 0xcU))) 
                                                 | (0xff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                        >> 0xcU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                          >> 0xbU)))) 
                                                | (0x7f800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                   >> 0x1cU)) 
                                               ^ (0x1cU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                     >> 0x1bU))) 
                                              ^ (0x3cU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                    >> 0x1aU)))) 
                                       | ((2U & (((0x3eU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                      >> 0x1aU)) 
                                                  ^ 
                                                  (0x7eU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                      >> 0x19U))) 
                                                 ^ 
                                                 (0xfeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                     >> 0x18U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                     >> 0x18U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                     >> 0x17U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                    >> 0x16U)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                    << 0xdU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                      << 0xeU)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                      << 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                        << 0xfU))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                     << 0xdU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                       << 0xfU)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                      << 0xfU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                        << 0x10U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                        << 0x10U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                          << 0x11U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                       << 0xfU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                                  >> 5U)) 
                                                              ^ 
                                                              (0xffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                                  >> 4U))) 
                                                             ^ 
                                                             (0x1ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                                 >> 3U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                                 >> 3U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                                 >> 2U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                                >> 1U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                 << 0xdU) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                   << 0xeU)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                   << 0xeU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                     << 0xfU))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                  << 0xdU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                         >> 0xaU) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                         >> 9U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                               << 0xcU) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                 << 0xdU)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                 << 0xdU) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                   << 0xeU))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                << 0xcU) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                  << 0xeU))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                     >> 0xeU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                     >> 0xdU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                    >> 0xcU))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                         >> 0xfU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i__486(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i__486\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i__231(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i__231\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                         >> 0xeU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                         >> 0x10U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                         >> 0xfU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                           >> 0xeU))) 
                                                    | (0x3e000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                           >> 0xeU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                             >> 0xdU)))) 
                                                   | (0x1e000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                          >> 0xfU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                            >> 0xdU))))) 
                                       | ((0x1000U 
                                           & (((0x7f000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                    >> 0xdU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                      >> 0xcU))) 
                                               | (0xff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                      >> 0xcU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                        >> 0xbU)))) 
                                              | (0x7f000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                     >> 0xdU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                       >> 0xbU))))) 
                                          | (0x800U 
                                             & (((0x1ff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                      >> 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                        >> 0xaU))) 
                                                 | (0x3ff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                        >> 0xaU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                          >> 9U)))) 
                                                | (0x1ff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                       >> 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                   >> 0x1aU)) 
                                               ^ (0x7cU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                     >> 0x19U))) 
                                              ^ (0xfcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                    >> 0x18U)))) 
                                       | ((2U & (((0xfeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                      >> 0x18U)) 
                                                  ^ 
                                                  (0x1feU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                      >> 0x17U))) 
                                                 ^ 
                                                 (0x3feU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                     >> 0x16U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                     >> 0x16U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                     >> 0x15U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                    >> 0x14U)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                          >> 0x1dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                    << 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                      << 0x10U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                      << 0x10U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                        << 0x11U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                     << 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                       << 0x11U)))) 
                                    | (0x40000U & (
                                                   ((0xfffc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                         << 0x11U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                           << 0x12U))) 
                                                    | (0x40000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                           << 0x12U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                             >> 0xdU)))) 
                                                   | (0x40000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                          << 0x11U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                                 >> 1U) 
                                                                ^ 
                                                                vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U]) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                                >> 0x1fU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                 << 0xfU) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                   << 0x10U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                   << 0x10U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                     << 0x11U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                  << 0xfU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                         >> 8U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                         >> 7U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                               << 0xeU) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                 << 0xfU)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                 << 0xfU) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                   << 0x10U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                << 0xeU) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                  << 0x10U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                     >> 0xcU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                     >> 0xbU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                    >> 0xaU))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                         >> 0xdU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i__487(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i__487\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i__232(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i__232\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 0xcU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 0xeU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                         >> 0xdU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                           >> 0xcU))) 
                                                    | (0xfe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                           >> 0xcU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                             >> 0xbU)))) 
                                                   | (0x7e000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                          >> 0xdU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                            >> 0xbU))))) 
                                       | ((0x1000U 
                                           & (((0x1ff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                    >> 0xbU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                      >> 0xaU))) 
                                               | (0x3ff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                      >> 0xaU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                        >> 9U)))) 
                                              | (0x1ff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                     >> 0xbU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                       >> 9U))))) 
                                          | (0x800U 
                                             & (((0x7ff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                      >> 9U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                        >> 8U))) 
                                                 | (0xfff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                        >> 8U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                          >> 7U)))) 
                                                | (0x7ff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                   >> 0x18U)) 
                                               ^ (0x1fcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                     >> 0x17U))) 
                                              ^ (0x3fcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                    >> 0x16U)))) 
                                       | ((2U & (((0x3feU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                      >> 0x16U)) 
                                                  ^ 
                                                  (0x7feU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                      >> 0x15U))) 
                                                 ^ 
                                                 (0xffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                     >> 0x14U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                     >> 0x14U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                     >> 0x13U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                    >> 0x12U)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                          >> 0x1bU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                    << 0x11U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                      << 0x12U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                      << 0x12U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                        << 0x13U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                     << 0x11U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                       << 0x13U)))) 
                                    | (0x40000U & (
                                                   ((0x40000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                         >> 0xdU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                           >> 0xcU))) 
                                                    | (0xc0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                           >> 0xcU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                             >> 0xbU)))) 
                                                   | (0x40000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                          >> 0xdU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                                  >> 1U)) 
                                                              ^ 
                                                              (0xfffffffeU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])) 
                                                             ^ 
                                                             (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                              << 1U))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                                 >> 0x1fU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                                 >> 0x1eU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                                >> 0x1dU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                 << 0x11U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                   << 0x12U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                   << 0x12U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                     << 0x13U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                  << 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 6U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 5U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                               << 0x10U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                 << 0x11U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                 << 0x11U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                   << 0x12U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                << 0x10U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                  << 0x12U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                     >> 0xaU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                     >> 9U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                    >> 8U))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 0xbU)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i__488(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i__488\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i__233(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i__233\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 0xcU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 0xbU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                           >> 0xaU))) 
                                                    | (0x3fe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                           >> 0xaU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                             >> 9U)))) 
                                                   | (0x1fe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                          >> 0xbU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                            >> 9U))))) 
                                       | ((0x1000U 
                                           & (((0x7ff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                    >> 9U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                      >> 8U))) 
                                               | (0xfff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                      >> 8U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                        >> 7U)))) 
                                              | (0x7ff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                     >> 9U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                       >> 7U))))) 
                                          | (0x800U 
                                             & (((0x1fff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                      >> 7U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                        >> 6U))) 
                                                 | (0x3fff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                        >> 6U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                          >> 5U)))) 
                                                | (0x1fff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                       >> 7U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                   >> 0x16U)) 
                                               ^ (0x7fcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                     >> 0x15U))) 
                                              ^ (0xffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                    >> 0x14U)))) 
                                       | ((2U & (((0xffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                      >> 0x14U)) 
                                                  ^ 
                                                  (0x1ffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                      >> 0x13U))) 
                                                 ^ 
                                                 (0x3ffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                     >> 0x12U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                     >> 0x12U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                     >> 0x11U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                    >> 0x10U)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                          >> 0x19U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
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
                                                  & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                       << 0x13U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 0xcU)) 
                                                     | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                           >> 0xbU)))) 
                                                 | (0x180000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                        << 0x13U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                          >> 0xbU))))) 
                                    | (0x40000U & (
                                                   ((0x1c0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 0xbU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                           >> 0xaU))) 
                                                    | (0x3c0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                           >> 0xaU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                             >> 9U)))) 
                                                   | (0x1c0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                          >> 0xbU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
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
                                                          & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                               << 1U) 
                                                              ^ 
                                                              (2U 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                                  >> 0x1eU))) 
                                                             ^ 
                                                             (6U 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                                 >> 0x1dU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                                 >> 0x1dU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                                 >> 0x1cU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                                >> 0x1bU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                 << 0x13U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                   << 0x14U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                   << 0x14U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                     << 0x15U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                  << 0x13U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 4U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 3U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                               << 0x12U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                 << 0x13U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                 << 0x13U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                   << 0x14U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                << 0x12U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                  << 0x14U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                     >> 8U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                     >> 7U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                    >> 6U))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 9U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i__489(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i__489\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i__234(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i__234\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 8U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 9U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                           >> 8U))) 
                                                    | (0xffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                           >> 8U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                             >> 7U)))) 
                                                   | (0x7fe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                          >> 9U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                            >> 7U))))) 
                                       | ((0x1000U 
                                           & (((0x1fff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                    >> 7U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                      >> 6U))) 
                                               | (0x3fff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                      >> 6U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                        >> 5U)))) 
                                              | (0x1fff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                     >> 7U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                       >> 5U))))) 
                                          | (0x800U 
                                             & (((0x7fff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                      >> 5U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                        >> 4U))) 
                                                 | (0xffff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                        >> 4U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                          >> 3U)))) 
                                                | (0x7fff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                       >> 5U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                   >> 0x14U)) 
                                               ^ (0x1ffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                     >> 0x13U))) 
                                              ^ (0x3ffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                    >> 0x12U)))) 
                                       | ((2U & (((0x3ffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                      >> 0x12U)) 
                                                  ^ 
                                                  (0x7ffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                      >> 0x11U))) 
                                                 ^ 
                                                 (0xfffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                     >> 0x10U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                     >> 0x10U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                     >> 0xfU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                    >> 0xeU)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                          >> 0x17U)) 
                                                      | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
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
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                       >> 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 0xaU))) 
                                                  | (0x380000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 0xaU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                           >> 9U)))) 
                                                 | (0x180000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                        >> 0xbU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                          >> 9U))))) 
                                    | (0x40000U & (
                                                   ((0x7c0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 9U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                           >> 8U))) 
                                                    | (0xfc0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                           >> 8U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                             >> 7U)))) 
                                                   | (0x7c0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                          >> 9U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                                  >> 0x1dU)) 
                                                              ^ 
                                                              (0xeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                                  >> 0x1cU))) 
                                                             ^ 
                                                             (0x1eU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                                 >> 0x1bU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                                 >> 0x1bU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                                 >> 0x1aU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                                >> 0x19U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                 << 0x15U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                   << 0x16U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                   << 0x16U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                     << 0x17U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                  << 0x15U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 2U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 1U)) 
                                                       ^ 
                                                       vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U]))));
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                               << 0x14U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                 << 0x15U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                 << 0x15U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                   << 0x16U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                << 0x14U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                  << 0x16U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                     >> 6U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                     >> 5U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                    >> 4U))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 7U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i__490(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i__490\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i__235(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i__235\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 6U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 8U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 7U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                           >> 6U))) 
                                                    | (0x3ffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                           >> 6U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                             >> 5U)))) 
                                                   | (0x1ffe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                            >> 5U))))) 
                                       | ((0x1000U 
                                           & (((0x7fff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                    >> 5U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                      >> 4U))) 
                                               | (0xffff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                      >> 4U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                        >> 3U)))) 
                                              | (0x7fff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                     >> 5U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                       >> 3U))))) 
                                          | (0x800U 
                                             & (((0x1ffff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                      >> 3U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                        >> 2U))) 
                                                 | (0x3ffff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                        >> 2U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                          >> 1U)))) 
                                                | (0x1ffff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                       >> 3U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                   >> 0x12U)) 
                                               ^ (0x7ffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                     >> 0x11U))) 
                                              ^ (0xfffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                    >> 0x10U)))) 
                                       | ((2U & (((0xfffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                      >> 0x10U)) 
                                                  ^ 
                                                  (0x1fffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                      >> 0xfU))) 
                                                 ^ 
                                                 (0x3fffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                     >> 0xeU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                     >> 0xeU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                     >> 0xdU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                    >> 0xcU)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                          >> 0x15U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
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
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 8U))) 
                                                  | (0xf80000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                           >> 7U)))) 
                                                 | (0x780000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                          >> 7U))))) 
                                    | (0x40000U & (
                                                   ((0x1fc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 7U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                           >> 6U))) 
                                                    | (0x3fc0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                           >> 6U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                             >> 5U)))) 
                                                   | (0x1fc0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                                  >> 0x1bU)) 
                                                              ^ 
                                                              (0x3eU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                                  >> 0x1aU))) 
                                                             ^ 
                                                             (0x7eU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                                 >> 0x19U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                                 >> 0x19U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                                 >> 0x18U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                                >> 0x17U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
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
                                               & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                    << 0x17U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                      >> 8U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                      >> 8U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                        >> 7U)))) 
                                              | (0x1800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                     << 0x17U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
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
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 0x1fU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                               << 0x16U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                 << 0x17U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                 << 0x17U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                   << 0x18U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                << 0x16U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                  << 0x18U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                     >> 4U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                     >> 3U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                    >> 2U))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 5U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i__491(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i__491\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i__236(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i__236\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                         >> 4U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                         >> 6U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 5U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                           >> 4U))) 
                                                    | (0xfffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                           >> 4U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                             >> 3U)))) 
                                                   | (0x7ffe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                          >> 5U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                            >> 3U))))) 
                                       | ((0x1000U 
                                           & (((0x1ffff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                    >> 3U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                      >> 2U))) 
                                               | (0x3ffff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                      >> 2U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                        >> 1U)))) 
                                              | (0x1ffff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                     >> 3U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                       >> 1U))))) 
                                          | (0x800U 
                                             & (((0x7ffff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                      >> 1U) 
                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])) 
                                                 | (0xfffff800U 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                          << 1U)))) 
                                                | (0x7ffff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                       >> 1U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                   >> 0x10U)) 
                                               ^ (0x1fffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                     >> 0xfU))) 
                                              ^ (0x3fffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                    >> 0xeU)))) 
                                       | ((2U & (((0x3fffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                      >> 0xeU)) 
                                                  ^ 
                                                  (0x7fffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                      >> 0xdU))) 
                                                 ^ 
                                                 (0xffffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                     >> 0xcU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                     >> 0xcU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                     >> 0xbU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                    >> 0xaU)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                          >> 0x13U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
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
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                       >> 7U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 6U))) 
                                                  | (0x3f80000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 6U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                           >> 5U)))) 
                                                 | (0x1f80000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                        >> 7U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                          >> 5U))))) 
                                    | (0x40000U & (
                                                   ((0x7fc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 5U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                           >> 4U))) 
                                                    | (0xffc0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                           >> 4U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                             >> 3U)))) 
                                                   | (0x7fc0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                          >> 5U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                                  >> 0x19U)) 
                                                              ^ 
                                                              (0xfeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                                  >> 0x18U))) 
                                                             ^ 
                                                             (0x1feU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                                 >> 0x17U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                                 >> 0x17U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                                 >> 0x16U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                                >> 0x15U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
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
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                    >> 7U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                      >> 6U))) 
                                               | (0x3800000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                      >> 6U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                        >> 5U)))) 
                                              | (0x1800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                     >> 7U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 0x1eU) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 0x1dU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                               << 0x18U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                 << 0x19U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                 << 0x19U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                   << 0x1aU))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                << 0x18U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                  << 0x1aU))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                     >> 2U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                     >> 1U)) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                         >> 3U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i__492(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i__492\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                               >> 1U))))))))))))));
}
