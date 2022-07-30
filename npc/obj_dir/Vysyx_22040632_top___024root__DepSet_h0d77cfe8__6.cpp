// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top___024root.h"

VL_INLINE_OPT void Vysyx_22040632_top___024root___combo__TOP__20(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___combo__TOP__20\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hf5624d88__0;
    VlWide<4>/*127:0*/ __Vtemp_ha174c948__0;
    VlWide<4>/*127:0*/ __Vtemp_h59f9fba4__0;
    VlWide<4>/*127:0*/ __Vtemp_h66bfa37b__0;
    // Body
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xfffbffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x40000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                          << 0x12U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0xfff7ffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x80000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                            << 0x13U) | (0xfff80000U 
                                         & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             << 0x12U) 
                                            & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               << 0x13U)))) 
                          | (0xfff80000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                             << 0x11U) 
                                            & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               << 0x13U))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6bU] 
        = ((0x3ffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6bU]) 
           | (0xfc000000U & (((((IData)((0x18000U == 
                                         (0x18000U 
                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                | (IData)((0xc000U 
                                           == (0xc000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                               | (IData)((0x14000U 
                                          == (0x14000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (0x3000U 
                                                          == 
                                                          (0x3000U 
                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                 | (IData)(
                                                           (0x1800U 
                                                            == 
                                                            (0x1800U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                | (IData)(
                                                          (0x2800U 
                                                           == 
                                                           (0x2800U 
                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (0x600U 
                                                             == 
                                                             (0x600U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                    | (IData)(
                                                              (0x300U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                   | (IData)(
                                                             (0x500U 
                                                              == 
                                                              (0x500U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (0xc0U 
                                                                == 
                                                                (0xc0U 
                                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                       | (IData)(
                                                                 (0x60U 
                                                                  == 
                                                                  (0x60U 
                                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                      | (IData)(
                                                                (0xa0U 
                                                                 == 
                                                                 (0xa0U 
                                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x18U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                          | (IData)(
                                                                    (0xcU 
                                                                     == 
                                                                     (0xcU 
                                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                         | (IData)(
                                                                   (0x14U 
                                                                    == 
                                                                    (0x14U 
                                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                        << 0x1bU)) 
                                                    | ((IData)(
                                                               (3U 
                                                                == 
                                                                (3U 
                                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                       << 0x1aU))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6cU] 
        = ((0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6cU]) 
           | (0x3ffffffU & ((0x3800000U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                                           << 0x17U)) 
                            | ((0x3c00000U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout) 
                                              << 0x16U)) 
                               | ((0x200000U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                                  << 0x15U) 
                                                 | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                     << 0x14U) 
                                                    & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                       << 0x15U))) 
                                                | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                    << 0x13U) 
                                                   & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                      << 0x15U)))) 
                                  | ((0x100000U & (
                                                   (((IData)(
                                                             (0x60000U 
                                                              == 
                                                              (0x60000U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                     | (IData)(
                                                               (0x30000U 
                                                                == 
                                                                (0x30000U 
                                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                    | (IData)(
                                                              (0x50000U 
                                                               == 
                                                               (0x50000U 
                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                   << 0x14U)) 
                                     | ((0x80000U & 
                                         ((((IData)(
                                                    (0x18U 
                                                     == 
                                                     (0x18U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                            | (IData)(
                                                      (0xcU 
                                                       == 
                                                       (0xcU 
                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                           | (IData)(
                                                     (0x14U 
                                                      == 
                                                      (0x14U 
                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                          << 0x13U)) 
                                        | ((0x40000U 
                                            & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                 << 0x12U) 
                                                | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x11U) 
                                                   & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x12U))) 
                                               | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                   << 0x10U) 
                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x12U)))) 
                                           | ((0x20000U 
                                               & ((((IData)(
                                                            (0x6000U 
                                                             == 
                                                             (0x6000U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                    | (IData)(
                                                              (0x3000U 
                                                               == 
                                                               (0x3000U 
                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                   | (IData)(
                                                             (0x5000U 
                                                              == 
                                                              (0x5000U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                  << 0x11U)) 
                                              | ((0x10000U 
                                                  & ((((IData)(
                                                               (0x60U 
                                                                == 
                                                                (0x60U 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                       | (IData)(
                                                                 (0x30U 
                                                                  == 
                                                                  (0x30U 
                                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                      | (IData)(
                                                                (0x50U 
                                                                 == 
                                                                 (0x50U 
                                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                     << 0x10U)) 
                                                 | ((0x8000U 
                                                     & ((((IData)(
                                                                  (0xcU 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                          | (IData)(
                                                                    (6U 
                                                                     == 
                                                                     (6U 
                                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                         | (IData)(
                                                                   (0xaU 
                                                                    == 
                                                                    (0xaU 
                                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                        << 0xfU)) 
                                                    | ((0x4000U 
                                                        & ((((IData)(
                                                                     (6U 
                                                                      == 
                                                                      (6U 
                                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                             << 0xeU) 
                                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                << 0xdU) 
                                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                  << 0xeU))) 
                                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                               << 0xcU) 
                                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                 << 0xeU)))) 
                                                       | ((0x2000U 
                                                           & ((((IData)(
                                                                        (0x600U 
                                                                         == 
                                                                         (0x600U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                                | (IData)(
                                                                          (0x300U 
                                                                           == 
                                                                           (0x300U 
                                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                               | (IData)(
                                                                         (0x500U 
                                                                          == 
                                                                          (0x500U 
                                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((((IData)(
                                                                           (0xc0U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                                   | (IData)(
                                                                             (0x60U 
                                                                              == 
                                                                              (0x60U 
                                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                  | (IData)(
                                                                            (0xa0U 
                                                                             == 
                                                                             (0xa0U 
                                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                 << 0xcU)) 
                                                             | ((0x800U 
                                                                 & ((((IData)(
                                                                              (0x600U 
                                                                               == 
                                                                               (0x600U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                      | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                     | (IData)(
                                                                               (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                    << 0xbU)) 
                                                                | ((0x400U 
                                                                    & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                         | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                        | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                       << 0xaU)) 
                                                                   | ((0x200U 
                                                                       & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                            | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                           | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                          << 9U)) 
                                                                      | ((0x100U 
                                                                          & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                                               << 8U) 
                                                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 7U) 
                                                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 8U))) 
                                                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 6U) 
                                                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 8U)))) 
                                                                         | ((0x80U 
                                                                             & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                                                << 7U) 
                                                                                | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                                                << 6U) 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                                                << 7U))) 
                                                                                | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                                                << 5U) 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                                                << 7U)))) 
                                                                            | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                                << 6U)) 
                                                                               | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6bU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                << 1U)) 
                                                                                | ((1U 
                                                                                & (((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))))) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U]))) 
                                                                                >> 6U)))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xfff7ffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x80000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                          << 0x13U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0xffefffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x100000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                             << 0x14U) | (0xfff00000U 
                                          & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                              << 0x13U) 
                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x14U)))) 
                           | (0xfff00000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                              << 0x12U) 
                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x14U))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6cU] 
        = ((0xffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6cU]) 
           | (0xff000000U & (((((IData)((0x600000U 
                                         == (0x600000U 
                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                | (IData)((0x300000U 
                                           == (0x300000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                               | (IData)((0x500000U 
                                          == (0x500000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (0xc0000U 
                                                          == 
                                                          (0xc0000U 
                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                 | (IData)(
                                                           (0x60000U 
                                                            == 
                                                            (0x60000U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                | (IData)(
                                                          (0xa0000U 
                                                           == 
                                                           (0xa0000U 
                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (0x18000U 
                                                             == 
                                                             (0x18000U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                    | (IData)(
                                                              (0xc000U 
                                                               == 
                                                               (0xc000U 
                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                   | (IData)(
                                                             (0x14000U 
                                                              == 
                                                              (0x14000U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (0x3000U 
                                                                == 
                                                                (0x3000U 
                                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                       | (IData)(
                                                                 (0x1800U 
                                                                  == 
                                                                  (0x1800U 
                                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                      | (IData)(
                                                                (0x2800U 
                                                                 == 
                                                                 (0x2800U 
                                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0x600U 
                                                                   == 
                                                                   (0x600U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                          | (IData)(
                                                                    (0x300U 
                                                                     == 
                                                                     (0x300U 
                                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                         | (IData)(
                                                                   (0x500U 
                                                                    == 
                                                                    (0x500U 
                                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (0xc0U 
                                                                      == 
                                                                      (0xc0U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                             | (IData)(
                                                                       (0x60U 
                                                                        == 
                                                                        (0x60U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                            | (IData)(
                                                                      (0xa0U 
                                                                       == 
                                                                       (0xa0U 
                                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (0x18U 
                                                                         == 
                                                                         (0x18U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                | (IData)(
                                                                          (0xcU 
                                                                           == 
                                                                           (0xcU 
                                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                               | (IData)(
                                                                         (0x14U 
                                                                          == 
                                                                          (0x14U 
                                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                              << 0x19U)) 
                                                          | ((IData)(
                                                                     (3U 
                                                                      == 
                                                                      (3U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                             << 0x18U))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6dU] 
        = ((0xffc00000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6dU]) 
           | (0xffffffU & ((0xe00000U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                                         << 0x15U)) 
                           | ((0xf00000U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout) 
                                            << 0x14U)) 
                              | ((0x80000U & ((((IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                                << 0x13U) 
                                               | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                   << 0x12U) 
                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                     << 0x13U))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  << 0x11U) 
                                                 & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                    << 0x13U)))) 
                                 | ((0x40000U & ((((IData)(
                                                           (0x18000U 
                                                            == 
                                                            (0x18000U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                   | (IData)(
                                                             (0xc000U 
                                                              == 
                                                              (0xc000U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                  | (IData)(
                                                            (0x14000U 
                                                             == 
                                                             (0x14000U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                 << 0x12U)) 
                                    | ((0x20000U & 
                                        ((((IData)(
                                                   (0x18U 
                                                    == 
                                                    (0x18U 
                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                           | (IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                          | (IData)(
                                                    (0x14U 
                                                     == 
                                                     (0x14U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                         << 0x11U)) 
                                       | ((0x10000U 
                                           & ((((IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                << 0x10U) 
                                               | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                   << 0xfU) 
                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0x10U))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  << 0xeU) 
                                                 & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x10U)))) 
                                          | ((0x8000U 
                                              & ((((IData)(
                                                           (0x1800U 
                                                            == 
                                                            (0x1800U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                   | (IData)(
                                                             (0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                  | (IData)(
                                                            (0x1400U 
                                                             == 
                                                             (0x1400U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                 << 0xfU)) 
                                             | ((0x4000U 
                                                 & ((((IData)(
                                                              (0x60U 
                                                               == 
                                                               (0x60U 
                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                      | (IData)(
                                                                (0x30U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                     | (IData)(
                                                               (0x50U 
                                                                == 
                                                                (0x50U 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                    << 0xeU)) 
                                                | ((0x2000U 
                                                    & ((((IData)(
                                                                 (0xcU 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                         | (IData)(
                                                                   (6U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                        | (IData)(
                                                                  (0xaU 
                                                                   == 
                                                                   (0xaU 
                                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & ((((IData)(
                                                                    (6U 
                                                                     == 
                                                                     (6U 
                                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                            << 0xcU) 
                                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                               << 0xbU) 
                                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                 << 0xcU))) 
                                                          | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                              << 0xaU) 
                                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                << 0xcU)))) 
                                                      | ((0x800U 
                                                          & ((((IData)(
                                                                       (0x180U 
                                                                        == 
                                                                        (0x180U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                               | (IData)(
                                                                         (0xc0U 
                                                                          == 
                                                                          (0xc0U 
                                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                              | (IData)(
                                                                        (0x140U 
                                                                         == 
                                                                         (0x140U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                             << 0xbU)) 
                                                         | ((0x400U 
                                                             & ((((IData)(
                                                                          (0x30U 
                                                                           == 
                                                                           (0x30U 
                                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                                  | (IData)(
                                                                            (0x18U 
                                                                             == 
                                                                             (0x18U 
                                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                 | (IData)(
                                                                           (0x28U 
                                                                            == 
                                                                            (0x28U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                << 0xaU)) 
                                                            | ((0x200U 
                                                                & ((((IData)(
                                                                             (0x600U 
                                                                              == 
                                                                              (0x600U 
                                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                     | (IData)(
                                                                               (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                    | (IData)(
                                                                              (0x500U 
                                                                               == 
                                                                               (0x500U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                   << 9U)) 
                                                               | ((0x100U 
                                                                   & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                        | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                       | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                      << 8U)) 
                                                                  | ((0x80U 
                                                                      & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                           | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                          | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                         << 7U)) 
                                                                     | ((0x40U 
                                                                         & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 5U) 
                                                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 6U))) 
                                                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 4U) 
                                                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 6U)))) 
                                                                        | ((0x20U 
                                                                            & (((0x20U 
                                                                                & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                                                << 5U) 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                                                >> 0x1aU))) 
                                                                                | (0xffffe0U 
                                                                                & ((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                                                << 5U))) 
                                                                               | (0x60U 
                                                                                & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU] 
                                                                                << 5U) 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU] 
                                                                                >> 0x19U))))) 
                                                                           | ((0x10U 
                                                                               & ((((IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0x28000000U 
                                                                                == 
                                                                                (0x28000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                                << 4U)) 
                                                                              | ((8U 
                                                                                & ((((IData)(
                                                                                (0x6000000U 
                                                                                == 
                                                                                (0x6000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU]))) 
                                                                                | (IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                                | (IData)(
                                                                                (0x5000000U 
                                                                                == 
                                                                                (0x5000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6cU])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                << 1U)) 
                                                                                | ((1U 
                                                                                & (((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))))) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U]))) 
                                                                                >> 8U)))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xffefffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x100000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                           << 0x14U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0xffdfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x200000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                             << 0x15U) | (0xffe00000U 
                                          & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                              << 0x14U) 
                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x15U)))) 
                           | (0xffe00000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                              << 0x13U) 
                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x15U))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6dU] 
        = ((0x3fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6dU]) 
           | (0xffc00000U & (((((IData)((0x18000000U 
                                         == (0x18000000U 
                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                | (IData)((0xc000000U 
                                           == (0xc000000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                               | (IData)((0x14000000U 
                                          == (0x14000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (0x3000000U 
                                                          == 
                                                          (0x3000000U 
                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                 | (IData)(
                                                           (0x1800000U 
                                                            == 
                                                            (0x1800000U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                | (IData)(
                                                          (0x2800000U 
                                                           == 
                                                           (0x2800000U 
                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (0x600000U 
                                                             == 
                                                             (0x600000U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                    | (IData)(
                                                              (0x300000U 
                                                               == 
                                                               (0x300000U 
                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                   | (IData)(
                                                             (0x500000U 
                                                              == 
                                                              (0x500000U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (0xc0000U 
                                                                == 
                                                                (0xc0000U 
                                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                       | (IData)(
                                                                 (0x60000U 
                                                                  == 
                                                                  (0x60000U 
                                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                      | (IData)(
                                                                (0xa0000U 
                                                                 == 
                                                                 (0xa0000U 
                                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0x18000U 
                                                                   == 
                                                                   (0x18000U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                          | (IData)(
                                                                    (0xc000U 
                                                                     == 
                                                                     (0xc000U 
                                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                         | (IData)(
                                                                   (0x14000U 
                                                                    == 
                                                                    (0x14000U 
                                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (0x3000U 
                                                                      == 
                                                                      (0x3000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                             | (IData)(
                                                                       (0x1800U 
                                                                        == 
                                                                        (0x1800U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                            | (IData)(
                                                                      (0x2800U 
                                                                       == 
                                                                       (0x2800U 
                                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (0x600U 
                                                                         == 
                                                                         (0x600U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                | (IData)(
                                                                          (0x300U 
                                                                           == 
                                                                           (0x300U 
                                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                               | (IData)(
                                                                         (0x500U 
                                                                          == 
                                                                          (0x500U 
                                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((((IData)(
                                                                           (0xc0U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                   | (IData)(
                                                                             (0x60U 
                                                                              == 
                                                                              (0x60U 
                                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                  | (IData)(
                                                                            (0xa0U 
                                                                             == 
                                                                             (0xa0U 
                                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((((IData)(
                                                                              (0x18U 
                                                                               == 
                                                                               (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                      | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                     | (IData)(
                                                                               (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                    << 0x17U)) 
                                                                | ((IData)(
                                                                           (3U 
                                                                            == 
                                                                            (3U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                   << 0x16U))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6eU] 
        = ((0xfff00000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6eU]) 
           | (0x3fffffU & ((0x380000U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                                         << 0x13U)) 
                           | ((0x3c0000U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout) 
                                            << 0x12U)) 
                              | ((0x20000U & ((((IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                                << 0x11U) 
                                               | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                   << 0x10U) 
                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                     << 0x11U))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                  << 0xfU) 
                                                 & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                    << 0x11U)))) 
                                 | ((0x10000U & ((((IData)(
                                                           (0x6000U 
                                                            == 
                                                            (0x6000U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                   | (IData)(
                                                             (0x3000U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                  | (IData)(
                                                            (0x5000U 
                                                             == 
                                                             (0x5000U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                 << 0x10U)) 
                                    | ((0x8000U & (
                                                   (((IData)(
                                                             (0x18U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                                     | (IData)(
                                                               (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                    | (IData)(
                                                              (0x14U 
                                                               == 
                                                               (0x14U 
                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                   << 0xfU)) 
                                       | ((0x4000U 
                                           & ((((IData)(
                                                        (6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                << 0xeU) 
                                               | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                   << 0xdU) 
                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 0xeU))) 
                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  << 0xcU) 
                                                 & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0xeU)))) 
                                          | ((0x2000U 
                                              & ((((IData)(
                                                           (0x600U 
                                                            == 
                                                            (0x600U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                   | (IData)(
                                                             (0x300U 
                                                              == 
                                                              (0x300U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                  | (IData)(
                                                            (0x500U 
                                                             == 
                                                             (0x500U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                 << 0xdU)) 
                                             | ((0x1000U 
                                                 & ((((IData)(
                                                              (0x60U 
                                                               == 
                                                               (0x60U 
                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                      | (IData)(
                                                                (0x30U 
                                                                 == 
                                                                 (0x30U 
                                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                     | (IData)(
                                                               (0x50U 
                                                                == 
                                                                (0x50U 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & ((((IData)(
                                                                 (0xcU 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                         | (IData)(
                                                                   (6U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                        | (IData)(
                                                                  (0xaU 
                                                                   == 
                                                                   (0xaU 
                                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                       << 0xbU)) 
                                                   | ((0x400U 
                                                       & ((((IData)(
                                                                    (6U 
                                                                     == 
                                                                     (6U 
                                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                               << 9U) 
                                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                 << 0xaU))) 
                                                          | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                              << 8U) 
                                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                << 0xaU)))) 
                                                      | ((0x200U 
                                                          & ((((IData)(
                                                                       (0x60U 
                                                                        == 
                                                                        (0x60U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                               | (IData)(
                                                                         (0x30U 
                                                                          == 
                                                                          (0x30U 
                                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                              | (IData)(
                                                                        (0x50U 
                                                                         == 
                                                                         (0x50U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                             << 9U)) 
                                                         | ((0x100U 
                                                             & ((((IData)(
                                                                          (0xcU 
                                                                           == 
                                                                           (0xcU 
                                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                                  | (IData)(
                                                                            (6U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                 | (IData)(
                                                                           (0xaU 
                                                                            == 
                                                                            (0xaU 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                << 8U)) 
                                                            | ((0x80U 
                                                                & ((((IData)(
                                                                             (0x600U 
                                                                              == 
                                                                              (0x600U 
                                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                     | (IData)(
                                                                               (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                    | (IData)(
                                                                              (0x500U 
                                                                               == 
                                                                               (0x500U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                   << 7U)) 
                                                               | ((0x40U 
                                                                   & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                        | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                       | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                      << 6U)) 
                                                                  | ((0x20U 
                                                                      & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                           | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                          | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                         << 5U)) 
                                                                     | ((0x10U 
                                                                         & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 3U) 
                                                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 4U))) 
                                                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 2U) 
                                                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 4U)))) 
                                                                        | ((8U 
                                                                            & ((((IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0x50000000U 
                                                                                == 
                                                                                (0x50000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & ((((IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0x6000000U 
                                                                                == 
                                                                                (0x6000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0xa000000U 
                                                                                == 
                                                                                (0xa000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & ((((IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU]))) 
                                                                                | (IData)(
                                                                                (0xc00000U 
                                                                                == 
                                                                                (0xc00000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                                | (IData)(
                                                                                (0x1400000U 
                                                                                == 
                                                                                (0x1400000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6dU])))) 
                                                                                << 1U)) 
                                                                                | ((1U 
                                                                                & (((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))))) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U]))) 
                                                                                >> 0xaU)))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xffdfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x200000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                           << 0x15U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0xffbfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x400000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                             << 0x16U) | (0xffc00000U 
                                          & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                              << 0x15U) 
                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x16U)))) 
                           | (0xffc00000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                              << 0x14U) 
                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x16U))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6eU] 
        = ((0xfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6eU]) 
           | (0xfff00000U & (((((IData)((0x600000U 
                                         == (0x600000U 
                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                | (IData)((0x300000U 
                                           == (0x300000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                               | (IData)((0x500000U 
                                          == (0x500000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (0xc0000000U 
                                                          == 
                                                          (0xc0000000U 
                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                 | (IData)(
                                                           (0x60000000U 
                                                            == 
                                                            (0x60000000U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                | (IData)(
                                                          (0xa0000000U 
                                                           == 
                                                           (0xa0000000U 
                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (0x18000000U 
                                                             == 
                                                             (0x18000000U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                    | (IData)(
                                                              (0xc000000U 
                                                               == 
                                                               (0xc000000U 
                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                   | (IData)(
                                                             (0x14000000U 
                                                              == 
                                                              (0x14000000U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (0x3000000U 
                                                                == 
                                                                (0x3000000U 
                                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                       | (IData)(
                                                                 (0x1800000U 
                                                                  == 
                                                                  (0x1800000U 
                                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                      | (IData)(
                                                                (0x2800000U 
                                                                 == 
                                                                 (0x2800000U 
                                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0x600000U 
                                                                   == 
                                                                   (0x600000U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                          | (IData)(
                                                                    (0x300000U 
                                                                     == 
                                                                     (0x300000U 
                                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                         | (IData)(
                                                                   (0x500000U 
                                                                    == 
                                                                    (0x500000U 
                                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (0xc0000U 
                                                                      == 
                                                                      (0xc0000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                             | (IData)(
                                                                       (0x60000U 
                                                                        == 
                                                                        (0x60000U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                            | (IData)(
                                                                      (0xa0000U 
                                                                       == 
                                                                       (0xa0000U 
                                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (0x18000U 
                                                                         == 
                                                                         (0x18000U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                | (IData)(
                                                                          (0xc000U 
                                                                           == 
                                                                           (0xc000U 
                                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                               | (IData)(
                                                                         (0x14000U 
                                                                          == 
                                                                          (0x14000U 
                                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((((IData)(
                                                                           (0x3000U 
                                                                            == 
                                                                            (0x3000U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                   | (IData)(
                                                                             (0x1800U 
                                                                              == 
                                                                              (0x1800U 
                                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                  | (IData)(
                                                                            (0x2800U 
                                                                             == 
                                                                             (0x2800U 
                                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((((IData)(
                                                                              (0x600U 
                                                                               == 
                                                                               (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                      | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                     | (IData)(
                                                                               (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                         | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                        | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                            | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                           | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U])))) 
                                                                          << 0x15U)) 
                                                                      | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                         << 0x14U))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6fU] 
        = ((0xfffc0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6fU]) 
           | (0xfffffU & ((0xe0000U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                                       << 0x11U)) | 
                          ((0xf0000U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout) 
                                        << 0x10U)) 
                           | ((0x8000U & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                            << 0xfU) 
                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                               << 0xeU) 
                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                 << 0xfU))) 
                                          | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                              << 0xdU) 
                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                << 0xfU)))) 
                              | ((0x4000U & ((((IData)(
                                                       (0x1800U 
                                                        == 
                                                        (0x1800U 
                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                               | (IData)(
                                                         (0xc00U 
                                                          == 
                                                          (0xc00U 
                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                              | (IData)(
                                                        (0x1400U 
                                                         == 
                                                         (0x1400U 
                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                             << 0xeU)) 
                                 | ((0x2000U & ((((IData)(
                                                          (0x18U 
                                                           == 
                                                           (0x18U 
                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                                  | (IData)(
                                                            (0xcU 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                 | (IData)(
                                                           (0x14U 
                                                            == 
                                                            (0x14U 
                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                << 0xdU)) 
                                    | ((0x1000U & (
                                                   (((IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                        << 0xbU) 
                                                       & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                          << 0xcU))) 
                                                   | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0xaU) 
                                                      & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                         << 0xcU)))) 
                                       | ((0x800U & 
                                           ((((IData)(
                                                      (0x180U 
                                                       == 
                                                       (0x180U 
                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                              | (IData)(
                                                        (0xc0U 
                                                         == 
                                                         (0xc0U 
                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                             | (IData)(
                                                       (0x140U 
                                                        == 
                                                        (0x140U 
                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                            << 0xbU)) 
                                          | ((0x400U 
                                              & ((((IData)(
                                                           (0x60U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                   | (IData)(
                                                             (0x30U 
                                                              == 
                                                              (0x30U 
                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                  | (IData)(
                                                            (0x50U 
                                                             == 
                                                             (0x50U 
                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                 << 0xaU)) 
                                             | ((0x200U 
                                                 & ((((IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                      | (IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                     | (IData)(
                                                               (0xaU 
                                                                == 
                                                                (0xaU 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((((IData)(
                                                                 (6U 
                                                                  == 
                                                                  (6U 
                                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                            << 7U) 
                                                           & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                              << 8U))) 
                                                       | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                           << 6U) 
                                                          & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                             << 8U)))) 
                                                   | ((0x80U 
                                                       & ((((IData)(
                                                                    (0x18U 
                                                                     == 
                                                                     (0x18U 
                                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                                            | (IData)(
                                                                      (0xcU 
                                                                       == 
                                                                       (0xcU 
                                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                           | (IData)(
                                                                     (0x14U 
                                                                      == 
                                                                      (0x14U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & (((0xfffc0U 
                                                               & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                                   << 5U) 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                                     << 6U))) 
                                                              | (0x40U 
                                                                 & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                                     << 6U) 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                                       >> 0x19U)))) 
                                                             | (0x40U 
                                                                & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU] 
                                                                    << 5U) 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU] 
                                                                      >> 0x19U))))) 
                                                         | ((0x20U 
                                                             & ((((IData)(
                                                                          (0x600U 
                                                                           == 
                                                                           (0x600U 
                                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                  | (IData)(
                                                                            (0x300U 
                                                                             == 
                                                                             (0x300U 
                                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                 | (IData)(
                                                                           (0x500U 
                                                                            == 
                                                                            (0x500U 
                                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((((IData)(
                                                                             (0xc0U 
                                                                              == 
                                                                              (0xc0U 
                                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                     | (IData)(
                                                                               (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                    | (IData)(
                                                                              (0xa0U 
                                                                               == 
                                                                               (0xa0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                        | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                       | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                              << 1U) 
                                                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 2U))) 
                                                                         | ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                            & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                               << 2U)))) 
                                                                     | ((2U 
                                                                         & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                                              | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                             | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                            << 1U)) 
                                                                        | ((1U 
                                                                            & (((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU])))) 
                                                                               | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6eU]))))) 
                                                                           | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U]))) 
                                                                              >> 0xcU)))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xffbfffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x400000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                           << 0x16U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0xff7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x800000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                             << 0x17U) | (0xff800000U 
                                          & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                              << 0x16U) 
                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x17U)))) 
                           | (0xff800000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                              << 0x15U) 
                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x17U))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6fU] 
        = ((0x3ffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6fU]) 
           | (0xfffc0000U & (((((IData)((0x6000000U 
                                         == (0x6000000U 
                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                | (IData)((0x3000000U 
                                           == (0x3000000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                               | (IData)((0x5000000U 
                                          == (0x5000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (0xc00000U 
                                                          == 
                                                          (0xc00000U 
                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                                 | (IData)(
                                                           (0x600000U 
                                                            == 
                                                            (0x600000U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                | (IData)(
                                                          (0xa00000U 
                                                           == 
                                                           (0xa00000U 
                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (0x180000U 
                                                             == 
                                                             (0x180000U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                                    | (IData)(
                                                              (0xc0000U 
                                                               == 
                                                               (0xc0000U 
                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                   | (IData)(
                                                             (0x140000U 
                                                              == 
                                                              (0x140000U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (0xc0000000U 
                                                                == 
                                                                (0xc0000000U 
                                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                       | (IData)(
                                                                 (0x60000000U 
                                                                  == 
                                                                  (0x60000000U 
                                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                      | (IData)(
                                                                (0xa0000000U 
                                                                 == 
                                                                 (0xa0000000U 
                                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0x18000000U 
                                                                   == 
                                                                   (0x18000000U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                          | (IData)(
                                                                    (0xc000000U 
                                                                     == 
                                                                     (0xc000000U 
                                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                         | (IData)(
                                                                   (0x14000000U 
                                                                    == 
                                                                    (0x14000000U 
                                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (0x3000000U 
                                                                      == 
                                                                      (0x3000000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                             | (IData)(
                                                                       (0x1800000U 
                                                                        == 
                                                                        (0x1800000U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                            | (IData)(
                                                                      (0x2800000U 
                                                                       == 
                                                                       (0x2800000U 
                                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (0x600000U 
                                                                         == 
                                                                         (0x600000U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                | (IData)(
                                                                          (0x300000U 
                                                                           == 
                                                                           (0x300000U 
                                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                               | (IData)(
                                                                         (0x500000U 
                                                                          == 
                                                                          (0x500000U 
                                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((((IData)(
                                                                           (0xc0000U 
                                                                            == 
                                                                            (0xc0000U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                   | (IData)(
                                                                             (0x60000U 
                                                                              == 
                                                                              (0x60000U 
                                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                  | (IData)(
                                                                            (0xa0000U 
                                                                             == 
                                                                             (0xa0000U 
                                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((((IData)(
                                                                              (0x18000U 
                                                                               == 
                                                                               (0x18000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                      | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                     | (IData)(
                                                                               (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                         | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                        | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                            | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                           | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                               | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                              | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U])))) 
                                                                                << 0x13U)) 
                                                                            | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                               << 0x12U))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x70U] 
        = ((0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x70U]) 
           | (0x3ffffU & ((0x38000U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                                       << 0xfU)) | 
                          ((0x3c000U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout) 
                                        << 0xeU)) | 
                           ((0x2000U & ((((IData)((6U 
                                                   == 
                                                   (6U 
                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                          << 0xdU) 
                                         | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                             << 0xcU) 
                                            & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                               << 0xdU))) 
                                        | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                            << 0xbU) 
                                           & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                              << 0xdU)))) 
                            | ((0x1000U & ((((IData)(
                                                     (0x600U 
                                                      == 
                                                      (0x600U 
                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                             | (IData)(
                                                       (0x300U 
                                                        == 
                                                        (0x300U 
                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                            | (IData)(
                                                      (0x500U 
                                                       == 
                                                       (0x500U 
                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                           << 0xcU)) 
                               | ((0x800U & ((((IData)(
                                                       (0x18U 
                                                        == 
                                                        (0x18U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                               | (IData)(
                                                         (0xcU 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                              | (IData)(
                                                        (0x14U 
                                                         == 
                                                         (0x14U 
                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                             << 0xbU)) 
                                  | ((0x400U & ((((IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                     << 9U) 
                                                    & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0xaU))) 
                                                | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 8U) 
                                                   & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0xaU)))) 
                                     | ((0x200U & (
                                                   (((IData)(
                                                             (0x60U 
                                                              == 
                                                              (0x60U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                     | (IData)(
                                                               (0x30U 
                                                                == 
                                                                (0x30U 
                                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                    | (IData)(
                                                              (0x50U 
                                                               == 
                                                               (0x50U 
                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                   << 9U)) 
                                        | ((0x100U 
                                            & ((((IData)(
                                                         (0x60U 
                                                          == 
                                                          (0x60U 
                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                 | (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                | (IData)(
                                                          (0x50U 
                                                           == 
                                                           (0x50U 
                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                               << 8U)) 
                                           | ((0x80U 
                                               & ((((IData)(
                                                            (0xcU 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                    | (IData)(
                                                              (6U 
                                                               == 
                                                               (6U 
                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                   | (IData)(
                                                             (0xaU 
                                                              == 
                                                              (0xaU 
                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & ((((IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                       << 6U) 
                                                      | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                          << 5U) 
                                                         & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                            << 6U))) 
                                                     | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 4U) 
                                                        & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                           << 6U)))) 
                                                 | ((0x20U 
                                                     & ((((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (6U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                          << 5U) 
                                                         | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                             << 4U) 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                               << 5U))) 
                                                        | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                            << 3U) 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                              << 5U)))) 
                                                    | ((0x10U 
                                                        & ((((IData)(
                                                                     (0xc0000000U 
                                                                      == 
                                                                      (0xc0000000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU]))) 
                                                             | (IData)(
                                                                       (0x60000000U 
                                                                        == 
                                                                        (0x60000000U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                            | (IData)(
                                                                      (0xa0000000U 
                                                                       == 
                                                                       (0xa0000000U 
                                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x6fU])))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & ((((IData)(
                                                                        (0x600U 
                                                                         == 
                                                                         (0x600U 
                                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                | (IData)(
                                                                          (0x300U 
                                                                           == 
                                                                           (0x300U 
                                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                               | (IData)(
                                                                         (0x500U 
                                                                          == 
                                                                          (0x500U 
                                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & ((((IData)(
                                                                           (0xc0U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                   | (IData)(
                                                                             (0x60U 
                                                                              == 
                                                                              (0x60U 
                                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                  | (IData)(
                                                                            (0xa0U 
                                                                             == 
                                                                             (0xa0U 
                                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & ((((IData)(
                                                                              (0x18U 
                                                                               == 
                                                                               (0x18U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                      | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                     | (IData)(
                                                                               (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                    << 1U)) 
                                                                | ((1U 
                                                                    & (((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                                        | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                            >> 1U) 
                                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in))) 
                                                                       | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                           >> 2U) 
                                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                                   | ((IData)(
                                                                              (3U 
                                                                               == 
                                                                               (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U]))) 
                                                                      >> 0xeU)))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xff7fffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x800000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                           << 0x17U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0xfeffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x1000000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                              << 0x18U) | (0xff000000U 
                                           & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               << 0x17U) 
                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 << 0x18U)))) 
                            | (0xff000000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               << 0x16U) 
                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 << 0x18U))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x70U] 
        = ((0xffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x70U]) 
           | (0xffff0000U & (((((IData)((0x18U == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                | (IData)((0xcU == 
                                           (0xcU & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                               | (IData)((0x14U == 
                                          (0x14U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                 << 0x1eU) 
                                                | (0xc0000000U 
                                                   & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                       << 0x1dU) 
                                                      & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                         << 0x1eU)))) 
                                               | (0xc0000000U 
                                                  & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                      << 0x1cU) 
                                                     & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                        << 0x1eU))))) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (0x1800000U 
                                                             == 
                                                             (0x1800000U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                    | (IData)(
                                                              (0xc00000U 
                                                               == 
                                                               (0xc00000U 
                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                   | (IData)(
                                                             (0x1400000U 
                                                              == 
                                                              (0x1400000U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (0x300000U 
                                                                == 
                                                                (0x300000U 
                                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                       | (IData)(
                                                                 (0x180000U 
                                                                  == 
                                                                  (0x180000U 
                                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                      | (IData)(
                                                                (0x280000U 
                                                                 == 
                                                                 (0x280000U 
                                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0x60000U 
                                                                   == 
                                                                   (0x60000U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                          | (IData)(
                                                                    (0x30000U 
                                                                     == 
                                                                     (0x30000U 
                                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                         | (IData)(
                                                                   (0x50000U 
                                                                    == 
                                                                    (0x50000U 
                                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (0xc0000000U 
                                                                      == 
                                                                      (0xc0000000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                             | (IData)(
                                                                       (0x60000000U 
                                                                        == 
                                                                        (0x60000000U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                            | (IData)(
                                                                      (0xa0000000U 
                                                                       == 
                                                                       (0xa0000000U 
                                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (0x18000000U 
                                                                         == 
                                                                         (0x18000000U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                | (IData)(
                                                                          (0xc000000U 
                                                                           == 
                                                                           (0xc000000U 
                                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                               | (IData)(
                                                                         (0x14000000U 
                                                                          == 
                                                                          (0x14000000U 
                                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((((IData)(
                                                                           (0x3000000U 
                                                                            == 
                                                                            (0x3000000U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                   | (IData)(
                                                                             (0x1800000U 
                                                                              == 
                                                                              (0x1800000U 
                                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                  | (IData)(
                                                                            (0x2800000U 
                                                                             == 
                                                                             (0x2800000U 
                                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((((IData)(
                                                                              (0x600000U 
                                                                               == 
                                                                               (0x600000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                      | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                     | (IData)(
                                                                               (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                         | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                        | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                            | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                           | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                               | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                              | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U])))) 
                                                                                << 0x11U)) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                << 0x10U))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x71U] 
        = ((0xffffc000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x71U]) 
           | (0xffffU & ((0xe000U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                                     << 0xdU)) | ((0xf000U 
                                                   & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout) 
                                                      << 0xcU)) 
                                                  | ((0x800U 
                                                      & ((((IData)(
                                                                   (6U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                              << 0xaU) 
                                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                                << 0xbU))) 
                                                         | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                             << 9U) 
                                                            & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                               << 0xbU)))) 
                                                     | ((0x400U 
                                                         & ((((IData)(
                                                                      (0x180U 
                                                                       == 
                                                                       (0x180U 
                                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                              | (IData)(
                                                                        (0xc0U 
                                                                         == 
                                                                         (0xc0U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                             | (IData)(
                                                                       (0x140U 
                                                                        == 
                                                                        (0x140U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                            << 0xaU)) 
                                                        | ((0x200U 
                                                            & ((((IData)(
                                                                         (0x18U 
                                                                          == 
                                                                          (0x18U 
                                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                                                 | (IData)(
                                                                           (0xcU 
                                                                            == 
                                                                            (0xcU 
                                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                                | (IData)(
                                                                          (0x14U 
                                                                           == 
                                                                           (0x14U 
                                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                               << 9U)) 
                                                           | ((0x100U 
                                                               & ((((IData)(
                                                                            (6U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                       << 7U) 
                                                                      & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                         << 8U))) 
                                                                  | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                      << 6U) 
                                                                     & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                        << 8U)))) 
                                                              | ((0x80U 
                                                                  & ((((IData)(
                                                                               (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                                       | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                      | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                     << 7U)) 
                                                                 | ((0x40U 
                                                                     & ((((IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                                          | (IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                         | (IData)(
                                                                                (0x50U 
                                                                                == 
                                                                                (0x50U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                        << 6U)) 
                                                                    | ((0x20U 
                                                                        & ((((IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                                             | (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                            | (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0xaU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                           << 5U)) 
                                                                       | ((0x10U 
                                                                           & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                                << 3U) 
                                                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                                << 4U))) 
                                                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                                << 4U)))) 
                                                                          | ((8U 
                                                                              & (((8U 
                                                                                & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                                                << 3U) 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                                                >> 0x1cU))) 
                                                                                | (0xfff8U 
                                                                                & ((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                                                << 3U))) 
                                                                                | (0x18U 
                                                                                & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U] 
                                                                                << 3U) 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U] 
                                                                                >> 0x1bU))))) 
                                                                             | ((4U 
                                                                                & ((((IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U]))) 
                                                                                | (IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                                                | (IData)(
                                                                                (0x28000000U 
                                                                                == 
                                                                                (0x28000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x70U])))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                                << 1U)) 
                                                                                | ((1U 
                                                                                & (((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))))) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U]))) 
                                                                                >> 0x10U)))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xfeffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x1000000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                            << 0x18U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0xfdffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x2000000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                              << 0x19U) | (0xfe000000U 
                                           & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               << 0x18U) 
                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 << 0x19U)))) 
                            | (0xfe000000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               << 0x17U) 
                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 << 0x19U))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x71U] 
        = ((0x3fffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x71U]) 
           | (0xffffc000U & (((((IData)((0x600U == 
                                         (0x600U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                | (IData)((0x300U == 
                                           (0x300U 
                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                               | (IData)((0x500U == 
                                          (0x500U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (0xc0U 
                                                          == 
                                                          (0xc0U 
                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                 | (IData)(
                                                           (0x60U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                | (IData)(
                                                          (0xa0U 
                                                           == 
                                                           (0xa0U 
                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (0x18U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                    | (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                   | (IData)(
                                                             (0x14U 
                                                              == 
                                                              (0x14U 
                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                       << 0x1cU) 
                                                      | (0xf0000000U 
                                                         & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                             << 0x1bU) 
                                                            & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                               << 0x1cU)))) 
                                                     | (0xf0000000U 
                                                        & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                            << 0x1aU) 
                                                           & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                              << 0x1cU))))) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0x600000U 
                                                                   == 
                                                                   (0x600000U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                          | (IData)(
                                                                    (0x300000U 
                                                                     == 
                                                                     (0x300000U 
                                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                         | (IData)(
                                                                   (0x500000U 
                                                                    == 
                                                                    (0x500000U 
                                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (0xc0000U 
                                                                      == 
                                                                      (0xc0000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                             | (IData)(
                                                                       (0x60000U 
                                                                        == 
                                                                        (0x60000U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                            | (IData)(
                                                                      (0xa0000U 
                                                                       == 
                                                                       (0xa0000U 
                                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (0x18000U 
                                                                         == 
                                                                         (0x18000U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                                | (IData)(
                                                                          (0xc000U 
                                                                           == 
                                                                           (0xc000U 
                                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                               | (IData)(
                                                                         (0x14000U 
                                                                          == 
                                                                          (0x14000U 
                                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((((IData)(
                                                                           (0xc0000000U 
                                                                            == 
                                                                            (0xc0000000U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                   | (IData)(
                                                                             (0x60000000U 
                                                                              == 
                                                                              (0x60000000U 
                                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                  | (IData)(
                                                                            (0xa0000000U 
                                                                             == 
                                                                             (0xa0000000U 
                                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((((IData)(
                                                                              (0x18000000U 
                                                                               == 
                                                                               (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                      | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                     | (IData)(
                                                                               (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                         | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                        | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                            | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                           | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                               | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                              | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U])))) 
                                                                                << 0xfU)) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                << 0xeU))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x72U] 
        = ((0xfffff000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x72U]) 
           | (0x3fffU & ((0x3800U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                                     << 0xbU)) | ((0x3c00U 
                                                   & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout) 
                                                      << 0xaU)) 
                                                  | ((0x200U 
                                                      & ((((IData)(
                                                                   (6U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                              << 8U) 
                                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                                << 9U))) 
                                                         | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                             << 7U) 
                                                            & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                               << 9U)))) 
                                                     | ((0x100U 
                                                         & ((((IData)(
                                                                      (0x60U 
                                                                       == 
                                                                       (0x60U 
                                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                              | (IData)(
                                                                        (0x30U 
                                                                         == 
                                                                         (0x30U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                             | (IData)(
                                                                       (0x50U 
                                                                        == 
                                                                        (0x50U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                            << 8U)) 
                                                        | ((0x80U 
                                                            & ((((IData)(
                                                                         (0x18U 
                                                                          == 
                                                                          (0x18U 
                                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                                                 | (IData)(
                                                                           (0xcU 
                                                                            == 
                                                                            (0xcU 
                                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                                | (IData)(
                                                                          (0x14U 
                                                                           == 
                                                                           (0x14U 
                                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                               << 7U)) 
                                                           | ((0x40U 
                                                               & ((((IData)(
                                                                            (6U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                       << 5U) 
                                                                      & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                         << 6U))) 
                                                                  | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                        << 6U)))) 
                                                              | ((0x20U 
                                                                  & ((((IData)(
                                                                               (6U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                                       << 5U) 
                                                                      | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                                          << 4U) 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                                            << 5U))) 
                                                                     | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                                         << 3U) 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                                           << 5U)))) 
                                                                 | ((0x10U 
                                                                     & ((((IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                                          | (IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                         | (IData)(
                                                                                (0x50U 
                                                                                == 
                                                                                (0x50U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                        << 4U)) 
                                                                    | ((8U 
                                                                        & ((((IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                                             | (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                            | (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0xaU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                           << 3U)) 
                                                                       | ((4U 
                                                                           & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                                << 1U) 
                                                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                                << 2U))) 
                                                                              | ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                                << 2U)))) 
                                                                          | ((2U 
                                                                              & ((((IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                                                | (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                                | (IData)(
                                                                                (0x50000000U 
                                                                                == 
                                                                                (0x50000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                                << 1U)) 
                                                                             | ((1U 
                                                                                & (((IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))) 
                                                                                | (IData)(
                                                                                (0x6000000U 
                                                                                == 
                                                                                (0x6000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U])))) 
                                                                                | (IData)(
                                                                                (0xa000000U 
                                                                                == 
                                                                                (0xa000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x71U]))))) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U]))) 
                                                                                >> 0x12U)))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xfdffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x2000000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                            << 0x19U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0xfbffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x4000000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                              << 0x1aU) | (0xfc000000U 
                                           & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               << 0x19U) 
                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 << 0x1aU)))) 
                            | (0xfc000000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               << 0x18U) 
                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 << 0x1aU))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x72U] 
        = ((0xfffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x72U]) 
           | (0xfffff000U & (((((IData)((0x18000000U 
                                         == (0x18000000U 
                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                | (IData)((0xc000000U 
                                           == (0xc000000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                               | (IData)((0x14000000U 
                                          == (0x14000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (0x3000000U 
                                                          == 
                                                          (0x3000000U 
                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                 | (IData)(
                                                           (0x1800000U 
                                                            == 
                                                            (0x1800000U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                | (IData)(
                                                          (0x2800000U 
                                                           == 
                                                           (0x2800000U 
                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (0x600U 
                                                             == 
                                                             (0x600U 
                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                    | (IData)(
                                                              (0x300U 
                                                               == 
                                                               (0x300U 
                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                   | (IData)(
                                                             (0x500U 
                                                              == 
                                                              (0x500U 
                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (0xc0U 
                                                                == 
                                                                (0xc0U 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                       | (IData)(
                                                                 (0x60U 
                                                                  == 
                                                                  (0x60U 
                                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                      | (IData)(
                                                                (0xa0U 
                                                                 == 
                                                                 (0xa0U 
                                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x18U 
                                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                          | (IData)(
                                                                    (0xcU 
                                                                     == 
                                                                     (0xcU 
                                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                         | (IData)(
                                                                   (0x14U 
                                                                    == 
                                                                    (0x14U 
                                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (6U 
                                                                      == 
                                                                      (6U 
                                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                             << 0x1aU) 
                                                            | (0xfc000000U 
                                                               & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                   << 0x19U) 
                                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                     << 0x1aU)))) 
                                                           | (0xfc000000U 
                                                              & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                  << 0x18U) 
                                                                 & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                    << 0x1aU))))) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (0x180000U 
                                                                         == 
                                                                         (0x180000U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                                | (IData)(
                                                                          (0xc0000U 
                                                                           == 
                                                                           (0xc0000U 
                                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                               | (IData)(
                                                                         (0x140000U 
                                                                          == 
                                                                          (0x140000U 
                                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((((IData)(
                                                                           (0x30000U 
                                                                            == 
                                                                            (0x30000U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                                   | (IData)(
                                                                             (0x18000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                  | (IData)(
                                                                            (0x28000U 
                                                                             == 
                                                                             (0x28000U 
                                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((((IData)(
                                                                              (0x6000U 
                                                                               == 
                                                                               (0x6000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                                      | (IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                     | (IData)(
                                                                               (0x5000U 
                                                                                == 
                                                                                (0x5000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U])))) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                         | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                        | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                            | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                           | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                               | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                              | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU])))) 
                                                                                << 0xdU)) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                                << 0xcU))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x73U] 
        = ((0xfffffc00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x73U]) 
           | (0xfffU & ((0xe00U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                                   << 9U)) | ((0xf00U 
                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout) 
                                                  << 8U)) 
                                              | ((0x80U 
                                                  & ((((IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                                       << 7U) 
                                                      | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                          << 6U) 
                                                         & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                            << 7U))) 
                                                     | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                         << 5U) 
                                                        & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                           << 7U)))) 
                                                 | ((0x40U 
                                                     & ((((IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x18U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                          | (IData)(
                                                                    (0xcU 
                                                                     == 
                                                                     (0xcU 
                                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                         | (IData)(
                                                                   (0x14U 
                                                                    == 
                                                                    (0x14U 
                                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & ((((IData)(
                                                                     (0x18U 
                                                                      == 
                                                                      (0x18U 
                                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                                             | (IData)(
                                                                       (0xcU 
                                                                        == 
                                                                        (0xcU 
                                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                            | (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x14U 
                                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & ((((IData)(
                                                                        (6U 
                                                                         == 
                                                                         (6U 
                                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                                << 4U) 
                                                               | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                   << 3U) 
                                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                     << 4U))) 
                                                              | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                  << 2U) 
                                                                 & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                    << 4U)))) 
                                                          | ((8U 
                                                              & (((8U 
                                                                   & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                                       << 3U) 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                                         >> 0x1cU))) 
                                                                  | (0xff8U 
                                                                     & ((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U]))) 
                                                                        << 3U))) 
                                                                 | (0x18U 
                                                                    & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U] 
                                                                        << 3U) 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x72U] 
                                                                          >> 0x1bU))))) 
                                                             | ((4U 
                                                                 & ((((IData)(
                                                                              (0x60U 
                                                                               == 
                                                                               (0x60U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                                      | (IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                     | (IData)(
                                                                               (0x50U 
                                                                                == 
                                                                                (0x50U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & ((((IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                                         | (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                        | (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0xaU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                       << 1U)) 
                                                                   | ((1U 
                                                                       & (((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                                           | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                               >> 1U) 
                                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in))) 
                                                                          | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                              >> 2U) 
                                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                                      | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU]))) 
                                                                         >> 0x14U)))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xfbffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x4000000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                            << 0x1aU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0xf7ffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x8000000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                              << 0x1bU) | (0xf8000000U 
                                           & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               << 0x1aU) 
                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 << 0x1bU)))) 
                            | (0xf8000000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                               << 0x19U) 
                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                 << 0x1bU))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x73U] 
        = ((0x3ffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x73U]) 
           | (0xfffffc00U & (((((IData)((0xcU == (0xcU 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                | (IData)((6U == (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                               | (IData)((0xaU == (0xaU 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                 << 0x1eU) 
                                                | (0xc0000000U 
                                                   & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                       << 0x1dU) 
                                                      & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                         << 0x1eU)))) 
                                               | (0xc0000000U 
                                                  & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                      << 0x1cU) 
                                                     & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                        << 0x1eU))))) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (0x6000000U 
                                                             == 
                                                             (0x6000000U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                    | (IData)(
                                                              (0x3000000U 
                                                               == 
                                                               (0x3000000U 
                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                   | (IData)(
                                                             (0x5000000U 
                                                              == 
                                                              (0x5000000U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (0xc00000U 
                                                                == 
                                                                (0xc00000U 
                                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                       | (IData)(
                                                                 (0x600000U 
                                                                  == 
                                                                  (0x600000U 
                                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                      | (IData)(
                                                                (0xa00000U 
                                                                 == 
                                                                 (0xa00000U 
                                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0x600U 
                                                                   == 
                                                                   (0x600U 
                                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                          | (IData)(
                                                                    (0x300U 
                                                                     == 
                                                                     (0x300U 
                                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                         | (IData)(
                                                                   (0x500U 
                                                                    == 
                                                                    (0x500U 
                                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (0xc0U 
                                                                      == 
                                                                      (0xc0U 
                                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                             | (IData)(
                                                                       (0x60U 
                                                                        == 
                                                                        (0x60U 
                                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                            | (IData)(
                                                                      (0xa0U 
                                                                       == 
                                                                       (0xa0U 
                                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (0x18U 
                                                                         == 
                                                                         (0x18U 
                                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                | (IData)(
                                                                          (0xcU 
                                                                           == 
                                                                           (0xcU 
                                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                               | (IData)(
                                                                         (0x14U 
                                                                          == 
                                                                          (0x14U 
                                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((((IData)(
                                                                           (6U 
                                                                            == 
                                                                            (6U 
                                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                                   << 0x18U) 
                                                                  | (0xff000000U 
                                                                     & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                         << 0x17U) 
                                                                        & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                           << 0x18U)))) 
                                                                 | (0xff000000U 
                                                                    & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                        << 0x16U) 
                                                                       & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                          << 0x18U))))) 
                                                             | ((0x800000U 
                                                                 & ((((IData)(
                                                                              (0x60000U 
                                                                               == 
                                                                               (0x60000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                                      | (IData)(
                                                                                (0x30000U 
                                                                                == 
                                                                                (0x30000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                     | (IData)(
                                                                               (0x50000U 
                                                                                == 
                                                                                (0x50000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((((IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                                         | (IData)(
                                                                                (0x6000U 
                                                                                == 
                                                                                (0x6000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                        | (IData)(
                                                                                (0xa000U 
                                                                                == 
                                                                                (0xa000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((((IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                                            | (IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                           | (IData)(
                                                                                (0x1400U 
                                                                                == 
                                                                                (0x1400U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                               | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                              | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU])))) 
                                                                                << 0xbU)) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                                << 0xaU))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x74U] 
        = ((0xffffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x74U]) 
           | (0x3ffU & ((0x380U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                                   << 7U)) | ((0x3c0U 
                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout) 
                                                  << 6U)) 
                                              | ((0x20U 
                                                  & ((((IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                                       << 5U) 
                                                      | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                          << 4U) 
                                                         & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                            << 5U))) 
                                                     | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                         << 3U) 
                                                        & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                           << 5U)))) 
                                                 | ((0x10U 
                                                     & ((((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (6U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                          << 4U) 
                                                         | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                             << 3U) 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                               << 4U))) 
                                                        | ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                            << 2U) 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                              << 4U)))) 
                                                    | ((8U 
                                                        & ((((IData)(
                                                                     (0x18U 
                                                                      == 
                                                                      (0x18U 
                                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                                             | (IData)(
                                                                       (0xcU 
                                                                        == 
                                                                        (0xcU 
                                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                            | (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x14U 
                                                                        & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                           << 3U)) 
                                                       | ((4U 
                                                           & ((((IData)(
                                                                        (6U 
                                                                         == 
                                                                         (6U 
                                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                                << 2U) 
                                                               | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                   << 1U) 
                                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                     << 2U))) 
                                                              | ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                 & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                    << 2U)))) 
                                                          | ((2U 
                                                              & ((((IData)(
                                                                           (0x60000000U 
                                                                            == 
                                                                            (0x60000000U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U]))) 
                                                                   | (IData)(
                                                                             (0x30000000U 
                                                                              == 
                                                                              (0x30000000U 
                                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                  | (IData)(
                                                                            (0x50000000U 
                                                                             == 
                                                                             (0x50000000U 
                                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x73U])))) 
                                                                 << 1U)) 
                                                             | ((1U 
                                                                 & (((IData)(
                                                                             (0x60U 
                                                                              == 
                                                                              (0x60U 
                                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                                     | (IData)(
                                                                               (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                    | (IData)(
                                                                              (0x50U 
                                                                               == 
                                                                               (0x50U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))))) 
                                                                | ((IData)(
                                                                           (3U 
                                                                            == 
                                                                            (3U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU]))) 
                                                                   >> 0x16U)))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xf7ffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x8000000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                            << 0x1bU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0xefffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x10000000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                               << 0x1cU) | (0xf0000000U 
                                            & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x1bU) 
                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  << 0x1cU)))) 
                             | (0xf0000000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x1aU) 
                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  << 0x1cU))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x74U] 
        = ((0xffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x74U]) 
           | (0xffffff00U & (((((IData)((0x18000000U 
                                         == (0x18000000U 
                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                | (IData)((0xc000000U 
                                           == (0xc000000U 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                               | (IData)((0x14000000U 
                                          == (0x14000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (0x60U 
                                                          == 
                                                          (0x60U 
                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                 | (IData)(
                                                           (0x30U 
                                                            == 
                                                            (0x30U 
                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                | (IData)(
                                                          (0x50U 
                                                           == 
                                                           (0x50U 
                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (0xcU 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                    | (IData)(
                                                              (6U 
                                                               == 
                                                               (6U 
                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                   | (IData)(
                                                             (0xaU 
                                                              == 
                                                              (0xaU 
                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                       << 0x1cU) 
                                                      | (0xf0000000U 
                                                         & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                             << 0x1bU) 
                                                            & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                               << 0x1cU)))) 
                                                     | (0xf0000000U 
                                                        & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                            << 0x1aU) 
                                                           & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                              << 0x1cU))))) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0x1800000U 
                                                                   == 
                                                                   (0x1800000U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                          | (IData)(
                                                                    (0xc00000U 
                                                                     == 
                                                                     (0xc00000U 
                                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                         | (IData)(
                                                                   (0x1400000U 
                                                                    == 
                                                                    (0x1400000U 
                                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (0x300000U 
                                                                      == 
                                                                      (0x300000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                             | (IData)(
                                                                       (0x180000U 
                                                                        == 
                                                                        (0x180000U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                            | (IData)(
                                                                      (0x280000U 
                                                                       == 
                                                                       (0x280000U 
                                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (0x600U 
                                                                         == 
                                                                         (0x600U 
                                                                          & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                | (IData)(
                                                                          (0x300U 
                                                                           == 
                                                                           (0x300U 
                                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                               | (IData)(
                                                                         (0x500U 
                                                                          == 
                                                                          (0x500U 
                                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((((IData)(
                                                                           (0xc0U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                   | (IData)(
                                                                             (0x60U 
                                                                              == 
                                                                              (0x60U 
                                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                  | (IData)(
                                                                            (0xa0U 
                                                                             == 
                                                                             (0xa0U 
                                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((((IData)(
                                                                              (0x18U 
                                                                               == 
                                                                               (0x18U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                      | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                     | (IData)(
                                                                               (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                                         << 0x16U) 
                                                                        | (0xffc00000U 
                                                                           & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                               << 0x15U) 
                                                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0x16U)))) 
                                                                       | (0xffc00000U 
                                                                          & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                              << 0x14U) 
                                                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0x16U))))) 
                                                                   | ((0x200000U 
                                                                       & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                                            | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                           | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                                               | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                              | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U])))) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU])))) 
                                                                                << 9U)) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                                                << 8U))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x75U] 
        = ((0xffffffc0U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x75U]) 
           | (0xffU & ((0xe0U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                                 << 5U)) | ((0xf0U 
                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((((IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                                     << 3U) 
                                                    | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                        << 2U) 
                                                       & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                          << 3U))) 
                                                   | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                       << 1U) 
                                                      & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                         << 3U)))) 
                                               | ((4U 
                                                   & (((4U 
                                                        & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                            << 2U) 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                              >> 0x1dU))) 
                                                       | (0xfcU 
                                                          & ((IData)(
                                                                     (0xc0000000U 
                                                                      == 
                                                                      (0xc0000000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U]))) 
                                                             << 2U))) 
                                                      | (0xcU 
                                                         & ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U] 
                                                             << 2U) 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x74U] 
                                                               >> 0x1cU))))) 
                                                  | ((2U 
                                                      & ((((IData)(
                                                                   (0x18U 
                                                                    == 
                                                                    (0x18U 
                                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                                           | (IData)(
                                                                     (0xcU 
                                                                      == 
                                                                      (0xcU 
                                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                          | (IData)(
                                                                    (0x14U 
                                                                     == 
                                                                     (0x14U 
                                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                         << 1U)) 
                                                     | ((1U 
                                                         & (((IData)(
                                                                     (6U 
                                                                      == 
                                                                      (6U 
                                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                             | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                 >> 1U) 
                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in))) 
                                                            | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                >> 2U) 
                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                        | ((IData)(
                                                                   (3U 
                                                                    == 
                                                                    (3U 
                                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU]))) 
                                                           >> 0x18U)))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xefffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x10000000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                             << 0x1cU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0xdfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x20000000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                               << 0x1dU) | (0xe0000000U 
                                            & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x1cU) 
                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  << 0x1dU)))) 
                             | (0xe0000000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x1bU) 
                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  << 0x1dU))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x75U] 
        = ((0x3fU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x75U]) 
           | (0xffffffc0U & (((((IData)((0x18U == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                | (IData)((0xcU == 
                                           (0xcU & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                               | (IData)((0x14U == 
                                          (0x14U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                 << 0x1eU) 
                                                | (0xc0000000U 
                                                   & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                       << 0x1dU) 
                                                      & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                         << 0x1eU)))) 
                                               | (0xc0000000U 
                                                  & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                      << 0x1cU) 
                                                     & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                        << 0x1eU))))) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (0x6000000U 
                                                             == 
                                                             (0x6000000U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                    | (IData)(
                                                              (0x3000000U 
                                                               == 
                                                               (0x3000000U 
                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                   | (IData)(
                                                             (0x5000000U 
                                                              == 
                                                              (0x5000000U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (0x60U 
                                                                == 
                                                                (0x60U 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                       | (IData)(
                                                                 (0x30U 
                                                                  == 
                                                                  (0x30U 
                                                                   & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                      | (IData)(
                                                                (0x50U 
                                                                 == 
                                                                 (0x50U 
                                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0xcU 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                          | (IData)(
                                                                    (6U 
                                                                     == 
                                                                     (6U 
                                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                         | (IData)(
                                                                   (0xaU 
                                                                    == 
                                                                    (0xaU 
                                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (6U 
                                                                      == 
                                                                      (6U 
                                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                             << 0x1aU) 
                                                            | (0xfc000000U 
                                                               & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                   << 0x19U) 
                                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                     << 0x1aU)))) 
                                                           | (0xfc000000U 
                                                              & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                  << 0x18U) 
                                                                 & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                    << 0x1aU))))) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (0x600000U 
                                                                         == 
                                                                         (0x600000U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                                | (IData)(
                                                                          (0x300000U 
                                                                           == 
                                                                           (0x300000U 
                                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                               | (IData)(
                                                                         (0x500000U 
                                                                          == 
                                                                          (0x500000U 
                                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((((IData)(
                                                                           (0xc0000U 
                                                                            == 
                                                                            (0xc0000U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                                   | (IData)(
                                                                             (0x60000U 
                                                                              == 
                                                                              (0x60000U 
                                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                  | (IData)(
                                                                            (0xa0000U 
                                                                             == 
                                                                             (0xa0000U 
                                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((((IData)(
                                                                              (0x600U 
                                                                               == 
                                                                               (0x600U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                      | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                     | (IData)(
                                                                               (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                         | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                        | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                            | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                           | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                                               << 0x14U) 
                                                                              | (0xfff00000U 
                                                                                & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0x13U) 
                                                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0x14U)))) 
                                                                             | (0xfff00000U 
                                                                                & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0x12U) 
                                                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0x14U))))) 
                                                                         | ((0x80000U 
                                                                             & ((((IData)(
                                                                                (0x6000U 
                                                                                == 
                                                                                (0x6000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                                                | (IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                                | (IData)(
                                                                                (0x5000U 
                                                                                == 
                                                                                (0x5000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((((IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                                                | (IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                                | (IData)(
                                                                                (0xa00U 
                                                                                == 
                                                                                (0xa00U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((((IData)(
                                                                                (0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                                                | (IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                                | (IData)(
                                                                                (0x140U 
                                                                                == 
                                                                                (0x140U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU])))) 
                                                                                << 7U)) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                                                << 6U))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x76U] 
        = ((0xfffffff0U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x76U]) 
           | (0x3fU & ((0x38U & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                                 << 3U)) | ((0x3cU 
                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout) 
                                                << 2U)) 
                                            | ((2U 
                                                & ((((IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                                     << 1U) 
                                                    | ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                       & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                          << 1U))) 
                                                   | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                       >> 1U) 
                                                      & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                         << 1U)))) 
                                               | ((1U 
                                                   & (((IData)(
                                                               (0x60000000U 
                                                                == 
                                                                (0x60000000U 
                                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))) 
                                                       | (IData)(
                                                                 (0x30000000U 
                                                                  == 
                                                                  (0x30000000U 
                                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U])))) 
                                                      | (IData)(
                                                                (0x50000000U 
                                                                 == 
                                                                 (0x50000000U 
                                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x75U]))))) 
                                                  | ((IData)(
                                                             (3U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU]))) 
                                                     >> 0x1aU)))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xdfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x20000000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                             << 0x1dU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x40000000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                               << 0x1eU) | (0xc0000000U 
                                            & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x1dU) 
                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  << 0x1eU)))) 
                             | (0xc0000000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x1cU) 
                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  << 0x1eU))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x76U] 
        = ((0xfU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x76U]) 
           | (0xfffffff0U & ((0x80000000U & ((((IData)(
                                                       (6U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                               << 0x1fU) 
                                              | (0x80000000U 
                                                 & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                     << 0x1eU) 
                                                    & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                       << 0x1fU)))) 
                                             | (0x80000000U 
                                                & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                    << 0x1dU) 
                                                   & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                      << 0x1fU))))) 
                             | ((0x40000000U & ((((IData)(
                                                          (0x18000000U 
                                                           == 
                                                           (0x18000000U 
                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                  | (IData)(
                                                            (0xc000000U 
                                                             == 
                                                             (0xc000000U 
                                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                 | (IData)(
                                                           (0x14000000U 
                                                            == 
                                                            (0x14000000U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                << 0x1eU)) 
                                | ((0x20000000U & (
                                                   (((IData)(
                                                             (0x18U 
                                                              == 
                                                              (0x18U 
                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                                     | (IData)(
                                                               (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                    | (IData)(
                                                              (0x14U 
                                                               == 
                                                               (0x14U 
                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                   << 0x1dU)) 
                                   | ((0x10000000U 
                                       & ((((IData)(
                                                    (6U 
                                                     == 
                                                     (6U 
                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                   << 0x1cU))))) 
                                      | ((0x8000000U 
                                          & ((((IData)(
                                                       (0x1800000U 
                                                        == 
                                                        (0x1800000U 
                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                               | (IData)(
                                                         (0xc00000U 
                                                          == 
                                                          (0xc00000U 
                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                              | (IData)(
                                                        (0x1400000U 
                                                         == 
                                                         (0x1400000U 
                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                             << 0x1bU)) 
                                         | ((0x4000000U 
                                             & ((((IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x60U 
                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                  | (IData)(
                                                            (0x30U 
                                                             == 
                                                             (0x30U 
                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                 | (IData)(
                                                           (0x50U 
                                                            == 
                                                            (0x50U 
                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                << 0x1aU)) 
                                            | ((0x2000000U 
                                                & ((((IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                     | (IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                    | (IData)(
                                                              (0xaU 
                                                               == 
                                                               (0xaU 
                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                   << 0x19U)) 
                                               | ((0x1000000U 
                                                   & ((((IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                        << 0x18U) 
                                                       | (0xff000000U 
                                                          & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                              << 0x17U) 
                                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                << 0x18U)))) 
                                                      | (0xff000000U 
                                                         & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                             << 0x16U) 
                                                            & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                               << 0x18U))))) 
                                                  | ((0x800000U 
                                                      & ((((IData)(
                                                                   (0x180000U 
                                                                    == 
                                                                    (0x180000U 
                                                                     & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                           | (IData)(
                                                                     (0xc0000U 
                                                                      == 
                                                                      (0xc0000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                          | (IData)(
                                                                    (0x140000U 
                                                                     == 
                                                                     (0x140000U 
                                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                         << 0x17U)) 
                                                     | ((0x400000U 
                                                         & ((((IData)(
                                                                      (0x30000U 
                                                                       == 
                                                                       (0x30000U 
                                                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                              | (IData)(
                                                                        (0x18000U 
                                                                         == 
                                                                         (0x18000U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                             | (IData)(
                                                                       (0x28000U 
                                                                        == 
                                                                        (0x28000U 
                                                                         & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                            << 0x16U)) 
                                                        | ((0x200000U 
                                                            & ((((IData)(
                                                                         (0x600U 
                                                                          == 
                                                                          (0x600U 
                                                                           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                 | (IData)(
                                                                           (0x300U 
                                                                            == 
                                                                            (0x300U 
                                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                | (IData)(
                                                                          (0x500U 
                                                                           == 
                                                                           (0x500U 
                                                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                               << 0x15U)) 
                                                           | ((0x100000U 
                                                               & ((((IData)(
                                                                            (0xc0U 
                                                                             == 
                                                                             (0xc0U 
                                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                    | (IData)(
                                                                              (0x60U 
                                                                               == 
                                                                               (0x60U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                   | (IData)(
                                                                             (0xa0U 
                                                                              == 
                                                                              (0xa0U 
                                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                  << 0x14U)) 
                                                              | ((0x80000U 
                                                                  & ((((IData)(
                                                                               (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                       | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                      | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                     << 0x13U)) 
                                                                 | ((0x40000U 
                                                                     & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                                          << 0x12U) 
                                                                         | (0xfffc0000U 
                                                                            & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0x11U) 
                                                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0x12U)))) 
                                                                        | (0xfffc0000U 
                                                                           & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                               << 0x10U) 
                                                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0x12U))))) 
                                                                    | ((0x20000U 
                                                                        & ((((IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                                             | (IData)(
                                                                                (0xc00U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                            | (IData)(
                                                                                (0x1400U 
                                                                                == 
                                                                                (0x1400U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                           << 0x11U)) 
                                                                       | ((0x10000U 
                                                                           & ((((IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                                                | (IData)(
                                                                                (0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                               | (IData)(
                                                                                (0x280U 
                                                                                == 
                                                                                (0x280U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                              << 0x10U)) 
                                                                          | ((0x8000U 
                                                                              & ((((IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U]))) 
                                                                                | (IData)(
                                                                                (0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                                | (IData)(
                                                                                (0x50U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x76U])))) 
                                                                                << 0xfU)) 
                                                                             | ((0x4000U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU])))) 
                                                                                << 5U)) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                                                                << 4U))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x77U] 
        = ((0xfffffffcU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x77U]) 
           | (0xfU & ((0xeU & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                               << 1U)) | ((0xfU & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout)) 
                                          | ((IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU]))) 
                                             >> 0x1cU)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (0x40000000U & (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                             << 0x1eU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U] 
        = ((0x7fffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U]) 
           | (0x80000000U & ((((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                               << 0x1fU) | (0x80000000U 
                                            & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x1eU) 
                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  << 0x1fU)))) 
                             | (0x80000000U & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                << 0x1dU) 
                                               & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                                                  << 0x1fU))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x77U] 
        = ((3U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x77U]) 
           | (0xfffffffcU & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa29__cout) 
                              << 0x1fU) | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellout__ysyx_22040632_csa28__cout) 
                                            << 0x1eU) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s)))) 
                                                    << 0x1dU) 
                                                   | (0xe0000000U 
                                                      & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                          << 0x1cU) 
                                                         & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                            << 0x1dU)))) 
                                                  | (0xe0000000U 
                                                     & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                         << 0x1bU) 
                                                        & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__fourth_s) 
                                                           << 0x1dU))))) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (0x6000000U 
                                                                == 
                                                                (0x6000000U 
                                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U]))) 
                                                       | (IData)(
                                                                 (0x3000000U 
                                                                  == 
                                                                  (0x3000000U 
                                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                      | (IData)(
                                                                (0x5000000U 
                                                                 == 
                                                                 (0x5000000U 
                                                                  & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x18U 
                                                                    & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s)))) 
                                                          | (IData)(
                                                                    (0xcU 
                                                                     == 
                                                                     (0xcU 
                                                                      & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                         | (IData)(
                                                                   (0x14U 
                                                                    == 
                                                                    (0x14U 
                                                                     & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__third_s))))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (6U 
                                                                      == 
                                                                      (6U 
                                                                       & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in)))) 
                                                             << 0x1aU) 
                                                            | (0xfc000000U 
                                                               & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                   << 0x19U) 
                                                                  & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                     << 0x1aU)))) 
                                                           | (0xfc000000U 
                                                              & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                  << 0x18U) 
                                                                 & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa24__in) 
                                                                    << 0x1aU))))) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (0x600000U 
                                                                         == 
                                                                         (0x600000U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U]))) 
                                                                | (IData)(
                                                                          (0x300000U 
                                                                           == 
                                                                           (0x300000U 
                                                                            & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                               | (IData)(
                                                                         (0x500000U 
                                                                          == 
                                                                          (0x500000U 
                                                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((((IData)(
                                                                           (0x60U 
                                                                            == 
                                                                            (0x60U 
                                                                             & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                                   | (IData)(
                                                                             (0x30U 
                                                                              == 
                                                                              (0x30U 
                                                                               & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                  | (IData)(
                                                                            (0x50U 
                                                                             == 
                                                                             (0x50U 
                                                                              & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((((IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s)))) 
                                                                      | (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                     | (IData)(
                                                                               (0xaU 
                                                                                == 
                                                                                (0xaU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__second_s))))) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in)))) 
                                                                         << 0x16U) 
                                                                        | (0xffc00000U 
                                                                           & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                               << 0x15U) 
                                                                              & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                                << 0x16U)))) 
                                                                       | (0xffc00000U 
                                                                          & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                              << 0x14U) 
                                                                             & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa20__in) 
                                                                                << 0x16U))))) 
                                                                   | ((0x200000U 
                                                                       & ((((IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U]))) 
                                                                            | (IData)(
                                                                                (0x30000U 
                                                                                == 
                                                                                (0x30000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                                           | (IData)(
                                                                                (0x50000U 
                                                                                == 
                                                                                (0x50000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((((IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U]))) 
                                                                               | (IData)(
                                                                                (0x6000U 
                                                                                == 
                                                                                (0x6000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                                              | (IData)(
                                                                                (0xa000U 
                                                                                == 
                                                                                (0xa000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s)))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__first_s))))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(
                                                                                (6U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in)))) 
                                                                                << 0x10U) 
                                                                                | (0xffff0000U 
                                                                                & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0xfU) 
                                                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0x10U)))) 
                                                                                | (0xffff0000U 
                                                                                & (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0xeU) 
                                                                                & ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa14__in) 
                                                                                << 0x10U))))) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin[0x77U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(
                                                                                (0xc0000000U 
                                                                                == 
                                                                                (0xc0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]))) 
                                                                                | (IData)(
                                                                                (0x60000000U 
                                                                                == 
                                                                                (0x60000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                | (IData)(
                                                                                (0xa0000000U 
                                                                                == 
                                                                                (0xa0000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(
                                                                                (0x18000000U 
                                                                                == 
                                                                                (0x18000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]))) 
                                                                                | (IData)(
                                                                                (0xc000000U 
                                                                                == 
                                                                                (0xc000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                | (IData)(
                                                                                (0x14000000U 
                                                                                == 
                                                                                (0x14000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(
                                                                                (0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]))) 
                                                                                | (IData)(
                                                                                (0x1800000U 
                                                                                == 
                                                                                (0x1800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                | (IData)(
                                                                                (0x2800000U 
                                                                                == 
                                                                                (0x2800000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(
                                                                                (0x600000U 
                                                                                == 
                                                                                (0x600000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]))) 
                                                                                | (IData)(
                                                                                (0x300000U 
                                                                                == 
                                                                                (0x300000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                | (IData)(
                                                                                (0x500000U 
                                                                                == 
                                                                                (0x500000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(
                                                                                (0xc0000U 
                                                                                == 
                                                                                (0xc0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]))) 
                                                                                | (IData)(
                                                                                (0x60000U 
                                                                                == 
                                                                                (0x60000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                | (IData)(
                                                                                (0xa0000U 
                                                                                == 
                                                                                (0xa0000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(
                                                                                (0x18000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]))) 
                                                                                | (IData)(
                                                                                (0xc000U 
                                                                                == 
                                                                                (0xc000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                | (IData)(
                                                                                (0x14000U 
                                                                                == 
                                                                                (0x14000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(
                                                                                (0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]))) 
                                                                                | (IData)(
                                                                                (0x1800U 
                                                                                == 
                                                                                (0x1800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                | (IData)(
                                                                                (0x2800U 
                                                                                == 
                                                                                (0x2800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(
                                                                                (0x600U 
                                                                                == 
                                                                                (0x600U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]))) 
                                                                                | (IData)(
                                                                                (0x300U 
                                                                                == 
                                                                                (0x300U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                | (IData)(
                                                                                (0x500U 
                                                                                == 
                                                                                (0x500U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(
                                                                                (0xc0U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]))) 
                                                                                | (IData)(
                                                                                (0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                | (IData)(
                                                                                (0xa0U 
                                                                                == 
                                                                                (0xa0U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(
                                                                                (0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]))) 
                                                                                | (IData)(
                                                                                (0xcU 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                | (IData)(
                                                                                (0x14U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU])))) 
                                                                                << 3U)) 
                                                                                | ((IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU]))) 
                                                                                << 2U))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U] 
        = ((0x7fffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s[3U]) 
           | (VL_REDXOR_4(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
              << 0x1fU));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[4U] 
        = (1U & (((IData)((6U == (6U & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in)))) 
                  | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                      >> 1U) & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))) 
                 | (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in) 
                     >> 2U) & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__Vcellinp__ysyx_22040632_csa30__in))));
    __Vtemp_hf5624d88__0[0U] = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[0U];
    __Vtemp_hf5624d88__0[1U] = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[1U];
    __Vtemp_hf5624d88__0[2U] = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[2U];
    __Vtemp_hf5624d88__0[3U] = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout[3U];
    VL_ADD_W(4, __Vtemp_ha174c948__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__s, __Vtemp_hf5624d88__0);
    VL_EXTEND_WI(128,1, __Vtemp_h59f9fba4__0, (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c 
                                               >> 0x1fU));
    VL_ADD_W(4, __Vtemp_h66bfa37b__0, __Vtemp_ha174c948__0, __Vtemp_h59f9fba4__0);
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result[0U] 
        = __Vtemp_h66bfa37b__0[0U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result[1U] 
        = __Vtemp_h66bfa37b__0[1U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result[2U] 
        = __Vtemp_h66bfa37b__0[2U];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result[3U] 
        = __Vtemp_h66bfa37b__0[3U];
    vlSymsp->TOP__ysyx_22040632_top__DOT__mif.result_lo 
        = ((0x1cU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
            ? (((QData)((IData)((- (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result[0U] 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result[0U])))
            : (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__result[0U]))));
}

void Vysyx_22040632_top___024unit____Vdpiimwrap_div_exec_TOP____024unit(IData/*31:0*/ cycle);

VL_INLINE_OPT void Vysyx_22040632_top___024root___sequent__TOP__21(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___sequent__TOP__21\n"); );
    // Body
    vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_signed 
        = ((0x1dU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)) 
           | (0x1eU == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)));
    vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid 
        = (((IData)(vlSelf->ysyx_22040632_top__DOT__op_div) 
            & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__div_doing))) 
           & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__valid_out)));
    if (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid) 
         & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ready))) {
        if (vlSymsp->TOP__ysyx_22040632_top__DOT__dif.divw) {
            Vysyx_22040632_top___024unit____Vdpiimwrap_div_exec_TOP____024unit(0x20U);
        } else {
            Vysyx_22040632_top___024unit____Vdpiimwrap_div_exec_TOP____024unit(0x40U);
        }
    }
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__ns 
        = ((0U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__cs))
            ? ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid)
                ? 1U : 0U) : ((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__cs))
                               ? (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__eval_cnt) 
                                   == (0x7fU & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len) 
                                                - (IData)(1U))))
                                   ? 2U : ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.flush)
                                            ? 0U : 1U))
                               : ((2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__cs))
                                   ? ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__dif.div_valid)
                                       ? 1U : 0U) : 0U)));
}

VL_INLINE_OPT void Vysyx_22040632_top___024root___multiclk__TOP__23(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___multiclk__TOP__23\n"); );
    // Body
    if ((0x40U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len))) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt))
                ? (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt)) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (1ULL + (~ (((QData)((IData)(
                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U])))))))
                : (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U]))));
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd))
                ? (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd)) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (1ULL + (~ (((QData)((IData)(
                                                                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U])))))))
                : (((QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U]))));
    } else if ((0x20U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__len))) {
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt))
                ? (((- (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_qt))) 
                    << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[2U]))))))
                : (((QData)((IData)((- (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U] 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[1U]))));
        vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder 
            = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn) 
                & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd))
                ? (((- (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__sgn_rmd))) 
                    << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U]))))))
                : (((QData)((IData)((- (IData)((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U] 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_div_i__DOT__qt_rmd[0U]))));
    }
}

void Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_INLINE_OPT void Vysyx_22040632_top___024root___combo__TOP__24(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___combo__TOP__24\n"); );
    // Body
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op 
        = ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
            ? ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                : ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                    ? ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                        ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                                : (QData)((IData)(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op) 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))))))
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op), 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))))
                                : (QData)((IData)(((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op) 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))))))
                        : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? vlSymsp->TOP__ysyx_22040632_top__DOT__mif.result_lo
                                : (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op), 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))))))
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   << (0x1fU & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))))
                    : ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                        ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                            ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                               + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? (VL_LTS_IQQ(64, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                                    ? 1ULL : 0ULL) : 
                               (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))
                        : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient
                                : vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder)
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   - vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))))))
            : ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                ? ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                    ? ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                        ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                                : vlSymsp->TOP__ysyx_22040632_top__DOT__dif.remainder)
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? vlSymsp->TOP__ysyx_22040632_top__DOT__dif.quotient
                                : vlSymsp->TOP__ysyx_22040632_top__DOT__mif.result_lo))
                        : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                            ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                               + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   >> (0x3fU & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   << (0x3fU & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))))))
                    : ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                        ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                   | vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op)
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                   ^ vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op))
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                    < vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                                    ? 1ULL : 0ULL) : 
                               (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                << (0x1fU & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))))
                        : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op))
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op 
                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op)
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))))
                : ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                    ? ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                        ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? VL_SHIFTRS_QQI(64,64,5, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op, 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))
                            : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                               + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))
                        : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                            ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   - vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                                : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op))
                            : (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                               + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)))
                    : ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                        ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                           + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                        : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                            ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                               + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                            : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                ? (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                   + vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                                : ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src1_op 
                                    < vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__src2_op)
                                    ? 1ULL : 0ULL)))))));
    if ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun)))) {
                            Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_write_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op, vlSelf->ysyx_22040632_top__DOT__dest, 3U);
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                    if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                        Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_write_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op, vlSelf->ysyx_22040632_top__DOT__dest, 0xfU);
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun) 
                             >> 2U)))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                    Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_write_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op, vlSelf->ysyx_22040632_top__DOT__dest, 1U);
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun) 
                         >> 3U)))) {
        if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                    Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_write_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op, vlSelf->ysyx_22040632_top__DOT__dest, 0xffU);
                }
            }
        }
    }
    if ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
        } else if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
        } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op, vlSelf->__Vtask_paddr_read__2__rdata);
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                    = vlSelf->__Vtask_paddr_read__2__rdata;
            } else {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
            }
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
        }
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
        } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
        } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
        } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
        } else {
            Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op, vlSelf->__Vtask_paddr_read__3__rdata);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                = vlSelf->__Vtask_paddr_read__3__rdata;
        }
    } else if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
            } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
            } else {
                Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op, vlSelf->__Vtask_paddr_read__4__rdata);
                vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                    = vlSelf->__Vtask_paddr_read__4__rdata;
            }
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
        }
    } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
    } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            Vysyx_22040632_top___024unit____Vdpiimwrap_paddr_read_TOP____024unit(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op, vlSelf->__Vtask_paddr_read__5__rdata);
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                = vlSelf->__Vtask_paddr_read__5__rdata;
        } else {
            vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr = 0ULL;
    }
    if ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__data = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op;
        } else if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__data = 
                ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                  ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                      ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                          ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op
                          : (((QData)((IData)((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op 
                                                                     >> 0x1fU))))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))))
                      : (((QData)((IData)((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op 
                                                                 >> 0x1fU))))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))))
                  : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                      ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                          ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op
                          : (((QData)((IData)((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op 
                                                                     >> 0x1fU))))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))))
                      : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                          ? (((QData)((IData)((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op 
                                                                     >> 0x1fU))))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op)))
                          : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op)));
        } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
                    if ((0ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) {
                        vlSelf->ysyx_22040632_top__DOT__data 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr))));
                    } else if ((2ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) {
                        vlSelf->ysyx_22040632_top__DOT__data 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                          >> 0x10U)))));
                    } else if ((4ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) {
                        vlSelf->ysyx_22040632_top__DOT__data 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                          >> 0x20U)))));
                    } else if ((6ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) {
                        vlSelf->ysyx_22040632_top__DOT__data 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                          >> 0x30U)))));
                    }
                } else if ((0ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) {
                    vlSelf->ysyx_22040632_top__DOT__data 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr)))));
                } else if ((2ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) {
                    vlSelf->ysyx_22040632_top__DOT__data 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                           >> 0x1fU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                                    >> 0x10U))))));
                } else if ((4ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) {
                    vlSelf->ysyx_22040632_top__DOT__data 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                           >> 0x2fU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                                    >> 0x20U))))));
                } else if ((6ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) {
                    vlSelf->ysyx_22040632_top__DOT__data 
                        = (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                           >> 0x3fU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                                    >> 0x30U))))));
                }
            } else {
                vlSelf->ysyx_22040632_top__DOT__data 
                    = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op;
            }
        } else {
            vlSelf->ysyx_22040632_top__DOT__data = 
                ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                  ? (((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op)))
                  : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                      ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op
                      : (((QData)((IData)((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op 
                                                                 >> 0x1fU))))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op)))));
        }
    } else if ((0x10U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
        if ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__data = 
                ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                  ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                      ? ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                          ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op
                          : (((QData)((IData)((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op 
                                                                     >> 0x1fU))))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))))
                      : (((QData)((IData)((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op 
                                                                 >> 0x1fU))))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))))
                  : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op);
        } else if ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__data = 
                ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                  ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op
                  : ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                      ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op
                      : (((QData)((IData)((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op 
                                                                 >> 0x1fU))))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op)))));
        } else if ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__data = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op;
        } else if ((1U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))) {
            vlSelf->ysyx_22040632_top__DOT__data = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op;
        } else if (((((((((0ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op)) 
                          | (1ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) 
                         | (2ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) 
                        | (3ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) 
                       | (4ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) 
                      | (5ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) 
                     | (6ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))) 
                    | (7ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op)))) {
            vlSelf->ysyx_22040632_top__DOT__data = 
                ((0ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))
                  ? (QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr))))
                  : ((1ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))
                      ? (QData)((IData)((0xffU & (IData)(
                                                         (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                          >> 8U)))))
                      : ((2ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))
                          ? (QData)((IData)((0xffU 
                                             & (IData)(
                                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                        >> 0x10U)))))
                          : ((3ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))
                              ? (QData)((IData)((0xffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                            >> 0x18U)))))
                              : ((4ULL == (7ULL & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))
                                  ? (QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                                >> 0x20U)))))
                                  : ((5ULL == (7ULL 
                                               & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                                    >> 0x28U)))))
                                      : ((6ULL == (7ULL 
                                                   & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))
                                          ? (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                                        >> 0x30U)))))
                                          : (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                                        >> 0x38U))))))))))));
        }
    } else {
        vlSelf->ysyx_22040632_top__DOT__data = ((8U 
                                                 & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op
                                                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                  ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_idu_i__DOT__fun))
                                                    ? 
                                                   ((0ULL 
                                                     == 
                                                     (7ULL 
                                                      & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                                                >> 0x3fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__ld_wr 
                                                                        >> 0x20U)))))
                                                    : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op)
                                                   : vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__data_op)));
    }
}

void Vysyx_22040632_top___024root___sequent__TOP__1(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___sequent__TOP__2(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___sequent__TOP__3(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i__1(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i__2(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i__3(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i__4(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i__5(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i__6(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i__7(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i__8(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i__9(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i__10(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i__11(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i__12(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i__13(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i__14(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i__15(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i__16(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i__17(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i__18(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i__19(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i__20(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i__21(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i__22(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i__23(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i__24(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i__25(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i__26(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i__27(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i__28(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i__29(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i__30(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i__31(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i__32(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i__33(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i__34(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i__35(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i__36(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i__37(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i__38(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i__39(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i__40(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i__41(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i__42(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i__43(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i__44(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i__45(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i__46(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i__47(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i__48(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i__49(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i__50(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__51(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__52(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__53(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__54(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__55(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__56(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__57(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__58(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__59(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__60(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i__61(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i__62(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i__63(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i__64(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i__65(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i__66(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i__67(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i__68(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i__69(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i__70(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i__71(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i__72(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__73(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__74(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__75(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i__76(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i__77(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i__78(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i__79(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i__80(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i__81(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i__82(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i__83(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i__84(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__84__KET____DOT__ysyx_22040632_walloc_32bits_i__85(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__85__KET____DOT__ysyx_22040632_walloc_32bits_i__86(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__86__KET____DOT__ysyx_22040632_walloc_32bits_i__87(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__87__KET____DOT__ysyx_22040632_walloc_32bits_i__88(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__88__KET____DOT__ysyx_22040632_walloc_32bits_i__89(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__89__KET____DOT__ysyx_22040632_walloc_32bits_i__90(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__90__KET____DOT__ysyx_22040632_walloc_32bits_i__91(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__91__KET____DOT__ysyx_22040632_walloc_32bits_i__92(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__92__KET____DOT__ysyx_22040632_walloc_32bits_i__93(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__93__KET____DOT__ysyx_22040632_walloc_32bits_i__94(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__94__KET____DOT__ysyx_22040632_walloc_32bits_i__95(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__95__KET____DOT__ysyx_22040632_walloc_32bits_i__96(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i__97(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i__98(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i__99(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i__100(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i__101(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i__102(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i__103(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i__104(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i__105(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i__106(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i__107(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i__108(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i__109(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i__110(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i__111(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i__112(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i__113(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i__114(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i__115(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i__116(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i__117(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i__118(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i__119(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i__120(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i__121(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i__122(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i__123(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i__124(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i__125(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i__126(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i__127(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i__128(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top___024root___sequent__TOP__4(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___combo__TOP__14(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i__257(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i__258(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i__259(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i__260(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i__261(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i__262(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i__263(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i__264(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i__265(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i__266(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i__267(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i__268(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i__269(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i__270(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i__271(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i__272(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i__273(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i__274(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i__275(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i__276(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i__277(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i__278(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i__279(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i__280(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i__281(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i__282(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i__283(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i__284(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i__285(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i__286(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i__287(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i__288(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i__289(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i__290(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i__291(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i__292(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i__293(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i__294(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i__295(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i__296(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i__297(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i__298(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i__299(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i__300(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i__301(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i__302(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i__303(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i__304(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i__305(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i__306(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__307(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__308(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__309(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__310(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__311(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__312(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__313(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__314(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__315(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__316(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i__317(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i__318(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i__319(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i__320(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i__321(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i__322(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i__323(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i__324(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i__325(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i__326(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i__327(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i__328(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__329(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__330(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__331(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i__332(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i__333(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i__334(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i__335(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i__336(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i__337(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i__338(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i__339(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i__340(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__84__KET____DOT__ysyx_22040632_walloc_32bits_i__341(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__85__KET____DOT__ysyx_22040632_walloc_32bits_i__342(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__86__KET____DOT__ysyx_22040632_walloc_32bits_i__343(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__87__KET____DOT__ysyx_22040632_walloc_32bits_i__344(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__88__KET____DOT__ysyx_22040632_walloc_32bits_i__345(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__89__KET____DOT__ysyx_22040632_walloc_32bits_i__346(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__90__KET____DOT__ysyx_22040632_walloc_32bits_i__347(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__91__KET____DOT__ysyx_22040632_walloc_32bits_i__348(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__92__KET____DOT__ysyx_22040632_walloc_32bits_i__349(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__93__KET____DOT__ysyx_22040632_walloc_32bits_i__350(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__94__KET____DOT__ysyx_22040632_walloc_32bits_i__351(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__95__KET____DOT__ysyx_22040632_walloc_32bits_i__352(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i__353(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i__354(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i__355(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i__356(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i__357(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i__358(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i__359(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i__360(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i__361(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i__362(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i__363(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i__364(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i__365(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i__366(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i__367(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i__368(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i__369(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i__370(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i__371(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i__372(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i__373(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i__374(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i__375(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i__376(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i__377(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i__378(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i__379(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i__380(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i__381(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i__382(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i__383(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i__384(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf);
void Vysyx_22040632_top___024root___settle__TOP__8(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___settle__TOP__9(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___settle__TOP__10(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___settle__TOP__11(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___settle__TOP__12(Vysyx_22040632_top___024root* vlSelf);
void Vysyx_22040632_top___024root___sequent__TOP__22(Vysyx_22040632_top___024root* vlSelf);

void Vysyx_22040632_top___024root___eval(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040632_top___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n)))) {
        Vysyx_22040632_top___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vysyx_22040632_top___024root___sequent__TOP__3(vlSelf);
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i__1((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i__2((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i__3((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i__4((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i__5((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i__6((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i__7((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i__8((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i__9((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i__10((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i__11((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i__12((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i__13((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i__14((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i__15((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i__16((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i__17((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i__18((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i__19((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i__20((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i__21((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i__22((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i__23((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i__24((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i__25((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i__26((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i__27((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i__28((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i__29((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i__30((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i__31((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i__32((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i__33((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i__34((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i__35((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i__36((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i__37((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i__38((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i__39((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i__40((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i__41((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i__42((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i__43((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i__44((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i__45((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i__46((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i__47((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i__48((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i__49((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i__50((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__51((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__52((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__53((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__54((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__55((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__56((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__57((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__58((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__59((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__60((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i__61((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i__62((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i__63((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i__64((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i__65((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i__66((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i__67((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i__68((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i__69((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i__70((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i__71((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i__72((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__73((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__74((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__75((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i__76((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i__77((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i__78((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i__79((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i__80((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i__81((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i__82((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i__83((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i__84((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__84__KET____DOT__ysyx_22040632_walloc_32bits_i__85((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__84__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__85__KET____DOT__ysyx_22040632_walloc_32bits_i__86((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__85__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__86__KET____DOT__ysyx_22040632_walloc_32bits_i__87((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__86__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__87__KET____DOT__ysyx_22040632_walloc_32bits_i__88((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__87__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__88__KET____DOT__ysyx_22040632_walloc_32bits_i__89((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__88__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__89__KET____DOT__ysyx_22040632_walloc_32bits_i__90((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__89__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__90__KET____DOT__ysyx_22040632_walloc_32bits_i__91((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__90__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__91__KET____DOT__ysyx_22040632_walloc_32bits_i__92((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__91__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__92__KET____DOT__ysyx_22040632_walloc_32bits_i__93((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__92__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__93__KET____DOT__ysyx_22040632_walloc_32bits_i__94((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__93__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__94__KET____DOT__ysyx_22040632_walloc_32bits_i__95((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__94__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__95__KET____DOT__ysyx_22040632_walloc_32bits_i__96((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__95__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i__97((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i__98((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i__99((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i__100((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i__101((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i__102((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i__103((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i__104((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i__105((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i__106((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i__107((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i__108((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i__109((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i__110((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i__111((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i__112((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i__113((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i__114((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i__115((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i__116((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i__117((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i__118((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i__119((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i__120((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i__121((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i__122((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i__123((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i__124((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i__125((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i__126((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i__127((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i));
        Vysyx_22040632_top_ysyx_22040632_walloc_32bits___sequent__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i__128((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i));
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vysyx_22040632_top___024root___sequent__TOP__4(vlSelf);
    }
    Vysyx_22040632_top___024root___combo__TOP__14(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i__257((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i__258((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i__259((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i__260((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i__261((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i__262((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i__263((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i__264((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i__265((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i__266((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i__267((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i__268((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i__269((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i__270((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i__271((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i__272((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i__273((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i__274((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i__275((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i__276((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i__277((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i__278((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i__279((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i__280((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i__281((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i__282((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i__283((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i__284((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i__285((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i__286((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i__287((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i__288((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i__289((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i__290((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i__291((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i__292((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i__293((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i__294((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i__295((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i__296((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i__297((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i__298((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i__299((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i__300((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i__301((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i__302((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i__303((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i__304((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i__305((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i__306((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__307((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__308((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__309((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__310((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__311((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__312((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__313((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__314((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__315((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__316((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i__317((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i__318((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i__319((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i__320((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i__321((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i__322((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i__323((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i__324((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i__325((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i__326((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i__327((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i__328((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__329((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__330((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__331((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i__332((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i__333((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i__334((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i__335((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i__336((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i__337((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i__338((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i__339((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i__340((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__84__KET____DOT__ysyx_22040632_walloc_32bits_i__341((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__84__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__85__KET____DOT__ysyx_22040632_walloc_32bits_i__342((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__85__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__86__KET____DOT__ysyx_22040632_walloc_32bits_i__343((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__86__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__87__KET____DOT__ysyx_22040632_walloc_32bits_i__344((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__87__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__88__KET____DOT__ysyx_22040632_walloc_32bits_i__345((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__88__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__89__KET____DOT__ysyx_22040632_walloc_32bits_i__346((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__89__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__90__KET____DOT__ysyx_22040632_walloc_32bits_i__347((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__90__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__91__KET____DOT__ysyx_22040632_walloc_32bits_i__348((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__91__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__92__KET____DOT__ysyx_22040632_walloc_32bits_i__349((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__92__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__93__KET____DOT__ysyx_22040632_walloc_32bits_i__350((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__93__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__94__KET____DOT__ysyx_22040632_walloc_32bits_i__351((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__94__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__95__KET____DOT__ysyx_22040632_walloc_32bits_i__352((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__95__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i__353((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i__354((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i__355((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i__356((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i__357((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i__358((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i__359((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i__360((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i__361((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i__362((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i__363((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i__364((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i__365((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i__366((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i__367((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i__368((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i__369((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i__370((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i__371((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i__372((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i__373((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i__374((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i__375((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i__376((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i__377((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i__378((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i__379((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i__380((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i__381((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i__382((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i__383((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top_ysyx_22040632_walloc_32bits___combo__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i__384((&vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i));
    Vysyx_22040632_top___024root___settle__TOP__8(vlSelf);
    Vysyx_22040632_top___024root___settle__TOP__9(vlSelf);
    Vysyx_22040632_top___024root___settle__TOP__10(vlSelf);
    Vysyx_22040632_top___024root___settle__TOP__11(vlSelf);
    Vysyx_22040632_top___024root___settle__TOP__12(vlSelf);
    Vysyx_22040632_top___024root___combo__TOP__20(vlSelf);
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n)))) {
        Vysyx_22040632_top___024root___sequent__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040632_top___024root___sequent__TOP__22(vlSelf);
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n)))) {
        Vysyx_22040632_top___024root___multiclk__TOP__23(vlSelf);
    }
    Vysyx_22040632_top___024root___combo__TOP__24(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
    vlSelf->__VinpClk__TOP__ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n 
        = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_exu_i__DOT__rrst_n;
}
