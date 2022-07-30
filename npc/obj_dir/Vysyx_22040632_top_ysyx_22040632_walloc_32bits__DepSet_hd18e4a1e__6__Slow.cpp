// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i__353(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i__353\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                         >> 9U)));
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))))))));
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                         >> 0x19U)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                         >> 0x1aU)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x1800000U 
                                                             == 
                                                             (0x1800000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU]))) 
                                                    | (IData)(
                                                              (0xc00000U 
                                                               == 
                                                               (0xc00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))) 
                                                   | (IData)(
                                                             (0x1400000U 
                                                              == 
                                                              (0x1400000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x180000U 
                                                                      == 
                                                                      (0x180000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU]))) 
                                                             | (IData)(
                                                                       (0xc0000U 
                                                                        == 
                                                                        (0xc0000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))) 
                                                            | (IData)(
                                                                      (0x140000U 
                                                                       == 
                                                                       (0x140000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU]))) 
                                                                         | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))) 
                                                                        | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU]))) 
                                                                            | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))) 
                                                                           | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU]))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU]))) 
                                                                                | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))) 
                                                                                | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU]))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                                                << 0xbU)))) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                                                << 0xbU))))) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i__354(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i__354\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                         >> 7U)));
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_4(
                                                             (0xeU 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])) 
                                                 << 1U)) 
                                          | (1U & (
                                                   VL_REDXOR_32(
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU])) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU]))))))));
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0xe00U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                         >> 0x13U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x70000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x700000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                         >> 0x17U)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                         >> 0x18U)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x600000U 
                                                             == 
                                                             (0x600000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU]))) 
                                                    | (IData)(
                                                              (0x300000U 
                                                               == 
                                                               (0x300000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                   | (IData)(
                                                             (0x500000U 
                                                              == 
                                                              (0x500000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x60000U 
                                                                      == 
                                                                      (0x60000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU]))) 
                                                             | (IData)(
                                                                       (0x30000U 
                                                                        == 
                                                                        (0x30000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                            | (IData)(
                                                                      (0x50000U 
                                                                       == 
                                                                       (0x50000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x6000U 
                                                                                == 
                                                                                (0x6000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU]))) 
                                                                         | (IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                                        | (IData)(
                                                                                (0x5000U 
                                                                                == 
                                                                                (0x5000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU]))) 
                                                                            | (IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                                           | (IData)(
                                                                                (0xa00U 
                                                                                == 
                                                                                (0xa00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU]))) 
                                                                                | (IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                                                | (IData)(
                                                                                (0x50U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU]))) 
                                                                                | (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                                                | (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0xaU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                                                >> 0x14U))) 
                                                                                | ((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU]))) 
                                                                                << 0xbU)) 
                                                                                | (0x1800U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5aU] 
                                                                                >> 0x13U))))) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i__355(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i__355\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                         >> 5U)));
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])) 
                                              << 2U)) 
                                       | ((2U & (((0xfffffffeU 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU]) 
                                                  ^ 
                                                  (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                   << 1U)) 
                                                 ^ 
                                                 (2U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU] 
                                                     >> 0x1eU)))) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x70000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))))))));
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x380U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                         >> 0x11U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                         >> 0x15U)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU] 
                                                         >> 0x16U)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x180000U 
                                                             == 
                                                             (0x180000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU]))) 
                                                    | (IData)(
                                                              (0xc0000U 
                                                               == 
                                                               (0xc0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                   | (IData)(
                                                             (0x140000U 
                                                              == 
                                                              (0x140000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x18000U 
                                                                      == 
                                                                      (0x18000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU]))) 
                                                             | (IData)(
                                                                       (0xc000U 
                                                                        == 
                                                                        (0xc000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                            | (IData)(
                                                                      (0x14000U 
                                                                       == 
                                                                       (0x14000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU]))) 
                                                                         | (IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                                        | (IData)(
                                                                                (0x1400U 
                                                                                == 
                                                                                (0x1400U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU]))) 
                                                                            | (IData)(
                                                                                (0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                                           | (IData)(
                                                                                (0x280U 
                                                                                == 
                                                                                (0x280U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                                                << 0xdU)) 
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
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU]))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                                                | (IData)(
                                                                                (0x50000000U 
                                                                                == 
                                                                                (0x50000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5bU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i__356(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i__356\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                         >> 3U)));
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))))))));
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_8(
                                                                          (0xe0U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                         >> 0xfU)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x7000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x70000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                         >> 0x13U)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                         >> 0x14U)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x60000U 
                                                             == 
                                                             (0x60000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU]))) 
                                                    | (IData)(
                                                              (0x30000U 
                                                               == 
                                                               (0x30000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))) 
                                                   | (IData)(
                                                             (0x50000U 
                                                              == 
                                                              (0x50000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x6000U 
                                                                      == 
                                                                      (0x6000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU]))) 
                                                             | (IData)(
                                                                       (0x3000U 
                                                                        == 
                                                                        (0x3000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))) 
                                                            | (IData)(
                                                                      (0x5000U 
                                                                       == 
                                                                       (0x5000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU]))) 
                                                                         | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))) 
                                                                        | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU]))) 
                                                                            | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))) 
                                                                           | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU]))) 
                                                                                << 0xdU) 
                                                                                | (0xffffe000U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                                                << 0xcU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                                                << 0xdU)))) 
                                                                                | (0xffffe000U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                                                << 0xdU))))) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5cU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i__357(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i__357\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                         >> 1U)));
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])) 
                                               ^ vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU]) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x38000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x7000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))))))));
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_8(
                                                                          (0x38U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                         >> 0xdU)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x1c00U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                         >> 0x11U)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                         >> 0x12U)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x18000U 
                                                             == 
                                                             (0x18000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU]))) 
                                                    | (IData)(
                                                              (0xc000U 
                                                               == 
                                                               (0xc000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                   | (IData)(
                                                             (0x14000U 
                                                              == 
                                                              (0x14000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x1800U 
                                                                      == 
                                                                      (0x1800U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU]))) 
                                                             | (IData)(
                                                                       (0xc00U 
                                                                        == 
                                                                        (0xc00U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                            | (IData)(
                                                                      (0x1400U 
                                                                       == 
                                                                       (0x1400U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU]))) 
                                                                         | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                                        | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU]))) 
                                                                            | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                                           | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                                                << 0xdU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                                                >> 0x12U))) 
                                                                                | ((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU]))) 
                                                                                << 0xdU)) 
                                                                                | (0x6000U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                                                << 0xdU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU] 
                                                                                >> 0x11U))))) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU]))) 
                                                                                | (IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))) 
                                                                                | (IData)(
                                                                                (0x28000000U 
                                                                                == 
                                                                                (0x28000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x6000000U 
                                                                                == 
                                                                                (0x6000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU]))) 
                                                                                | (IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))) 
                                                                                | (IData)(
                                                                                (0x5000000U 
                                                                                == 
                                                                                (0x5000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5dU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i__358(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i__358\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU] 
                                                      >> 0x1fU));
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))))))));
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_4(
                                                                          (0xeU 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                         >> 0xbU)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x700U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x7000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                         >> 0xfU)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                         >> 0x10U)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x6000U 
                                                             == 
                                                             (0x6000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU]))) 
                                                    | (IData)(
                                                              (0x3000U 
                                                               == 
                                                               (0x3000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                   | (IData)(
                                                             (0x5000U 
                                                              == 
                                                              (0x5000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x600U 
                                                                      == 
                                                                      (0x600U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU]))) 
                                                             | (IData)(
                                                                       (0x300U 
                                                                        == 
                                                                        (0x300U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                            | (IData)(
                                                                      (0x500U 
                                                                       == 
                                                                       (0x500U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU]))) 
                                                                         | (IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                                        | (IData)(
                                                                                (0x50U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU]))) 
                                                                            | (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                                           | (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0xaU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU]))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                                                | (IData)(
                                                                                (0x50000000U 
                                                                                == 
                                                                                (0x50000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU]))) 
                                                                                | (IData)(
                                                                                (0x6000000U 
                                                                                == 
                                                                                (0x6000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                                                | (IData)(
                                                                                (0xa000000U 
                                                                                == 
                                                                                (0xa000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU]))) 
                                                                                | (IData)(
                                                                                (0xc00000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                                                | (IData)(
                                                                                (0x1400000U 
                                                                                == 
                                                                                (0x1400000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5eU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i__359(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i__359\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU] 
                                                         >> 0x1dU)));
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x3800000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x700000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))))))));
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])) 
                                                             << 1U)) 
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
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x1c0U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x1c00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                         >> 0xdU)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                         >> 0xeU)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x1800U 
                                                             == 
                                                             (0x1800U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U]))) 
                                                    | (IData)(
                                                              (0xc00U 
                                                               == 
                                                               (0xc00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                   | (IData)(
                                                             (0x1400U 
                                                              == 
                                                              (0x1400U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x180U 
                                                                      == 
                                                                      (0x180U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U]))) 
                                                             | (IData)(
                                                                       (0xc0U 
                                                                        == 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                            | (IData)(
                                                                      (0x140U 
                                                                       == 
                                                                       (0x140U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U]))) 
                                                                         | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                                        | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & (((0xfffc0000U 
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
                                                                                >> 0xdU))))) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x5fU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i__360(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i__360\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U] 
                                                         >> 0x1bU)));
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))))))));
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe0000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 7U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x70U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x700U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 0xbU)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 0xcU)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x600U 
                                                             == 
                                                             (0x600U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U]))) 
                                                    | (IData)(
                                                              (0x300U 
                                                               == 
                                                               (0x300U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))) 
                                                   | (IData)(
                                                             (0x500U 
                                                              == 
                                                              (0x500U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x60U 
                                                                      == 
                                                                      (0x60U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U]))) 
                                                             | (IData)(
                                                                       (0x30U 
                                                                        == 
                                                                        (0x30U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))) 
                                                            | (IData)(
                                                                      (0x50U 
                                                                       == 
                                                                       (0x50U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U]))) 
                                                                         << 0x13U) 
                                                                        | (0xfff80000U 
                                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                                               << 0x12U) 
                                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                                                << 0x13U)))) 
                                                                       | (0xfff80000U 
                                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                                              << 0x11U) 
                                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                                                << 0x13U))))) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U]))) 
                                                                            | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                                           | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x6000000U 
                                                                                == 
                                                                                (0x6000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U]))) 
                                                                                | (IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                                                | (IData)(
                                                                                (0x5000000U 
                                                                                == 
                                                                                (0x5000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc00000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U]))) 
                                                                                | (IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                                                | (IData)(
                                                                                (0xa00000U 
                                                                                == 
                                                                                (0xa00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x180000U 
                                                                                == 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U]))) 
                                                                                | (IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                                                | (IData)(
                                                                                (0x140000U 
                                                                                == 
                                                                                (0x140000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x60U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i__361(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i__361\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                         >> 0x19U)));
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x380000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x70000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))))))));
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
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])) 
                                                              ^ 
                                                              vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x38000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 5U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x1cU 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x1c0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 9U)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 0xaU)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x180U 
                                                             == 
                                                             (0x180U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U]))) 
                                                    | (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                   | (IData)(
                                                             (0x140U 
                                                              == 
                                                              (0x140U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x18U 
                                                                      == 
                                                                      (0x18U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U]))) 
                                                             | (IData)(
                                                                       (0xcU 
                                                                        == 
                                                                        (0xcU 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                            | (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x14U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & (((0x80000U 
                                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                                             << 0x13U) 
                                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                                               >> 0xcU))) 
                                                                        | ((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U]))) 
                                                                           << 0x13U)) 
                                                                       | (0x180000U 
                                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                                              << 0x13U) 
                                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U] 
                                                                                >> 0xbU))))) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U]))) 
                                                                            | (IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))) 
                                                                           | (IData)(
                                                                                (0x28000000U 
                                                                                == 
                                                                                (0x28000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U]))) 
                                                                                | (IData)(
                                                                                (0xc00000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))) 
                                                                                | (IData)(
                                                                                (0x1400000U 
                                                                                == 
                                                                                (0x1400000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U]))) 
                                                                                | (IData)(
                                                                                (0x180000U 
                                                                                == 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))) 
                                                                                | (IData)(
                                                                                (0x280000U 
                                                                                == 
                                                                                (0x280000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U]))) 
                                                                                | (IData)(
                                                                                (0x30000U 
                                                                                == 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))) 
                                                                                | (IData)(
                                                                                (0x50000U 
                                                                                == 
                                                                                (0x50000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x61U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i__362(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i__362\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 0x17U)));
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                          >> 0x17U)) 
                                                      | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U] 
                                                         >> 0x1fU)));
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 3U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_4(
                                                                  (7U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_8(
                                                              (0x70U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 7U)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 8U)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x60U 
                                                             == 
                                                             (0x60U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U]))) 
                                                    | (IData)(
                                                              (0x30U 
                                                               == 
                                                               (0x30U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))) 
                                                   | (IData)(
                                                             (0x50U 
                                                              == 
                                                              (0x50U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (6U 
                                                                      == 
                                                                      (6U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U]))) 
                                                             << 0x17U) 
                                                            | (0xff800000U 
                                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                                   << 0x16U) 
                                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                                     << 0x17U)))) 
                                                           | (0xff800000U 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                                  << 0x15U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                                    << 0x17U))))) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U]))) 
                                                                         | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                                        | (IData)(
                                                                                (0x50000000U 
                                                                                == 
                                                                                (0x50000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U]))) 
                                                                            | (IData)(
                                                                                (0x6000000U 
                                                                                == 
                                                                                (0x6000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                                           | (IData)(
                                                                                (0xa000000U 
                                                                                == 
                                                                                (0xa000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x62U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i__363(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i__363\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                         >> 0x15U)));
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x38000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x7000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))))))));
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x3800000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 1U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (VL_REDXOR_32(
                                                                    (0xc0000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])) 
                                                       ^ 
                                                       vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U]))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_8(
                                                              (0x1cU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 5U)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 6U)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x18U 
                                                             == 
                                                             (0x18U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U]))) 
                                                    | (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                   | (IData)(
                                                             (0x14U 
                                                              == 
                                                              (0x14U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & (((0x800000U 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                                 << 0x17U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                                   >> 8U))) 
                                                            | ((IData)(
                                                                       (0xc0000000U 
                                                                        == 
                                                                        (0xc0000000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U]))) 
                                                               << 0x17U)) 
                                                           | (0x1800000U 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                                  << 0x17U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U] 
                                                                    >> 7U))))) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U]))) 
                                                                         | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))) 
                                                                        | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U]))) 
                                                                            | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))) 
                                                                           | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x180000U 
                                                                                == 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U]))) 
                                                                                | (IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))) 
                                                                                | (IData)(
                                                                                (0x140000U 
                                                                                == 
                                                                                (0x140000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30000U 
                                                                                == 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U]))) 
                                                                                | (IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))) 
                                                                                | (IData)(
                                                                                (0x28000U 
                                                                                == 
                                                                                (0x28000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x6000U 
                                                                                == 
                                                                                (0x6000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U]))) 
                                                                                | (IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))) 
                                                                                | (IData)(
                                                                                (0x5000U 
                                                                                == 
                                                                                (0x5000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x63U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i__364(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i__364\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                         >> 0x13U)));
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0xe000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x1c00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))))))));
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe00000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U] 
                                                      >> 0x1fU));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x70000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                         >> 3U)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                         >> 4U)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U]))) 
                                                    << 0x1aU) 
                                                   | (0xfc000000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                          << 0x19U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                            << 0x1aU)))) 
                                                  | (0xfc000000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                         << 0x18U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                           << 0x1aU))))) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0x60000000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U]))) 
                                                             | (IData)(
                                                                       (0x30000000U 
                                                                        == 
                                                                        (0x30000000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                            | (IData)(
                                                                      (0x50000000U 
                                                                       == 
                                                                       (0x50000000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x6000000U 
                                                                                == 
                                                                                (0x6000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U]))) 
                                                                         | (IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                                        | (IData)(
                                                                                (0x5000000U 
                                                                                == 
                                                                                (0x5000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc00000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U]))) 
                                                                            | (IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                                           | (IData)(
                                                                                (0xa00000U 
                                                                                == 
                                                                                (0xa00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U]))) 
                                                                                | (IData)(
                                                                                (0x30000U 
                                                                                == 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                                                | (IData)(
                                                                                (0x50000U 
                                                                                == 
                                                                                (0x50000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U]))) 
                                                                                | (IData)(
                                                                                (0x6000U 
                                                                                == 
                                                                                (0x6000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                                                | (IData)(
                                                                                (0xa000U 
                                                                                == 
                                                                                (0xa000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U]))) 
                                                                                | (IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                                                | (IData)(
                                                                                (0x1400U 
                                                                                == 
                                                                                (0x1400U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x64U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i__365(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i__365\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                         >> 0x11U)));
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0x3800U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x700U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                          >> 0x11U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                            >> 0x19U))));
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x380000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                         >> 0x1dU)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & (VL_REDXOR_32(
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                         >> 1U)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                         >> 2U)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & (((0x4000000U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                        << 0x1aU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                          >> 5U))) 
                                                   | ((IData)(
                                                              (0xc0000000U 
                                                               == 
                                                               (0xc0000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U]))) 
                                                      << 0x1aU)) 
                                                  | (0xc000000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                         << 0x1aU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U] 
                                                           >> 4U))))) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x18000000U 
                                                                      == 
                                                                      (0x18000000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U]))) 
                                                             | (IData)(
                                                                       (0xc000000U 
                                                                        == 
                                                                        (0xc000000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))) 
                                                            | (IData)(
                                                                      (0x14000000U 
                                                                       == 
                                                                       (0x14000000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U]))) 
                                                                         | (IData)(
                                                                                (0xc00000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))) 
                                                                        | (IData)(
                                                                                (0x1400000U 
                                                                                == 
                                                                                (0x1400000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U]))) 
                                                                            | (IData)(
                                                                                (0x180000U 
                                                                                == 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))) 
                                                                           | (IData)(
                                                                                (0x280000U 
                                                                                == 
                                                                                (0x280000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x65U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i__366(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i__366\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                         >> 0xfU)));
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0xe00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x1c0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                          >> 0xfU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                            >> 0x17U))));
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                         >> 0x1bU)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x7000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x70000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U] 
                                                      >> 0x1fU));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U]));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x60000000U 
                                                             == 
                                                             (0x60000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U]))) 
                                                    | (IData)(
                                                              (0x30000000U 
                                                               == 
                                                               (0x30000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                   | (IData)(
                                                             (0x50000000U 
                                                              == 
                                                              (0x50000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x6000000U 
                                                                      == 
                                                                      (0x6000000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U]))) 
                                                             | (IData)(
                                                                       (0x3000000U 
                                                                        == 
                                                                        (0x3000000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                            | (IData)(
                                                                      (0x5000000U 
                                                                       == 
                                                                       (0x5000000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U]))) 
                                                                         | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                                        | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U]))) 
                                                                            | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                                           | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x6000U 
                                                                                == 
                                                                                (0x6000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U]))) 
                                                                                | (IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                                                | (IData)(
                                                                                (0x5000U 
                                                                                == 
                                                                                (0x5000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U]))) 
                                                                                | (IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                                                | (IData)(
                                                                                (0xa00U 
                                                                                == 
                                                                                (0xa00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U]))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x66U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i__367(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i__367\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                         >> 0xdU)));
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0x380U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_8(
                                                              (0x70U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                          >> 0xdU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                            >> 0x15U))));
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x38000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                         >> 0x19U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c00000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                         >> 0x1dU)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U] 
                                                      >> 0x1eU));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x18000000U 
                                                             == 
                                                             (0x18000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U]))) 
                                                    | (IData)(
                                                              (0xc000000U 
                                                               == 
                                                               (0xc000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                   | (IData)(
                                                             (0x14000000U 
                                                              == 
                                                              (0x14000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x1800000U 
                                                                      == 
                                                                      (0x1800000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U]))) 
                                                             | (IData)(
                                                                       (0xc00000U 
                                                                        == 
                                                                        (0xc00000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                            | (IData)(
                                                                      (0x1400000U 
                                                                       == 
                                                                       (0x1400000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x180000U 
                                                                                == 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U]))) 
                                                                         | (IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                                        | (IData)(
                                                                                (0x140000U 
                                                                                == 
                                                                                (0x140000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x30000U 
                                                                                == 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U]))) 
                                                                            | (IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                                           | (IData)(
                                                                                (0x28000U 
                                                                                == 
                                                                                (0x28000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U]))) 
                                                                                | (IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                                                | (IData)(
                                                                                (0x1400U 
                                                                                == 
                                                                                (0x1400U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U]))) 
                                                                                | (IData)(
                                                                                (0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                                                | (IData)(
                                                                                (0x280U 
                                                                                == 
                                                                                (0x280U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U]))) 
                                                                                | (IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                                                | (IData)(
                                                                                (0x50U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x67U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i__368(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i__368\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                         >> 0xbU)));
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0xe0U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_8(
                                                              (0x1cU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                          >> 0xbU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                            >> 0x13U))));
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0xe000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                         >> 0x17U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x700000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x7000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                         >> 0x1bU)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa29__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa28__in) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->cout_group = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                           << 0x1dU) | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout) 
                                         << 0x1cU) 
                                        | ((0x8000000U 
                                            & ((((IData)(
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
                                           | ((0x4000000U 
                                               & ((((IData)(
                                                            (0x6000000U 
                                                             == 
                                                             (0x6000000U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U]))) 
                                                    | (IData)(
                                                              (0x3000000U 
                                                               == 
                                                               (0x3000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                   | (IData)(
                                                             (0x5000000U 
                                                              == 
                                                              (0x5000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                  << 0x1aU)) 
                                              | ((0x2000000U 
                                                  & ((((IData)(
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
                                                 | ((0x1000000U 
                                                     & ((((IData)(
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
                                                    | ((0x800000U 
                                                        & ((((IData)(
                                                                     (0x600000U 
                                                                      == 
                                                                      (0x600000U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U]))) 
                                                             | (IData)(
                                                                       (0x300000U 
                                                                        == 
                                                                        (0x300000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                            | (IData)(
                                                                      (0x500000U 
                                                                       == 
                                                                       (0x500000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                           << 0x17U)) 
                                                       | ((0x400000U 
                                                           & ((((IData)(
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
                                                          | ((0x200000U 
                                                              & ((((IData)(
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
                                                             | ((0x100000U 
                                                                 & ((((IData)(
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
                                                                | ((0x80000U 
                                                                    & ((((IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U]))) 
                                                                         | (IData)(
                                                                                (0x30000U 
                                                                                == 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                                        | (IData)(
                                                                                (0x50000U 
                                                                                == 
                                                                                (0x50000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U]))) 
                                                                            | (IData)(
                                                                                (0x6000U 
                                                                                == 
                                                                                (0x6000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                                           | (IData)(
                                                                                (0xa000U 
                                                                                == 
                                                                                (0xa000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                                          << 0x12U)) 
                                                                      | ((0x20000U 
                                                                          & ((((IData)(
                                                                                (0x600U 
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
                                                                         | ((0x10000U 
                                                                             & ((((IData)(
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
                                                                            | ((0x8000U 
                                                                                & ((((IData)(
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
                                                                               | ((0x4000U 
                                                                                & ((((IData)(
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
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x68U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}
