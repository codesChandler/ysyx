// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"
#include "Vysyx_22040632_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__201(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__201\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                         >> 0xbU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                           >> 0xaU))) 
                                                    | (0x3fe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                           >> 0xaU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                             >> 9U)))) 
                                                   | (0x1fe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                          >> 0xbU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                            >> 9U))))) 
                                       | ((0x1000U 
                                           & (((0x7ff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                    >> 9U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                      >> 8U))) 
                                               | (0xfff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                      >> 8U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                        >> 7U)))) 
                                              | (0x7ff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                     >> 9U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                       >> 7U))))) 
                                          | (0x800U 
                                             & (((0x1fff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                      >> 7U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                        >> 6U))) 
                                                 | (0x3fff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                        >> 6U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                          >> 5U)))) 
                                                | (0x1fff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                       >> 7U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                   >> 0x16U)) 
                                               ^ (0x7fcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                     >> 0x15U))) 
                                              ^ (0xffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                    >> 0x14U)))) 
                                       | ((2U & (((0xffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                      >> 0x14U)) 
                                                  ^ 
                                                  (0x1ffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                      >> 0x13U))) 
                                                 ^ 
                                                 (0x3ffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                     >> 0x12U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                     >> 0x12U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                     >> 0x11U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                    >> 0x10U)))))))));
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
                                                  & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                       << 0x13U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                         >> 0xcU)) 
                                                     | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                           >> 0xbU)))) 
                                                 | (0x180000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                        << 0x13U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                          >> 0xbU))))) 
                                    | (0x40000U & (
                                                   ((0x1c0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                         >> 0xbU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                           >> 0xaU))) 
                                                    | (0x3c0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                           >> 0xaU) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                             >> 9U)))) 
                                                   | (0x1c0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                          >> 0xbU) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
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
                                                          & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                               << 1U) 
                                                              ^ 
                                                              (2U 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                                  >> 0x1eU))) 
                                                             ^ 
                                                             (6U 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                                 >> 0x1dU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                                 >> 0x1dU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                                 >> 0x1cU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x43U] 
                                                                >> 0x1bU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                 << 0x13U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                   << 0x14U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                   << 0x14U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                     << 0x15U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                  << 0x13U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                         >> 4U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                         >> 3U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                               << 0x12U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                 << 0x13U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                 << 0x13U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                   << 0x14U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                << 0x12U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                  << 0x14U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                     >> 8U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                     >> 7U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                    >> 6U))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__202(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__202\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                         >> 8U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                         >> 9U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                           >> 8U))) 
                                                    | (0xffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                           >> 8U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                             >> 7U)))) 
                                                   | (0x7fe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                          >> 9U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                            >> 7U))))) 
                                       | ((0x1000U 
                                           & (((0x1fff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                    >> 7U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                      >> 6U))) 
                                               | (0x3fff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                      >> 6U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                        >> 5U)))) 
                                              | (0x1fff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                     >> 7U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                       >> 5U))))) 
                                          | (0x800U 
                                             & (((0x7fff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                      >> 5U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                        >> 4U))) 
                                                 | (0xffff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                        >> 4U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                          >> 3U)))) 
                                                | (0x7fff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                       >> 5U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                   >> 0x14U)) 
                                               ^ (0x1ffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                     >> 0x13U))) 
                                              ^ (0x3ffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                    >> 0x12U)))) 
                                       | ((2U & (((0x3ffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                      >> 0x12U)) 
                                                  ^ 
                                                  (0x7ffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                      >> 0x11U))) 
                                                 ^ 
                                                 (0xfffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                     >> 0x10U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                     >> 0x10U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                     >> 0xfU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                    >> 0xeU)))))))));
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
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                       >> 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                         >> 0xaU))) 
                                                  | (0x380000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                         >> 0xaU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                           >> 9U)))) 
                                                 | (0x180000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                        >> 0xbU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                          >> 9U))))) 
                                    | (0x40000U & (
                                                   ((0x7c0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                         >> 9U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                           >> 8U))) 
                                                    | (0xfc0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                           >> 8U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                             >> 7U)))) 
                                                   | (0x7c0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                          >> 9U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                                  >> 0x1dU)) 
                                                              ^ 
                                                              (0xeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                                  >> 0x1cU))) 
                                                             ^ 
                                                             (0x1eU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                                 >> 0x1bU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                                 >> 0x1bU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                                 >> 0x1aU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x44U] 
                                                                >> 0x19U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                 << 0x15U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                   << 0x16U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                   << 0x16U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                     << 0x17U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                  << 0x15U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                         >> 2U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                         >> 1U)) 
                                                       ^ 
                                                       vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U]))));
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                               << 0x14U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                 << 0x15U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                 << 0x15U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                   << 0x16U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                << 0x14U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                  << 0x16U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                     >> 6U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                     >> 5U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                    >> 4U))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__203(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__203\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                         >> 6U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                         >> 7U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                           >> 6U))) 
                                                    | (0x3ffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                           >> 6U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                             >> 5U)))) 
                                                   | (0x1ffe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                            >> 5U))))) 
                                       | ((0x1000U 
                                           & (((0x7fff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                    >> 5U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                      >> 4U))) 
                                               | (0xffff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                      >> 4U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                        >> 3U)))) 
                                              | (0x7fff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                     >> 5U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                       >> 3U))))) 
                                          | (0x800U 
                                             & (((0x1ffff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                      >> 3U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                        >> 2U))) 
                                                 | (0x3ffff800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                        >> 2U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                          >> 1U)))) 
                                                | (0x1ffff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                       >> 3U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                   >> 0x12U)) 
                                               ^ (0x7ffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                     >> 0x11U))) 
                                              ^ (0xfffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                    >> 0x10U)))) 
                                       | ((2U & (((0xfffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                      >> 0x10U)) 
                                                  ^ 
                                                  (0x1fffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                      >> 0xfU))) 
                                                 ^ 
                                                 (0x3fffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                     >> 0xeU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                     >> 0xeU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                     >> 0xdU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                    >> 0xcU)))))))));
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
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                         >> 8U))) 
                                                  | (0xf80000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                           >> 7U)))) 
                                                 | (0x780000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                          >> 7U))))) 
                                    | (0x40000U & (
                                                   ((0x1fc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                         >> 7U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                           >> 6U))) 
                                                    | (0x3fc0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                           >> 6U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                             >> 5U)))) 
                                                   | (0x1fc0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                                  >> 0x1bU)) 
                                                              ^ 
                                                              (0x3eU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                                  >> 0x1aU))) 
                                                             ^ 
                                                             (0x7eU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                                 >> 0x19U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                                 >> 0x19U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                                 >> 0x18U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                                >> 0x17U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
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
                                               & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                    << 0x17U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                      >> 8U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                      >> 8U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                        >> 7U)))) 
                                              | (0x1800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                     << 0x17U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
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
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
                                                         >> 0x1fU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x45U] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                               << 0x16U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                 << 0x17U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                 << 0x17U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                   << 0x18U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                << 0x16U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                  << 0x18U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                     >> 4U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                     >> 3U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                    >> 2U))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i__204(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i__204\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                         >> 4U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                         >> 5U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                           >> 4U))) 
                                                    | (0xfffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                           >> 4U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                             >> 3U)))) 
                                                   | (0x7ffe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                          >> 5U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                            >> 3U))))) 
                                       | ((0x1000U 
                                           & (((0x1ffff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                    >> 3U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                      >> 2U))) 
                                               | (0x3ffff000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                      >> 2U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                        >> 1U)))) 
                                              | (0x1ffff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                     >> 3U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                       >> 1U))))) 
                                          | (0x800U 
                                             & (((0x7ffff800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                      >> 1U) 
                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U])) 
                                                 | (0xfffff800U 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                          << 1U)))) 
                                                | (0x7ffff800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                       >> 1U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                   >> 0x10U)) 
                                               ^ (0x1fffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                     >> 0xfU))) 
                                              ^ (0x3fffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                    >> 0xeU)))) 
                                       | ((2U & (((0x3fffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                      >> 0xeU)) 
                                                  ^ 
                                                  (0x7fffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                      >> 0xdU))) 
                                                 ^ 
                                                 (0xffffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                     >> 0xcU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                     >> 0xcU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                     >> 0xbU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                    >> 0xaU)))))))));
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
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                       >> 7U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                         >> 6U))) 
                                                  | (0x3f80000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                         >> 6U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                           >> 5U)))) 
                                                 | (0x1f80000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                        >> 7U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                          >> 5U))))) 
                                    | (0x40000U & (
                                                   ((0x7fc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                         >> 5U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                           >> 4U))) 
                                                    | (0xffc0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                           >> 4U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                             >> 3U)))) 
                                                   | (0x7fc0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                          >> 5U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                                  >> 0x19U)) 
                                                              ^ 
                                                              (0xfeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                                  >> 0x18U))) 
                                                             ^ 
                                                             (0x1feU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                                 >> 0x17U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                                 >> 0x17U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                                 >> 0x16U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                                >> 0x15U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
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
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                    >> 7U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                      >> 6U))) 
                                               | (0x3800000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                      >> 6U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                        >> 5U)))) 
                                              | (0x1800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                     >> 7U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                         >> 0x1eU) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
                                                         >> 0x1dU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x46U] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                               << 0x18U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                 << 0x19U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                 << 0x19U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                   << 0x1aU))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                << 0x18U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                  << 0x1aU))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     >> 2U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     >> 1U)) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i__205(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i__205\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                         >> 2U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                                                   ((0x1fffe000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                         >> 3U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                           >> 2U))) 
                                                    | (0x3fffe000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                           >> 2U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                             >> 1U)))) 
                                                   | (0x1fffe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                          >> 3U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                            >> 1U))))) 
                                       | ((0x1000U 
                                           & (((0x7ffff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                    >> 1U) 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U])) 
                                               | (0xfffff000U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                        << 1U)))) 
                                              | (0x7ffff000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     >> 1U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                       << 1U))))) 
                                          | (0x800U 
                                             & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                   << 1U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     << 2U)) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     << 2U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                       << 3U))) 
                                                | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                    << 1U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                      << 3U)))))))))));
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
                                    | ((4U & (((0x3fffcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                   >> 0xeU)) 
                                               ^ (0x7fffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     >> 0xdU))) 
                                              ^ (0xffffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                    >> 0xcU)))) 
                                       | ((2U & (((0xffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                      >> 0xcU)) 
                                                  ^ 
                                                  (0x1ffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                      >> 0xbU))) 
                                                 ^ 
                                                 (0x3ffffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     >> 0xaU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     >> 0xaU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     >> 9U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                    >> 8U)))))))));
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
                                 | ((0x80000U & (((0x7f80000U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                       >> 5U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                         >> 4U))) 
                                                  | (0xff80000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                         >> 4U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                           >> 3U)))) 
                                                 | (0x7f80000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                        >> 5U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                          >> 3U))))) 
                                    | (0x40000U & (
                                                   ((0x1ffc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                         >> 3U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                           >> 2U))) 
                                                    | (0x3ffc0000U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                           >> 2U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                             >> 1U)))) 
                                                   | (0x1ffc0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                          >> 3U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                            >> 1U))))))))));
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
                                                          & (((0x1feU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                                  >> 0x17U)) 
                                                              ^ 
                                                              (0x3feU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                                  >> 0x16U))) 
                                                             ^ 
                                                             (0x7feU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                                 >> 0x15U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                                 >> 0x15U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                                 >> 0x14U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                                >> 0x13U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                         >> 0x1dU)));
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
                              | (0x800000U & (((0x7800000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                    >> 5U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                      >> 4U))) 
                                               | (0xf800000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                      >> 4U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                        >> 3U)))) 
                                              | (0x7800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     >> 5U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                       >> 3U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                         >> 0x1cU) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                         >> 0x1bU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                        >> 0x1aU)))));
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
                           | (0x4000000U & ((0x4000000U 
                                             & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                  << 0x1aU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                    >> 5U)) 
                                                | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                    >> 5U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                      >> 4U)))) 
                                            | (0xc000000U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                   << 0x1aU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     >> 4U)))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                     >> 0x1fU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x47U] 
                                                    >> 0x1eU))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i__206(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i__206\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U]));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                                                   ((0x7fffe000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                         >> 1U) 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])) 
                                                    | (0xffffe000U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                             << 1U)))) 
                                                   | (0x7fffe000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                            << 1U))))) 
                                       | ((0x1000U 
                                           & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                 << 1U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                   << 2U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                   << 2U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                     << 3U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                  << 1U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                    << 3U)))) 
                                          | (0x800U 
                                             & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                   << 3U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                     << 4U)) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                     << 4U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                       << 5U))) 
                                                | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                    << 3U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                      << 5U)))))))))));
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
                                    | ((4U & (((0xffffcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                   >> 0xcU)) 
                                               ^ (0x1ffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                     >> 0xbU))) 
                                              ^ (0x3ffffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                    >> 0xaU)))) 
                                       | ((2U & (((0x3ffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                      >> 0xaU)) 
                                                  ^ 
                                                  (0x7ffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                      >> 9U))) 
                                                 ^ 
                                                 (0xfffffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                     >> 8U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                     >> 8U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                     >> 7U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                    >> 6U)))))))));
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
                                 | ((0x80000U & (((0x1ff80000U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                       >> 3U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                         >> 2U))) 
                                                  | (0x3ff80000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                         >> 2U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                           >> 1U)))) 
                                                 | (0x1ff80000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                        >> 3U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                          >> 1U))))) 
                                    | (0x40000U & (
                                                   ((0x7ffc0000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                         >> 1U) 
                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U])) 
                                                    | (0xfffc0000U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                             << 1U)))) 
                                                   | (0x7ffc0000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                            << 1U))))))))));
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
                                                          & (((0x7feU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                                  >> 0x15U)) 
                                                              ^ 
                                                              (0xffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                                  >> 0x14U))) 
                                                             ^ 
                                                             (0x1ffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                                 >> 0x13U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                                 >> 0x13U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                                 >> 0x12U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                                >> 0x11U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                         >> 0x1bU)));
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
                              | (0x800000U & (((0x1f800000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                    >> 3U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                      >> 2U))) 
                                               | (0x3f800000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                      >> 2U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                        >> 1U)))) 
                                              | (0x1f800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                     >> 3U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                       >> 1U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                         >> 0x1aU) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                         >> 0x19U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                        >> 0x18U)))));
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
                           | (0x4000000U & (((0xc000000U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                  >> 4U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                    >> 3U))) 
                                             | (0x1c000000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                    >> 3U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                      >> 2U)))) 
                                            | (0xc000000U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                   >> 4U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                     >> 2U)))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                     >> 0x1eU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                     >> 0x1dU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x48U] 
                                                    >> 0x1cU))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i__207(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i__207\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                      >> 0x1eU));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                      << 1U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                        << 2U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                        << 2U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                          << 3U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                       << 1U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                         << 3U)))) 
                                       | ((0x1000U 
                                           & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                 << 3U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                   << 4U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                   << 4U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                     << 5U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                  << 3U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                    << 5U)))) 
                                          | (0x800U 
                                             & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                   << 5U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                     << 6U)) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                     << 6U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                       << 7U))) 
                                                | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                    << 5U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                      << 7U)))))))))));
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
                                    | ((4U & (((0x3ffffcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                   >> 0xaU)) 
                                               ^ (0x7ffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                     >> 9U))) 
                                              ^ (0xfffffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                    >> 8U)))) 
                                       | ((2U & (((0xfffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                      >> 8U)) 
                                                  ^ 
                                                  (0x1fffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                      >> 7U))) 
                                                 ^ 
                                                 (0x3fffffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                     >> 6U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                     >> 6U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                     >> 5U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                    >> 4U)))))))));
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
                                 | ((0x80000U & (((0x7ff80000U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                       >> 1U) 
                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])) 
                                                  | (0xfff80000U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                           << 1U)))) 
                                                 | (0x7ff80000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                        >> 1U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                          << 1U))))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                      << 1U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                        << 2U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                        << 2U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                          << 3U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                       << 1U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                         << 3U)))))))));
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
                                                          & (((0x1ffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                                  >> 0x13U)) 
                                                              ^ 
                                                              (0x3ffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                                  >> 0x12U))) 
                                                             ^ 
                                                             (0x7ffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                                 >> 0x11U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                                 >> 0x11U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                                 >> 0x10U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                                >> 0xfU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                         >> 0x19U)));
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
                              | (0x800000U & (((0x7f800000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                    >> 1U) 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U])) 
                                               | (0xff800000U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                        << 1U)))) 
                                              | (0x7f800000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                     >> 1U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                       << 1U))))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                         >> 0x18U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                         >> 0x17U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                        >> 0x16U)))));
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
                           | (0x4000000U & (((0x3c000000U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                  >> 2U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                    >> 1U))) 
                                             | (0x7c000000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                    >> 1U) 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U]))) 
                                            | (0x3c000000U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                   >> 2U) 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U]))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                     >> 0x1cU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                     >> 0x1bU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x49U] 
                                                    >> 0x1aU))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i__208(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i__208\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                      << 3U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                        << 4U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                        << 4U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                          << 5U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                       << 3U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                         << 5U)))) 
                                       | ((0x1000U 
                                           & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                 << 5U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                   << 6U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                   << 6U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                     << 7U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                  << 5U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                    << 7U)))) 
                                          | (0x800U 
                                             & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                   << 7U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                     << 8U)) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                     << 8U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                       << 9U))) 
                                                | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                    << 7U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                      << 9U)))))))))));
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
                                    | ((4U & (((0xfffffcU 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                   >> 8U)) 
                                               ^ (0x1fffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                     >> 7U))) 
                                              ^ (0x3fffffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                    >> 6U)))) 
                                       | ((2U & (((0x3fffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                      >> 6U)) 
                                                  ^ 
                                                  (0x7fffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                      >> 5U))) 
                                                 ^ 
                                                 (0xffffffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                     >> 4U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                     >> 4U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                     >> 3U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                    >> 2U)))))))));
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                    << 1U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                      << 2U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                      << 2U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                        << 3U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                     << 1U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                       << 3U)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                      << 3U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                        << 4U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                        << 4U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                          << 5U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                       << 3U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                         << 5U)))))))));
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
                                                          & (((0x7ffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                                  >> 0x11U)) 
                                                              ^ 
                                                              (0xfffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                                  >> 0x10U))) 
                                                             ^ 
                                                             (0x1fffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                                 >> 0xfU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                                 >> 0xfU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                                 >> 0xeU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                                >> 0xdU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                         >> 0x17U)));
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                 << 1U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                   << 2U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                   << 2U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                     << 3U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                  << 1U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                    << 3U)))))));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_32(
                                                   (0x1cU 
                                                    & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_32(
                                                                  (7U 
                                                                   & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa24__in))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                         >> 0x16U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                         >> 0x15U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                        >> 0x14U)))));
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
                           | (0x4000000U & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                 << 1U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                 << 1U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                   << 2U))) 
                                            | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                  << 2U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                     >> 0x1aU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                     >> 0x19U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4aU] 
                                                    >> 0x18U))));
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i__209(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i__209\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                      << 5U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                        << 6U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                        << 6U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                          << 7U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                       << 5U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                         << 7U)))) 
                                       | ((0x1000U 
                                           & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                 << 7U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                   << 8U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                   << 8U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                     << 9U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                  << 7U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                    << 9U)))) 
                                          | (0x800U 
                                             & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                   << 9U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                     << 0xaU)) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                     << 0xaU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                       << 0xbU))) 
                                                | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                    << 9U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                   >> 6U)) 
                                               ^ (0x7fffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                     >> 5U))) 
                                              ^ (0xffffffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                    >> 4U)))) 
                                       | ((2U & (((0xffffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                      >> 4U)) 
                                                  ^ 
                                                  (0x1ffffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                      >> 3U))) 
                                                 ^ 
                                                 (0x3ffffffeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                     >> 2U)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                     >> 2U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                     >> 1U)) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU]))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                    << 3U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                      << 4U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                      << 4U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                        << 5U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                     << 3U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                       << 5U)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                      << 5U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                        << 6U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                        << 6U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                          << 7U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                       << 5U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                                  >> 0xfU)) 
                                                              ^ 
                                                              (0x3fffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                                  >> 0xeU))) 
                                                             ^ 
                                                             (0x7fffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                                 >> 0xdU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                                 >> 0xdU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                                 >> 0xcU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                                >> 0xbU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                 << 3U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                   << 4U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                   << 4U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                     << 5U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                  << 3U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                         >> 0x14U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                         >> 0x13U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                               << 2U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                 << 3U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                 << 3U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                   << 4U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                << 2U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                  << 4U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                     >> 0x18U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                     >> 0x17U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                    >> 0x16U))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                         >> 0x19U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i__465(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i__465\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i__210(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i__210\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                      << 7U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                        << 8U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                        << 8U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                          << 9U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                       << 7U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                         << 9U)))) 
                                       | ((0x1000U 
                                           & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                 << 9U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                   << 0xaU)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                   << 0xaU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                     << 0xbU))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                  << 9U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                    << 0xbU)))) 
                                          | (0x800U 
                                             & ((0x800U 
                                                 & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                        >> 0x14U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                        >> 0x14U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                          >> 0x13U)))) 
                                                | (0x1800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                   >> 4U)) 
                                               ^ (0x1ffffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                     >> 3U))) 
                                              ^ (0x3ffffffcU 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                    >> 2U)))) 
                                       | ((2U & (((0x3ffffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                      >> 2U)) 
                                                  ^ 
                                                  (0x7ffffffeU 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                      >> 1U))) 
                                                 ^ 
                                                 (0xfffffffeU 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU]))) 
                                          | (1U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                     >> 0x1fU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4bU] 
                                                    >> 0x1eU)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                          >> 7U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                    << 5U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                      << 6U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                      << 6U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                        << 7U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                     << 5U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                       << 7U)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                      << 7U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                        << 8U)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                        << 8U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                          << 9U))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                       << 7U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                                  >> 0xdU)) 
                                                              ^ 
                                                              (0xffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                                  >> 0xcU))) 
                                                             ^ 
                                                             (0x1ffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                                 >> 0xbU)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                                 >> 0xbU) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                                 >> 0xaU)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                                >> 9U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                 << 5U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                   << 6U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                   << 6U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                     << 7U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                  << 5U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                         >> 0x12U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                         >> 0x11U)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                               << 4U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                 << 5U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                 << 5U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                   << 6U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                << 4U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                  << 6U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                     >> 0x16U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                     >> 0x15U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                    >> 0x14U))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                         >> 0x17U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i__466(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i__466\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i__211(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i__211\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                         >> 0x18U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                      << 9U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                        << 0xaU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                        << 0xaU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                          << 0xbU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                       << 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                         << 0xbU)))) 
                                       | ((0x1000U 
                                           & (((0xfffff000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                    << 0xbU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                      << 0xcU))) 
                                               | (0x1000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                      << 0xcU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                        >> 0x13U)))) 
                                              | (0x1000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                     << 0xbU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                       >> 0x13U))))) 
                                          | (0x800U 
                                             & (((0x1800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                      >> 0x13U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                        >> 0x12U))) 
                                                 | (0x3800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                        >> 0x12U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                          >> 0x11U)))) 
                                                | (0x1800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                       >> 0x13U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
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
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                   >> 2U)) 
                                               ^ (0x7ffffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                     >> 1U))) 
                                              ^ (0xfffffffcU 
                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU]))) 
                                       | ((2U & (((0xfffffffeU 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU]) 
                                                  ^ 
                                                  (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                   << 1U)) 
                                                 ^ 
                                                 (2U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                     >> 0x1eU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                     >> 0x1eU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                     >> 0x1dU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4cU] 
                                                    >> 0x1cU)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                          >> 5U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                    << 7U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                      << 8U)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                      << 8U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                        << 9U))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                     << 7U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                       << 9U)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                      << 9U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                        << 0xaU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                        << 0xaU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                          << 0xbU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                       << 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                                  >> 0xbU)) 
                                                              ^ 
                                                              (0x3ffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                                  >> 0xaU))) 
                                                             ^ 
                                                             (0x7ffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                                 >> 9U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                                 >> 9U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                                 >> 8U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                                >> 7U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                 << 7U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                   << 8U)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                   << 8U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                     << 9U))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                  << 7U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                         >> 0x10U) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                         >> 0xfU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                               << 6U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                 << 7U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                 << 7U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                   << 8U))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                << 6U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                  << 8U))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                     >> 0x14U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                     >> 0x13U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                    >> 0x12U))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                         >> 0x15U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i__467(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i__467\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i__212(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i__212\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                         >> 0x14U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_32(
                                                                    (7U 
                                                                     & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                         >> 0x16U)));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
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
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                        << 0xcU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                        << 0xcU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                          << 0xdU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                         << 0xdU)))) 
                                       | ((0x1000U 
                                           & (((0x1000U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                    >> 0x13U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                      >> 0x12U))) 
                                               | (0x3000U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                      >> 0x12U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                        >> 0x11U)))) 
                                              | (0x1000U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                     >> 0x13U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                       >> 0x11U))))) 
                                          | (0x800U 
                                             & (((0x7800U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                      >> 0x11U) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                        >> 0x10U))) 
                                                 | (0xf800U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                        >> 0x10U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                          >> 0xfU)))) 
                                                | (0x7800U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                       >> 0x11U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
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
                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU]) 
                                               ^ (0xfffffffcU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                     << 1U))) 
                                              ^ (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                 << 2U))) 
                                       | ((2U & (((2U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                      >> 0x1eU)) 
                                                  ^ 
                                                  (6U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                      >> 0x1dU))) 
                                                 ^ 
                                                 (0xeU 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                     >> 0x1cU)))) 
                                          | (1U & (
                                                   ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                     >> 0x1cU) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                     >> 0x1bU)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4dU] 
                                                    >> 0x1aU)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
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
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                    << 9U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                      << 0xaU)) 
                                                  | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                      << 0xaU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                        << 0xbU))) 
                                                 | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                     << 9U) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                       << 0xbU)))) 
                                    | (0x40000U & (
                                                   (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                        << 0xcU)) 
                                                    | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                        << 0xcU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                          << 0xdU))) 
                                                   | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                       << 0xbU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
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
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                                  >> 9U)) 
                                                              ^ 
                                                              (0xfffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                                  >> 8U))) 
                                                             ^ 
                                                             (0x1fffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                                 >> 7U)))) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                                 >> 7U) 
                                                                ^ 
                                                                (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                                 >> 6U)) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                                >> 5U)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
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
                              | (0x800000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                 << 9U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                   << 0xaU)) 
                                               | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                   << 0xaU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                     << 0xbU))) 
                                              | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                  << 9U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
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
                                                    & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                         >> 0xeU) 
                                                        ^ 
                                                        (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                         >> 0xdU)) 
                                                       ^ 
                                                       (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
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
                           | (0x4000000U & ((((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                               << 8U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                 << 9U)) 
                                             | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                 << 9U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                   << 0xaU))) 
                                            | ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                << 8U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                  << 0xaU))))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__PVT__fourth_s))) 
                                     << 1U)) | (1U 
                                                & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                     >> 0x12U) 
                                                    ^ 
                                                    (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                     >> 0x11U)) 
                                                   ^ 
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                    >> 0x10U))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x4eU] 
                                                         >> 0x13U)));
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i__468(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i__468\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
                                                               >> 1U))))))))))))));
}
