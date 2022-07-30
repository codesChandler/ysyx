// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i__11(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i__11\n"); );
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
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i__191(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i__191\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h38ddff95__0;
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x1aU)));
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
    __Vtemp_h38ddff95__0 = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
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
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                      | (IData)(
                                                                (0xc00000U 
                                                                 == 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                     | (IData)(
                                                               (0x1400000U 
                                                                == 
                                                                (0x1400000U 
                                                                 & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                         & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                               | (IData)(
                                                                         (0xc0000U 
                                                                          == 
                                                                          (0xc0000U 
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                              | (IData)(
                                                                        (0x140000U 
                                                                         == 
                                                                         (0x140000U 
                                                                          & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                           | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                          | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                         << 0x13U)) 
                                                                     | ((0x40000U 
                                                                         & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                              | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                             | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU)))) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU))))) 
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
    vlSelf->cout_group = __Vtemp_h38ddff95__0;
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i__10(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i__10\n"); );
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
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i__192(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i__192\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h85feac55__0;
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x1aU)));
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
    __Vtemp_h85feac55__0 = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
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
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                      | (IData)(
                                                                (0xc00000U 
                                                                 == 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                     | (IData)(
                                                               (0x1400000U 
                                                                == 
                                                                (0x1400000U 
                                                                 & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                         & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                               | (IData)(
                                                                         (0xc0000U 
                                                                          == 
                                                                          (0xc0000U 
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                              | (IData)(
                                                                        (0x140000U 
                                                                         == 
                                                                         (0x140000U 
                                                                          & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                           | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                          | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                         << 0x13U)) 
                                                                     | ((0x40000U 
                                                                         & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                              | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                             | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU)))) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU))))) 
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
    vlSelf->cout_group = __Vtemp_h85feac55__0;
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i__9(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i__9\n"); );
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
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i__193(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i__193\n"); );
    // Init
    IData/*31:0*/ __Vtemp_he8e15454__0;
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x1aU)));
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
    __Vtemp_he8e15454__0 = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
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
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                      | (IData)(
                                                                (0xc00000U 
                                                                 == 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                     | (IData)(
                                                               (0x1400000U 
                                                                == 
                                                                (0x1400000U 
                                                                 & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                         & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                               | (IData)(
                                                                         (0xc0000U 
                                                                          == 
                                                                          (0xc0000U 
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                              | (IData)(
                                                                        (0x140000U 
                                                                         == 
                                                                         (0x140000U 
                                                                          & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                           | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                          | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                         << 0x13U)) 
                                                                     | ((0x40000U 
                                                                         & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                              | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                             | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU)))) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU))))) 
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
    vlSelf->cout_group = __Vtemp_he8e15454__0;
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i__8(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i__8\n"); );
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
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i__194(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i__194\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h3443cdf6__0;
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x1aU)));
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
    __Vtemp_h3443cdf6__0 = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
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
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                      | (IData)(
                                                                (0xc00000U 
                                                                 == 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                     | (IData)(
                                                               (0x1400000U 
                                                                == 
                                                                (0x1400000U 
                                                                 & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                         & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                               | (IData)(
                                                                         (0xc0000U 
                                                                          == 
                                                                          (0xc0000U 
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                              | (IData)(
                                                                        (0x140000U 
                                                                         == 
                                                                         (0x140000U 
                                                                          & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                           | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                          | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                         << 0x13U)) 
                                                                     | ((0x40000U 
                                                                         & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                              | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                             | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU)))) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU))))) 
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
    vlSelf->cout_group = __Vtemp_h3443cdf6__0;
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i__7(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i__7\n"); );
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
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i__195(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i__195\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h19d5155a__0;
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x1aU)));
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
    __Vtemp_h19d5155a__0 = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
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
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                      | (IData)(
                                                                (0xc00000U 
                                                                 == 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                     | (IData)(
                                                               (0x1400000U 
                                                                == 
                                                                (0x1400000U 
                                                                 & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                         & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                               | (IData)(
                                                                         (0xc0000U 
                                                                          == 
                                                                          (0xc0000U 
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                              | (IData)(
                                                                        (0x140000U 
                                                                         == 
                                                                         (0x140000U 
                                                                          & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                           | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                          | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                         << 0x13U)) 
                                                                     | ((0x40000U 
                                                                         & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                              | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                             | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU)))) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU))))) 
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
    vlSelf->cout_group = __Vtemp_h19d5155a__0;
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i__6(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i__6\n"); );
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
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i__196(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i__196\n"); );
    // Init
    IData/*31:0*/ __Vtemp_hbfeed681__0;
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x1aU)));
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
    __Vtemp_hbfeed681__0 = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
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
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                      | (IData)(
                                                                (0xc00000U 
                                                                 == 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                     | (IData)(
                                                               (0x1400000U 
                                                                == 
                                                                (0x1400000U 
                                                                 & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                         & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                               | (IData)(
                                                                         (0xc0000U 
                                                                          == 
                                                                          (0xc0000U 
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                              | (IData)(
                                                                        (0x140000U 
                                                                         == 
                                                                         (0x140000U 
                                                                          & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                           | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                          | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                         << 0x13U)) 
                                                                     | ((0x40000U 
                                                                         & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                              | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                             | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU)))) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU))))) 
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
    vlSelf->cout_group = __Vtemp_hbfeed681__0;
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i__5(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i__5\n"); );
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
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i__197(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i__197\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h43fb5eb4__0;
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x1aU)));
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
    __Vtemp_h43fb5eb4__0 = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
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
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                      | (IData)(
                                                                (0xc00000U 
                                                                 == 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                     | (IData)(
                                                               (0x1400000U 
                                                                == 
                                                                (0x1400000U 
                                                                 & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                         & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                               | (IData)(
                                                                         (0xc0000U 
                                                                          == 
                                                                          (0xc0000U 
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                              | (IData)(
                                                                        (0x140000U 
                                                                         == 
                                                                         (0x140000U 
                                                                          & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                           | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                          | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                         << 0x13U)) 
                                                                     | ((0x40000U 
                                                                         & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                              | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                             | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU)))) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU))))) 
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
    vlSelf->cout_group = __Vtemp_h43fb5eb4__0;
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i__4(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i__4\n"); );
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
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i__198(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i__198\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h496f1b9d__0;
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x1aU)));
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
    __Vtemp_h496f1b9d__0 = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
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
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                      | (IData)(
                                                                (0xc00000U 
                                                                 == 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                     | (IData)(
                                                               (0x1400000U 
                                                                == 
                                                                (0x1400000U 
                                                                 & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                         & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                               | (IData)(
                                                                         (0xc0000U 
                                                                          == 
                                                                          (0xc0000U 
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                              | (IData)(
                                                                        (0x140000U 
                                                                         == 
                                                                         (0x140000U 
                                                                          & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                           | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                          | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                         << 0x13U)) 
                                                                     | ((0x40000U 
                                                                         & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                              | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                             | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU)))) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU))))) 
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
    vlSelf->cout_group = __Vtemp_h496f1b9d__0;
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i__3(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i__3\n"); );
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
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i__199(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i__199\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h59f25308__0;
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x1aU)));
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
    __Vtemp_h59f25308__0 = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
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
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                      | (IData)(
                                                                (0xc00000U 
                                                                 == 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                     | (IData)(
                                                               (0x1400000U 
                                                                == 
                                                                (0x1400000U 
                                                                 & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                         & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                               | (IData)(
                                                                         (0xc0000U 
                                                                          == 
                                                                          (0xc0000U 
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                              | (IData)(
                                                                        (0x140000U 
                                                                         == 
                                                                         (0x140000U 
                                                                          & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                           | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                          | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                         << 0x13U)) 
                                                                     | ((0x40000U 
                                                                         & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                              | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                             | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU)))) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU))))) 
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
    vlSelf->cout_group = __Vtemp_h59f25308__0;
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i__2(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i__2\n"); );
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
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i__200(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i__200\n"); );
    // Init
    IData/*31:0*/ __Vtemp_hb5b6bc7a__0;
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x1aU)));
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
    __Vtemp_hb5b6bc7a__0 = (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
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
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                      | (IData)(
                                                                (0xc00000U 
                                                                 == 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                     | (IData)(
                                                               (0x1400000U 
                                                                == 
                                                                (0x1400000U 
                                                                 & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                         & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                               | (IData)(
                                                                         (0xc0000U 
                                                                          == 
                                                                          (0xc0000U 
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                              | (IData)(
                                                                        (0x140000U 
                                                                         == 
                                                                         (0x140000U 
                                                                          & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                           | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                          | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                         << 0x13U)) 
                                                                     | ((0x40000U 
                                                                         & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                              | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                             | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
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
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                | (IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                | (IData)(
                                                                                (0x28U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU)))) 
                                                                                | (0xfffff800U 
                                                                                & ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 9U) 
                                                                                & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                                                << 0xbU))))) 
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
    vlSelf->cout_group = __Vtemp_hb5b6bc7a__0;
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i__1(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i__1\n"); );
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
}

VL_INLINE_OPT void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i__201(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i__201\n"); );
    // Body
    vlSelf->__Vcellinp__ysyx_22040632_csa14__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__first_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                              << 2U)) 
                                       | ((2U & (VL_REDXOR_8(
                                                             (0x38U 
                                                              & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                 << 1U)) 
                                          | (1U & VL_REDXOR_4(
                                                              (7U 
                                                               & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa20__in = (
                                                   (4U 
                                                    & ((IData)(vlSelf->__PVT__second_s) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                          >> 9U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                                           & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_16(
                                                                           (0x3800U 
                                                                            & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))))));
    vlSelf->__Vcellinp__ysyx_22040632_csa24__in = (
                                                   (6U 
                                                    & ((IData)(vlSelf->__PVT__third_s) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x15U)));
    vlSelf->__PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU 
                                                   & (IData)(vlSelf->__PVT__third_s))) 
                                      << 2U)) | ((2U 
                                                  & (VL_REDXOR_4(vlSelf->__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x1c0000U 
                                                                    & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group)))));
    vlSelf->__PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                                     << 1U)) | (1U 
                                                & VL_REDXOR_32(
                                                               (0x1c00000U 
                                                                & vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group))));
    vlSelf->__Vcellinp__ysyx_22040632_csa28__in = (
                                                   ((IData)(vlSelf->__PVT__fifth_s) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
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
                                                      & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.cout_group 
                                                         >> 0x1aU)));
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
