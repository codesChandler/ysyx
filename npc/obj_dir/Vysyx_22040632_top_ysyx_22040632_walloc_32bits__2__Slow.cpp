// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "Vysyx_22040632_top_ysyx_22040632_walloc_32bits.h"
#include "Vysyx_22040632_top__Syms.h"

#include "verilated_dpi.h"

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__51(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i__51\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__52(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i__52\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__53(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i__53\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__54(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i__54\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__55(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i__55\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__56(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i__56\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__57(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i__57\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__58(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i__58\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__59(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i__59\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__60(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i__60\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i__61(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i__61\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
                                                               >> 1U))))))))))))));
}

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i__62(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i__62\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
                                                               >> 1U))))))))))))));
}

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i__63(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i__63\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
                                                               >> 1U))))))))))))));
}

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i__64(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i__64\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
                                                               >> 1U))))))))))))));
}

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i__65(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i__65\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
                                                               >> 1U))))))))))))));
}

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i__66(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i__66\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
                                                               >> 1U))))))))))))));
}

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i__67(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i__67\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
                                                               >> 1U))))))))))))));
}

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i__68(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i__68\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
                                                               >> 1U))))))))))))));
}

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i__69(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i__69\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
                                                               >> 1U))))))))))))));
}

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i__70(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i__70\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
                                                               >> 1U))))))))))))));
}

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i__71(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i__71\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
                                                               >> 1U))))))))))))));
}

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i__72(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i__72\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
    vlSelf->__PVT__first_s = ((0x400U & (((0x400U & 
                                           (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                            >> 0x15U)) 
                                          ^ (0xc00U 
                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                >> 0x14U))) 
                                         ^ (0x1c00U 
                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                               >> 0x13U)))) 
                              | ((0x200U & (((0x1e00U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                 >> 0x13U)) 
                                             ^ (0x3e00U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                   >> 0x12U))) 
                                            ^ (0x7e00U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                  >> 0x11U)))) 
                                 | ((0x100U & (((0x7f00U 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                    >> 0x11U)) 
                                                ^ (0xff00U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                      >> 0x10U))) 
                                               ^ (0x1ff00U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                     >> 0xfU)))) 
                                    | ((0x80U & (((0x1ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                      >> 0xfU)) 
                                                  ^ 
                                                  (0x3ff80U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                      >> 0xeU))) 
                                                 ^ 
                                                 (0x7ff80U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                     >> 0xdU)))) 
                                       | ((0x40U & 
                                           (((0x7ffc0U 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                 >> 0xdU)) 
                                             ^ (0xfffc0U 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                   >> 0xcU))) 
                                            ^ (0x1fffc0U 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                  >> 0xbU)))) 
                                          | ((0x20U 
                                              & (((0x1fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  (0x3fffe0U 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0x7fffe0U 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                     >> 9U)))) 
                                             | ((0x10U 
                                                 & (((0x7ffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0xfffff0U 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                         >> 8U))) 
                                                    ^ 
                                                    (0x1fffff0U 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                        >> 7U)))) 
                                                | ((8U 
                                                    & (((0x1fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                            >> 7U)) 
                                                        ^ 
                                                        (0x3fffff8U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0x7fffff8U 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                           >> 5U)))) 
                                                   | ((4U 
                                                       & (((0x7fffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                               >> 5U)) 
                                                           ^ 
                                                           (0xffffffcU 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x1ffffffcU 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                              >> 3U)))) 
                                                      | ((2U 
                                                          & (((0x1ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0x3ffffffeU 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffffeU 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                 >> 1U)))) 
                                                         | (1U 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                               ^ 
                                                               (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                >> 1U)))))))))))));
    vlSelf->__PVT__c = ((0x3ffff800U & vlSelf->__PVT__c) 
                        | ((0x400U & (((0x400U & ((
                                                   vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                   >> 0x15U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                     >> 0x14U))) 
                                       | (0xc00U & 
                                          ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                            >> 0x14U) 
                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                              >> 0x13U)))) 
                                      | (0x400U & (
                                                   (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                    >> 0x15U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                      >> 0x13U))))) 
                           | ((0x200U & (((0x1e00U 
                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                               >> 0x13U) 
                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                 >> 0x12U))) 
                                          | (0x3e00U 
                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                 >> 0x12U) 
                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                   >> 0x11U)))) 
                                         | (0x1e00U 
                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                >> 0x13U) 
                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                  >> 0x11U))))) 
                              | ((0x100U & (((0x7f00U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                  >> 0x11U) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                    >> 0x10U))) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                    >> 0x10U) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                      >> 0xfU)))) 
                                            | (0x7f00U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                   >> 0x11U) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                     >> 0xfU))))) 
                                 | ((0x80U & (((0x1ff80U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                    >> 0xfU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                      >> 0xeU))) 
                                               | (0x3ff80U 
                                                  & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                      >> 0xeU) 
                                                     & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                        >> 0xdU)))) 
                                              | (0x1ff80U 
                                                 & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                     >> 0xfU) 
                                                    & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                       >> 0xdU))))) 
                                    | ((0x40U & (((0x7ffc0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                         >> 0xcU))) 
                                                  | (0xfffc0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                         >> 0xcU) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                           >> 0xbU)))) 
                                                 | (0x7ffc0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                        >> 0xdU) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                          >> 0xbU))))) 
                                       | ((0x20U & 
                                           (((0x1fffe0U 
                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                  >> 0xbU) 
                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                    >> 0xaU))) 
                                             | (0x3fffe0U 
                                                & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                    >> 0xaU) 
                                                   & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                      >> 9U)))) 
                                            | (0x1fffe0U 
                                               & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                   >> 0xbU) 
                                                  & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                     >> 9U))))) 
                                          | ((0x10U 
                                              & (((0x7ffff0U 
                                                   & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                       >> 9U) 
                                                      & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                         >> 8U))) 
                                                  | (0xfffff0U 
                                                     & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                         >> 8U) 
                                                        & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                           >> 7U)))) 
                                                 | (0x7ffff0U 
                                                    & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                        >> 9U) 
                                                       & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                          >> 7U))))) 
                                             | ((8U 
                                                 & (((0x1fffff8U 
                                                      & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                            >> 6U))) 
                                                     | (0x3fffff8U 
                                                        & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                            >> 6U) 
                                                           & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                              >> 5U)))) 
                                                    | (0x1fffff8U 
                                                       & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                           >> 7U) 
                                                          & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                             >> 5U))))) 
                                                | ((4U 
                                                    & (((0x7fffffcU 
                                                         & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                               >> 4U))) 
                                                        | (0xffffffcU 
                                                           & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                               >> 4U) 
                                                              & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                 >> 3U)))) 
                                                       | (0x7fffffcU 
                                                          & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                              >> 5U) 
                                                             & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                >> 3U))))) 
                                                   | ((2U 
                                                       & (((0x1ffffffeU 
                                                            & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                >> 3U) 
                                                               & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                  >> 2U))) 
                                                           | (0x3ffffffeU 
                                                              & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                  >> 2U) 
                                                                 & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                    >> 1U)))) 
                                                          | (0x1ffffffeU 
                                                             & ((vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                 >> 3U) 
                                                                & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                                   >> 1U))))) 
                                                      | (1U 
                                                         & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                            & (vlSymsp->TOP.ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
                                                               >> 1U))))))))))))));
}

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__73(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i__73\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__74(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i__74\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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

void Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__75(Vysyx_22040632_top_ysyx_22040632_walloc_32bits* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_22040632_top_ysyx_22040632_walloc_32bits___settle__TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i__75\n"); );
    // Body
    vlSelf->__PVT__c = ((0x2fffffffU & vlSelf->__PVT__c) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa28__in))) 
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
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__ysyx_22040632_csa29__in))) 
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
