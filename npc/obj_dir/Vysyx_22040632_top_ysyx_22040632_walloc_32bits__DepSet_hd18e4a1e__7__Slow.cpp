// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i__369(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i__369\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U]))) 
                                                    | (IData)(
                                                              (0xc00000U 
                                                               == 
                                                               (0xc00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))) 
                                                   | (IData)(
                                                             (0x1400000U 
                                                              == 
                                                              (0x1400000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))) 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U]))) 
                                                             | (IData)(
                                                                       (0xc0000U 
                                                                        == 
                                                                        (0xc0000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))) 
                                                            | (IData)(
                                                                      (0x140000U 
                                                                       == 
                                                                       (0x140000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U]))) 
                                                                         | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))) 
                                                                        | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U]))) 
                                                                            | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))) 
                                                                           | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U]))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U]))) 
                                                                                | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))) 
                                                                                | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U]))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                                                << 0xbU)))) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                                                << 0xbU))))) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i__370(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i__370\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_4(
                                                             (0xeU 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])) 
                                                 << 1U)) 
                                          | (1U & (
                                                   VL_REDXOR_32(
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U])) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU]))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                          >> 7U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0xe00U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                         >> 0x13U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x70000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x700000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU]))) 
                                                    | (IData)(
                                                              (0x300000U 
                                                               == 
                                                               (0x300000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
                                                   | (IData)(
                                                             (0x500000U 
                                                              == 
                                                              (0x500000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU]))) 
                                                             | (IData)(
                                                                       (0x30000U 
                                                                        == 
                                                                        (0x30000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
                                                            | (IData)(
                                                                      (0x50000U 
                                                                       == 
                                                                       (0x50000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU]))) 
                                                                         | (IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
                                                                        | (IData)(
                                                                                (0x5000U 
                                                                                == 
                                                                                (0x5000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU]))) 
                                                                            | (IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
                                                                           | (IData)(
                                                                                (0xa00U 
                                                                                == 
                                                                                (0xa00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU]))) 
                                                                                | (IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0x50U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU]))) 
                                                                                | (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0xaU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                                                >> 0x14U))) 
                                                                                | ((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U]))) 
                                                                                << 0xbU)) 
                                                                                | (0x1800U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x69U] 
                                                                                >> 0x13U))))) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i__371(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i__371\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])) 
                                              << 2U)) 
                                       | ((2U & (((0xfffffffeU 
                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]) 
                                                  ^ 
                                                  (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                   << 1U)) 
                                                 ^ 
                                                 (2U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                     >> 0x1eU)))) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x70000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                          >> 5U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x380U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                         >> 0x11U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]))) 
                                                    | (IData)(
                                                              (0xc0000U 
                                                               == 
                                                               (0xc0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                   | (IData)(
                                                             (0x140000U 
                                                              == 
                                                              (0x140000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]))) 
                                                             | (IData)(
                                                                       (0xc000U 
                                                                        == 
                                                                        (0xc000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                            | (IData)(
                                                                      (0x14000U 
                                                                       == 
                                                                       (0x14000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]))) 
                                                                         | (IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                        | (IData)(
                                                                                (0x1400U 
                                                                                == 
                                                                                (0x1400U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]))) 
                                                                            | (IData)(
                                                                                (0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                           | (IData)(
                                                                                (0x280U 
                                                                                == 
                                                                                (0x280U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0xfffff000U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                                                << 0xcU))) 
                                                                                | (0x1000U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                                                << 0xcU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                                                >> 0x13U)))) 
                                                                                | (0x1000U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU] 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU] 
                                                                                >> 0x13U))))) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU]))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
                                                                                | (IData)(
                                                                                (0x50000000U 
                                                                                == 
                                                                                (0x50000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6aU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i__372(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i__372\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
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
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe0000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_8(
                                                                          (0xe0U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                         >> 0xfU)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x7000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x70000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                    | (IData)(
                                                              (0x30000U 
                                                               == 
                                                               (0x30000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                   | (IData)(
                                                             (0x50000U 
                                                              == 
                                                              (0x50000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                             | (IData)(
                                                                       (0x3000U 
                                                                        == 
                                                                        (0x3000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                            | (IData)(
                                                                      (0x5000U 
                                                                       == 
                                                                       (0x5000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                                         | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                        | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                                            | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                           | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                                                << 0xdU) 
                                                                                | (0xffffe000U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                                                << 0xcU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                                                << 0xdU)))) 
                                                                                | (0xffffe000U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                                                << 0xbU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                                                << 0xdU))))) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i__373(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i__373\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
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
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])) 
                                               ^ vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x38000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x7000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_8(
                                                                          (0x38U 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                         >> 0xdU)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x1c00U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                    | (IData)(
                                                              (0xc000U 
                                                               == 
                                                               (0xc000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                   | (IData)(
                                                             (0x14000U 
                                                              == 
                                                              (0x14000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                             | (IData)(
                                                                       (0xc00U 
                                                                        == 
                                                                        (0xc00U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                            | (IData)(
                                                                      (0x1400U 
                                                                       == 
                                                                       (0x1400U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                                         | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                        | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                                            | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                           | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
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
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                                                << 0xdU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                                                >> 0x12U))) 
                                                                                | ((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                                                << 0xdU)) 
                                                                                | (0x6000U 
                                                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                                                << 0xdU) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                                                >> 0x11U))))) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0x28000000U 
                                                                                == 
                                                                                (0x28000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x6000000U 
                                                                                == 
                                                                                (0x6000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0x5000000U 
                                                                                == 
                                                                                (0x5000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i__374(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i__374\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_4(
                                                                          (0xeU 
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                         >> 0xbU)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x700U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x7000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                    | (IData)(
                                                              (0x3000U 
                                                               == 
                                                               (0x3000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                   | (IData)(
                                                             (0x5000U 
                                                              == 
                                                              (0x5000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                             | (IData)(
                                                                       (0x300U 
                                                                        == 
                                                                        (0x300U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                            | (IData)(
                                                                      (0x500U 
                                                                       == 
                                                                       (0x500U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                                         | (IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                        | (IData)(
                                                                                (0x50U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                                            | (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                           | (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0xaU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0x50000000U 
                                                                                == 
                                                                                (0x50000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0x6000000U 
                                                                                == 
                                                                                (0x6000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0xa000000U 
                                                                                == 
                                                                                (0xa000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0xc00000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0x1400000U 
                                                                                == 
                                                                                (0x1400000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i__375(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i__375\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x3800000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x700000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                          >> 0x1dU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                                 >> 1U) 
                                                                ^ 
                                                                vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]) 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                                >> 0x1fU)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                         >> 9U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_16(
                                                                   (0x1c0U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x1c00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                                    | (IData)(
                                                              (0xc00U 
                                                               == 
                                                               (0xc00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                   | (IData)(
                                                             (0x1400U 
                                                              == 
                                                              (0x1400U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                                             | (IData)(
                                                                       (0xc0U 
                                                                        == 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                            | (IData)(
                                                                      (0x140U 
                                                                       == 
                                                                       (0x140U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                                                         | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                                        | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & (((0xfffc0000U 
                                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                                                << 0x11U) 
                                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                                                << 0x12U))) 
                                                                           | (0x40000U 
                                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                                                << 0x12U) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                                                >> 0xdU)))) 
                                                                          | (0x40000U 
                                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                                                << 0x11U) 
                                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i__376(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i__376\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe00000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c0000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                          >> 0x1bU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
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
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe0000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                         >> 7U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x70U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x700U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                    | (IData)(
                                                              (0x300U 
                                                               == 
                                                               (0x300U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                   | (IData)(
                                                             (0x500U 
                                                              == 
                                                              (0x500U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                             | (IData)(
                                                                       (0x30U 
                                                                        == 
                                                                        (0x30U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                            | (IData)(
                                                                      (0x50U 
                                                                       == 
                                                                       (0x50U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                                         << 0x13U) 
                                                                        | (0xfff80000U 
                                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                                               << 0x12U) 
                                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                                                << 0x13U)))) 
                                                                       | (0xfff80000U 
                                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                                              << 0x11U) 
                                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                                                << 0x13U))))) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                                                            | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                                           | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0x5000000U 
                                                                                == 
                                                                                (0x5000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc00000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0xa00000U 
                                                                                == 
                                                                                (0xa00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x180000U 
                                                                                == 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                                                                | (IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                                                | (IData)(
                                                                                (0x140000U 
                                                                                == 
                                                                                (0x140000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i__377(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i__377\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x380000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x70000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                          >> 0x19U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
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
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])) 
                                                              ^ 
                                                              vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x38000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                         >> 5U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_8(
                                                                  (0x1cU 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_16(
                                                               (0x1c0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                    | (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                   | (IData)(
                                                             (0x140U 
                                                              == 
                                                              (0x140U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                             | (IData)(
                                                                       (0xcU 
                                                                        == 
                                                                        (0xcU 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                            | (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x14U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
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
                                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                                             << 0x13U) 
                                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                                               >> 0xcU))) 
                                                                        | ((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                                           << 0x13U)) 
                                                                       | (0x180000U 
                                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                                              << 0x13U) 
                                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                                                >> 0xbU))))) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                                            | (IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                                           | (IData)(
                                                                                (0x28000000U 
                                                                                == 
                                                                                (0x28000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                                                | (IData)(
                                                                                (0xc00000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                                                | (IData)(
                                                                                (0x1400000U 
                                                                                == 
                                                                                (0x1400000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                                                | (IData)(
                                                                                (0x180000U 
                                                                                == 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                                                | (IData)(
                                                                                (0x280000U 
                                                                                == 
                                                                                (0x280000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                                                | (IData)(
                                                                                (0x30000U 
                                                                                == 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                                                | (IData)(
                                                                                (0x50000U 
                                                                                == 
                                                                                (0x50000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i__378(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i__378\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0xe0000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_32(
                                                               (0x1c000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                          >> 0x17U)) 
                                                      | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe000000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                         >> 3U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_4(
                                                                  (7U 
                                                                   & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_8(
                                                              (0x70U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                    | (IData)(
                                                              (0x30U 
                                                               == 
                                                               (0x30U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                   | (IData)(
                                                             (0x50U 
                                                              == 
                                                              (0x50U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                             << 0x17U) 
                                                            | (0xff800000U 
                                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                                   << 0x16U) 
                                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                                     << 0x17U)))) 
                                                           | (0xff800000U 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                                  << 0x15U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                                         | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                        | (IData)(
                                                                                (0x50000000U 
                                                                                == 
                                                                                (0x50000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                                            | (IData)(
                                                                                (0x6000000U 
                                                                                == 
                                                                                (0x6000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                           | (IData)(
                                                                                (0xa000000U 
                                                                                == 
                                                                                (0xa000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i__379(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i__379\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_32(
                                                              (0x38000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x7000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                          >> 0x15U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x3800000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                         >> 1U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (VL_REDXOR_32(
                                                                    (0xc0000000U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])) 
                                                       ^ 
                                                       vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_8(
                                                              (0x1cU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                    | (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                   | (IData)(
                                                             (0x14U 
                                                              == 
                                                              (0x14U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
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
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                                 << 0x17U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                                   >> 8U))) 
                                                            | ((IData)(
                                                                       (0xc0000000U 
                                                                        == 
                                                                        (0xc0000000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                               << 0x17U)) 
                                                           | (0x1800000U 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                                  << 0x17U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                                         | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                        | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                                            | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                           | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                                                | (IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                                | (IData)(
                                                                                (0x140000U 
                                                                                == 
                                                                                (0x140000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30000U 
                                                                                == 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                                                | (IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                                | (IData)(
                                                                                (0x28000U 
                                                                                == 
                                                                                (0x28000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x6000U 
                                                                                == 
                                                                                (0x6000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                                                | (IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                                | (IData)(
                                                                                (0x5000U 
                                                                                == 
                                                                                (0x5000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i__380(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i__380\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0xe000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x1c00U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                          >> 0x13U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe00000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                      >> 0x1fU));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x70000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                    << 0x1aU) 
                                                   | (0xfc000000U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                          << 0x19U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                            << 0x1aU)))) 
                                                  | (0xfc000000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                         << 0x18U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                             | (IData)(
                                                                       (0x30000000U 
                                                                        == 
                                                                        (0x30000000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                            | (IData)(
                                                                      (0x50000000U 
                                                                       == 
                                                                       (0x50000000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                                         | (IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                        | (IData)(
                                                                                (0x5000000U 
                                                                                == 
                                                                                (0x5000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc00000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                                            | (IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                           | (IData)(
                                                                                (0xa00000U 
                                                                                == 
                                                                                (0xa00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x30000U 
                                                                                == 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                                | (IData)(
                                                                                (0x50000U 
                                                                                == 
                                                                                (0x50000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x6000U 
                                                                                == 
                                                                                (0x6000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                                | (IData)(
                                                                                (0xa000U 
                                                                                == 
                                                                                (0xa000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                                                | (IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                                | (IData)(
                                                                                (0x1400U 
                                                                                == 
                                                                                (0x1400U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i__381(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i__381\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0x3800U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x700U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                          >> 0x11U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x380000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                         >> 0x1dU)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & (VL_REDXOR_32(
                                                                (0xc0000000U 
                                                                 & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])) 
                                                   ^ 
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
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
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                        << 0x1aU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                          >> 5U))) 
                                                   | ((IData)(
                                                              (0xc0000000U 
                                                               == 
                                                               (0xc0000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                      << 0x1aU)) 
                                                  | (0xc000000U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                         << 0x1aU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                             | (IData)(
                                                                       (0xc000000U 
                                                                        == 
                                                                        (0xc000000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                            | (IData)(
                                                                      (0x14000000U 
                                                                       == 
                                                                       (0x14000000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                                         | (IData)(
                                                                                (0xc00000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                        | (IData)(
                                                                                (0x1400000U 
                                                                                == 
                                                                                (0x1400000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                                            | (IData)(
                                                                                (0x180000U 
                                                                                == 
                                                                                (0x180000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                           | (IData)(
                                                                                (0x280000U 
                                                                                == 
                                                                                (0x280000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i__382(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i__382\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0xe00U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_16(
                                                               (0x1c0U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                          >> 0xfU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xe0000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                         >> 0x1bU)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x7000000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x70000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
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
                                                      & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]));
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                    | (IData)(
                                                              (0x30000000U 
                                                               == 
                                                               (0x30000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                   | (IData)(
                                                             (0x50000000U 
                                                              == 
                                                              (0x50000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                             | (IData)(
                                                                       (0x3000000U 
                                                                        == 
                                                                        (0x3000000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                            | (IData)(
                                                                      (0x5000000U 
                                                                       == 
                                                                       (0x5000000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                                         | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                        | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                                            | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                           | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                                                | (IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                                | (IData)(
                                                                                (0x5000U 
                                                                                == 
                                                                                (0x5000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                                                | (IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                                | (IData)(
                                                                                (0xa00U 
                                                                                == 
                                                                                (0xa00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i__383(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i__383\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_16(
                                                              (0x380U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_8(
                                                              (0x70U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                          >> 0xdU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x38000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                                         >> 0x19U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c00000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
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
                                                   | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
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
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                    | (IData)(
                                                              (0xc000000U 
                                                               == 
                                                               (0xc000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                   | (IData)(
                                                             (0x14000000U 
                                                              == 
                                                              (0x14000000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
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
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                             | (IData)(
                                                                       (0xc00000U 
                                                                        == 
                                                                        (0xc00000U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                            | (IData)(
                                                                      (0x1400000U 
                                                                       == 
                                                                       (0x1400000U 
                                                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                                         | (IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                        | (IData)(
                                                                                (0x140000U 
                                                                                == 
                                                                                (0x140000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                       << 0x13U)) 
                                                                   | ((0x40000U 
                                                                       & ((((IData)(
                                                                                (0x30000U 
                                                                                == 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                                            | (IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                           | (IData)(
                                                                                (0x28000U 
                                                                                == 
                                                                                (0x28000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
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
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                                                | (IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                                | (IData)(
                                                                                (0x1400U 
                                                                                == 
                                                                                (0x1400U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                                                | (IData)(
                                                                                (0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                                | (IData)(
                                                                                (0x280U 
                                                                                == 
                                                                                (0x280U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                                                | (IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                                | (IData)(
                                                                                (0x50U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 1U)) 
                                                                                | (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))))))))))))))))))))))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i__384(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i__384\n"); );
    // Body
    vlSelf->__PVT__first_s = ((0x400U & (VL_REDXOR_32(
                                                      (0xe0000000U 
                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])) 
                                         << 0xaU)) 
                              | ((0x200U & (VL_REDXOR_32(
                                                         (0x1c000000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])) 
                                            << 9U)) 
                                 | ((0x100U & (VL_REDXOR_32(
                                                            (0x3800000U 
                                                             & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])) 
                                               << 8U)) 
                                    | ((0x80U & (VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])) 
                                                 << 7U)) 
                                       | ((0x40U & 
                                           (VL_REDXOR_32(
                                                         (0xe0000U 
                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (VL_REDXOR_32(
                                                              (0x1c000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (VL_REDXOR_16(
                                                                 (0x3800U 
                                                                  & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (VL_REDXOR_16(
                                                                    (0x700U 
                                                                     & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (VL_REDXOR_8(
                                                                      (0xe0U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
                                                                >> 1U)))))))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
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
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0xe0U 
                                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_8(
                                                              (0x1cU 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                          >> 0xbU)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
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
                                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0xe000U 
                                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                         >> 0x17U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x700000U 
                                                                    & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x7000000U 
                                                                & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U]))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
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
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                         >> 0x1cU)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}
