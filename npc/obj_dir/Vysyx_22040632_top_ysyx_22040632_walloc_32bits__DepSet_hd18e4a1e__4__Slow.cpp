// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i__129(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i__129\n"); );
    // Init
    CData/*1:0*/ __PVT__fifth_s;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa28__in;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa29__in;
    // Body
    vlSelf->__Vcellout__ysyx_22040632_csa13__cout = 
        (1U & (((IData)((0x18000U == (0x18000U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                | (IData)((0xc000U == (0xc000U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
               | (IData)((0x14000U == (0x14000U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa12__cout = 
        (1U & (((IData)((0x3000U == (0x3000U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                | (IData)((0x1800U == (0x1800U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
               | (IData)((0x2800U == (0x2800U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa11__cout = 
        (1U & (((IData)((0x600U == (0x600U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                | (IData)((0x300U == (0x300U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
               | (IData)((0x500U == (0x500U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa19__cout = 
        (1U & (((IData)((0x1800000U == (0x1800000U 
                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                | (IData)((0xc00000U == (0xc00000U 
                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
               | (IData)((0x1400000U == (0x1400000U 
                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa18__cout = 
        (1U & (((IData)((0x300000U == (0x300000U & 
                                       vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                | (IData)((0x180000U == (0x180000U 
                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
               | (IData)((0x280000U == (0x280000U & 
                                        vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa23__cout = 
        (1U & (((IData)((0x18000000U == (0x18000000U 
                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                | (IData)((0xc000000U == (0xc000000U 
                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
               | (IData)((0x14000000U == (0x14000000U 
                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa26__cout = 
        (1U & (((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                    >> 0x1fU)) | (IData)((0xc0000000U 
                                          == (0xc0000000U 
                                              & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
               | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                     >> 0x1eU))));
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
    __PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                             << 1U)) | (1U & (VL_REDXOR_32(
                                                           (0xc0000000U 
                                                            & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])) 
                                              ^ vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])));
    __Vcellinp__ysyx_22040632_csa28__in = (((IData)(__PVT__fifth_s) 
                                            << 1U) 
                                           | (1U & 
                                              (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 1U)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(__Vcellinp__ysyx_22040632_csa28__in))));
    __Vcellinp__ysyx_22040632_csa29__in = ((4U & (VL_REDXOR_4(__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 2U)) 
                                           | (3U & 
                                              (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                               >> 2U)));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i__130(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i__130\n"); );
    // Init
    CData/*1:0*/ __PVT__fifth_s;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa28__in;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa29__in;
    // Body
    vlSelf->__Vcellout__ysyx_22040632_csa13__cout = 
        (1U & (((IData)((0x6000U == (0x6000U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                | (IData)((0x3000U == (0x3000U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
               | (IData)((0x5000U == (0x5000U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa12__cout = 
        (1U & (((IData)((0xc00U == (0xc00U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                | (IData)((0x600U == (0x600U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
               | (IData)((0xa00U == (0xa00U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa11__cout = 
        (1U & (((IData)((0x180U == (0x180U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                | (IData)((0xc0U == (0xc0U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
               | (IData)((0x140U == (0x140U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa19__cout = 
        (1U & (((IData)((0x600000U == (0x600000U & 
                                       vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                | (IData)((0x300000U == (0x300000U 
                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
               | (IData)((0x500000U == (0x500000U & 
                                        vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa18__cout = 
        (1U & (((IData)((0xc0000U == (0xc0000U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                | (IData)((0x60000U == (0x60000U & 
                                        vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
               | (IData)((0xa0000U == (0xa0000U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa23__cout = 
        (1U & (((IData)((0x6000000U == (0x6000000U 
                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                | (IData)((0x3000000U == (0x3000000U 
                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
               | (IData)((0x5000000U == (0x5000000U 
                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa26__cout = 
        (1U & (((IData)((0x60000000U == (0x60000000U 
                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                | (IData)((0x30000000U == (0x30000000U 
                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
               | (IData)((0x50000000U == (0x50000000U 
                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))));
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
    __PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                             << 1U)) | (1U & VL_REDXOR_32(
                                                          (0x70000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))));
    __Vcellinp__ysyx_22040632_csa28__in = (((IData)(__PVT__fifth_s) 
                                            << 1U) 
                                           | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                              >> 0x1fU));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(__Vcellinp__ysyx_22040632_csa28__in))));
    __Vcellinp__ysyx_22040632_csa29__in = ((4U & (VL_REDXOR_4(__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 2U)) 
                                           | (3U & 
                                              vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i__131(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i__131\n"); );
    // Init
    CData/*1:0*/ __PVT__fifth_s;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa28__in;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa29__in;
    // Body
    vlSelf->__Vcellout__ysyx_22040632_csa13__cout = 
        (1U & (((IData)((0x1800U == (0x1800U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                | (IData)((0xc00U == (0xc00U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
               | (IData)((0x1400U == (0x1400U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa12__cout = 
        (1U & (((IData)((0x300U == (0x300U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                | (IData)((0x180U == (0x180U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
               | (IData)((0x280U == (0x280U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa11__cout = 
        (1U & (((IData)((0x60U == (0x60U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                | (IData)((0x30U == (0x30U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
               | (IData)((0x50U == (0x50U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa19__cout = 
        (1U & (((IData)((0x180000U == (0x180000U & 
                                       vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                | (IData)((0xc0000U == (0xc0000U & 
                                        vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
               | (IData)((0x140000U == (0x140000U & 
                                        vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa18__cout = 
        (1U & (((IData)((0x30000U == (0x30000U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                | (IData)((0x18000U == (0x18000U & 
                                        vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
               | (IData)((0x28000U == (0x28000U & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa23__cout = 
        (1U & (((IData)((0x1800000U == (0x1800000U 
                                        & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                | (IData)((0xc00000U == (0xc00000U 
                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
               | (IData)((0x1400000U == (0x1400000U 
                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))));
    vlSelf->__Vcellout__ysyx_22040632_csa26__cout = 
        (1U & (((IData)((0x18000000U == (0x18000000U 
                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                | (IData)((0xc000000U == (0xc000000U 
                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
               | (IData)((0x14000000U == (0x14000000U 
                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))));
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
    __PVT__fifth_s = ((2U & (VL_REDXOR_4(vlSelf->__PVT__fourth_s) 
                             << 1U)) | (1U & VL_REDXOR_32(
                                                          (0x1c000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))));
    __Vcellinp__ysyx_22040632_csa28__in = (((IData)(__PVT__fifth_s) 
                                            << 1U) 
                                           | (1U & 
                                              (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                               >> 0x1dU)));
    vlSelf->__Vcellout__ysyx_22040632_csa28__cout = 
        (1U & (((IData)((6U == (6U & (IData)(__Vcellinp__ysyx_22040632_csa28__in)))) 
                | (((IData)(__Vcellinp__ysyx_22040632_csa28__in) 
                    >> 1U) & (IData)(__Vcellinp__ysyx_22040632_csa28__in))) 
               | (((IData)(__Vcellinp__ysyx_22040632_csa28__in) 
                   >> 2U) & (IData)(__Vcellinp__ysyx_22040632_csa28__in))));
    __Vcellinp__ysyx_22040632_csa29__in = ((4U & (VL_REDXOR_4(__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 2U)) 
                                           | (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U] 
                                              >> 0x1eU));
    vlSelf->__Vcellout__ysyx_22040632_csa29__cout = 
        (1U & (((IData)((6U == (6U & (IData)(__Vcellinp__ysyx_22040632_csa29__in)))) 
                | (((IData)(__Vcellinp__ysyx_22040632_csa29__in) 
                    >> 1U) & (IData)(__Vcellinp__ysyx_22040632_csa29__in))) 
               | (((IData)(__Vcellinp__ysyx_22040632_csa29__in) 
                   >> 2U) & (IData)(__Vcellinp__ysyx_22040632_csa29__in))));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__Vcellout__ysyx_22040632_csa29__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__Vcellout__ysyx_22040632_csa28__cout)));
}

VL_ATTR_COLD void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i__256(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i__256\n"); );
    // Init
    CData/*6:0*/ __PVT__second_s;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa14__in;
    CData/*4:0*/ __PVT__third_s;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa20__in;
    CData/*2:0*/ __PVT__fourth_s;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa24__in;
    CData/*1:0*/ __PVT__fifth_s;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa28__in;
    CData/*2:0*/ __Vcellinp__ysyx_22040632_csa29__in;
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
    __Vcellinp__ysyx_22040632_csa14__in = ((6U & ((IData)(vlSelf->__PVT__first_s) 
                                                  << 1U)) 
                                           | (1U & 
                                              (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 0xbU)));
    __PVT__second_s = ((0x40U & (VL_REDXOR_16((0x700U 
                                               & (IData)(vlSelf->__PVT__first_s))) 
                                 << 6U)) | ((0x20U 
                                             & (VL_REDXOR_8(
                                                            (0xe0U 
                                                             & (IData)(vlSelf->__PVT__first_s))) 
                                                << 5U)) 
                                            | ((0x10U 
                                                & (VL_REDXOR_8(
                                                               (0x1cU 
                                                                & (IData)(vlSelf->__PVT__first_s))) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & (VL_REDXOR_4(__Vcellinp__ysyx_22040632_csa14__in) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & (VL_REDXOR_16(
                                                                      (0x700U 
                                                                       & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & (VL_REDXOR_8(
                                                                        (0xe0U 
                                                                         & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & VL_REDXOR_8(
                                                                         (0x1cU 
                                                                          & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))))))));
    __Vcellinp__ysyx_22040632_csa20__in = ((4U & ((IData)(__PVT__second_s) 
                                                  << 2U)) 
                                           | ((2U & 
                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                >> 0xbU)) 
                                              | (1U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                                    >> 0x13U))));
    __PVT__third_s = ((0x10U & (VL_REDXOR_8((0x70U 
                                             & (IData)(__PVT__second_s))) 
                                << 4U)) | ((8U & (VL_REDXOR_4(
                                                              (0xeU 
                                                               & (IData)(__PVT__second_s))) 
                                                  << 3U)) 
                                           | ((4U & 
                                               (VL_REDXOR_4(__Vcellinp__ysyx_22040632_csa20__in) 
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
    __Vcellinp__ysyx_22040632_csa24__in = ((6U & ((IData)(__PVT__third_s) 
                                                  << 1U)) 
                                           | (1U & 
                                              (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 0x17U)));
    __PVT__fourth_s = ((4U & (VL_REDXOR_8((0x1cU & (IData)(__PVT__third_s))) 
                              << 2U)) | ((2U & (VL_REDXOR_4(__Vcellinp__ysyx_22040632_csa24__in) 
                                                << 1U)) 
                                         | (1U & VL_REDXOR_32(
                                                              (0x700000U 
                                                               & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))));
    __PVT__fifth_s = ((2U & (VL_REDXOR_4(__PVT__fourth_s) 
                             << 1U)) | (1U & VL_REDXOR_32(
                                                          (0x7000000U 
                                                           & vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U]))));
    __Vcellinp__ysyx_22040632_csa28__in = (((IData)(__PVT__fifth_s) 
                                            << 1U) 
                                           | (1U & 
                                              (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 0x1bU)));
    __Vcellinp__ysyx_22040632_csa29__in = ((4U & (VL_REDXOR_4(__Vcellinp__ysyx_22040632_csa28__in) 
                                                  << 2U)) 
                                           | (3U & 
                                              (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U] 
                                               >> 0x1cU)));
    vlSelf->__Vcellinp__ysyx_22040632_csa30__in = (
                                                   (4U 
                                                    & (VL_REDXOR_4(__Vcellinp__ysyx_22040632_csa29__in) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((((IData)(
                                                                    (6U 
                                                                     == 
                                                                     (6U 
                                                                      & (IData)(__Vcellinp__ysyx_22040632_csa29__in)))) 
                                                            << 1U) 
                                                           | (0xfffffffeU 
                                                              & ((IData)(__Vcellinp__ysyx_22040632_csa29__in) 
                                                                 & ((IData)(__Vcellinp__ysyx_22040632_csa29__in) 
                                                                    << 1U)))) 
                                                          | (0x7ffffffeU 
                                                             & (((IData)(__Vcellinp__ysyx_22040632_csa29__in) 
                                                                 >> 1U) 
                                                                & ((IData)(__Vcellinp__ysyx_22040632_csa29__in) 
                                                                   << 1U))))) 
                                                      | (1U 
                                                         & (((IData)(
                                                                     (6U 
                                                                      == 
                                                                      (6U 
                                                                       & (IData)(__Vcellinp__ysyx_22040632_csa28__in)))) 
                                                             | (((IData)(__Vcellinp__ysyx_22040632_csa28__in) 
                                                                 >> 1U) 
                                                                & (IData)(__Vcellinp__ysyx_22040632_csa28__in))) 
                                                            | (((IData)(__Vcellinp__ysyx_22040632_csa28__in) 
                                                                >> 2U) 
                                                               & (IData)(__Vcellinp__ysyx_22040632_csa28__in))))));
}
