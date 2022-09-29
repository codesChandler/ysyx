// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i__39(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i__39\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x26U]))))))))))))));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i__40(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i__40\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x27U]))))))))))))));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i__41(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i__41\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x28U]))))))))))))));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i__42(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i__42\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x29U]))))))))))))));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i__43(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i__43\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2aU]))))))))))))));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i__44(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i__44\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2bU]))))))))))))));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i__45(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i__45\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2cU]))))))))))))));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i__46(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i__46\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2dU]))))))))))))));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i__47(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i__47\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2eU]))))))))))))));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i__48(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i__48\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & ((((IData)((0xc0000000U 
                                                 == 
                                                 (0xc0000000U 
                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                        | (IData)((0x60000000U 
                                                   == 
                                                   (0x60000000U 
                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                       | (IData)((0xa0000000U 
                                                  == 
                                                  (0xa0000000U 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                      << 0xaU)) | (
                                                   (0x200U 
                                                    & ((((IData)(
                                                                 (0x18000000U 
                                                                  == 
                                                                  (0x18000000U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                                         | (IData)(
                                                                   (0xc000000U 
                                                                    == 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                        | (IData)(
                                                                  (0x14000000U 
                                                                   == 
                                                                   (0x14000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((((IData)(
                                                                    (0x3000000U 
                                                                     == 
                                                                     (0x3000000U 
                                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                                            | (IData)(
                                                                      (0x1800000U 
                                                                       == 
                                                                       (0x1800000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                           | (IData)(
                                                                     (0x2800000U 
                                                                      == 
                                                                      (0x2800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((((IData)(
                                                                       (0x600000U 
                                                                        == 
                                                                        (0x600000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                                               | (IData)(
                                                                         (0x300000U 
                                                                          == 
                                                                          (0x300000U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                              | (IData)(
                                                                        (0x500000U 
                                                                         == 
                                                                         (0x500000U 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((((IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                                                  | (IData)(
                                                                            (0x60000U 
                                                                             == 
                                                                             (0x60000U 
                                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                                 | (IData)(
                                                                           (0xa0000U 
                                                                            == 
                                                                            (0xa0000U 
                                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((((IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                                                     | (IData)(
                                                                               (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                                    | (IData)(
                                                                              (0x14000U 
                                                                               == 
                                                                               (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                                                        | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                                       | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                                                           | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                                          | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                                                              | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                                             | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU])))) 
                                                                               << 1U)) 
                                                                           | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x2fU]))))))))))))));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i__49(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i__49\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i__50(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i__50\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__51(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__51\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__52(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__52\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__53(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__53\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__54(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__54\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__55(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__55\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__56(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__56\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__57(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__57\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__58(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__58\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__59(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__59\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__60(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__60\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i__61(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i__61\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i__62(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i__62\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i__63(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i__63\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i__64(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i__64\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i__65(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i__65\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i__66(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i__66\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i__67(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i__67\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i__68(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i__68\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i__69(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i__69\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i__70(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i__70\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i__71(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i__71\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i__72(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i__72\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__73(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__73\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__74(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__74\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__75(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__75\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i__76(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i__76\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                   << 0x1cU))))));
    vlSelf->__PVT__c = ((0x1fffffffU & vlSelf->__PVT__c) 
                        | (0x20000000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                   << 0x1dU))))));
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
