// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040632_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040632_top__Syms.h"
#include "Vysyx_22040632_top___024root.h"

VL_INLINE_OPT void Vysyx_22040632_top___024root___sequent__TOP__11(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___sequent__TOP__11\n"); );
    // Body
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3bU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 4U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                          << 3U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                           << 2U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                              << 1U)) 
                                          | ((0x8000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU]) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                    >> 1U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                       >> 2U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                          >> 3U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                             >> 4U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                >> 5U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                   >> 6U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                      >> 7U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                         >> 8U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                            >> 9U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                               >> 0xaU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 0xbU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x18U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x19U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x1aU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x1bU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3cU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 3U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                          << 2U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                           << 1U)) 
                                       | ((0x10000000U 
                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U]) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                 >> 1U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                    >> 2U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                       >> 3U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                          >> 4U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                             >> 5U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                >> 6U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                   >> 7U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                      >> 8U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                         >> 9U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                            >> 0xaU)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                               >> 0xbU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 0xcU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x15U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x18U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x1aU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x1bU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x1cU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3dU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 2U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                                          << 1U)) | 
                                      ((0x20000000U 
                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U]) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                              >> 1U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                 >> 2U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                    >> 3U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                       >> 4U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                          >> 5U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                             >> 6U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                >> 7U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                   >> 8U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                      >> 9U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                         >> 0xaU)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                            >> 0xbU)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                               >> 0xcU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 0xdU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x16U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x1aU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x1dU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3eU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU] 
                           << 1U)) | ((0x40000000U 
                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U]) 
                                      | ((0x20000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                             >> 1U)) 
                                         | ((0x10000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                >> 2U)) 
                                            | ((0x8000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                   >> 3U)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                      >> 4U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                         >> 5U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                            >> 6U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                               >> 7U)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                  >> 8U)) 
                                                              | ((0x200000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                     >> 9U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                        >> 0xaU)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                           >> 0xbU)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                              >> 0xcU)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                >> 0xdU)) 
                                                                             | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x17U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x19U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x1bU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x1cU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x1eU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x3fU] 
        = ((0x80000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7dU]) 
           | ((0x40000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x79U] 
                              >> 1U)) | ((0x20000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x75U] 
                                             >> 2U)) 
                                         | ((0x10000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x71U] 
                                                >> 3U)) 
                                            | ((0x8000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6dU] 
                                                   >> 4U)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x69U] 
                                                      >> 5U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x65U] 
                                                         >> 6U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x61U] 
                                                            >> 7U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5dU] 
                                                               >> 8U)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x59U] 
                                                                  >> 9U)) 
                                                              | ((0x200000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x55U] 
                                                                     >> 0xaU)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x51U] 
                                                                        >> 0xbU)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4dU] 
                                                                           >> 0xcU)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x49U] 
                                                                              >> 0xdU)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x45U] 
                                                                                >> 0xeU)) 
                                                                             | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x41U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3dU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x39U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x35U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x31U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2dU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x29U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x25U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x21U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1dU] 
                                                                                >> 0x18U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x19U] 
                                                                                >> 0x19U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x15U] 
                                                                                >> 0x1aU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x11U] 
                                                                                >> 0x1bU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xdU] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[9U] 
                                                                                >> 0x1dU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[5U] 
                                                                                >> 0x1eU)) 
                                                                                | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[1U] 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x40U] 
        = ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
            << 0x1fU) | ((0x40000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                         << 0x1eU)) 
                         | ((0x20000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                            << 0x1dU)) 
                            | ((0x10000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                               << 0x1cU)) 
                               | ((0x8000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U]))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x41U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x1eU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x1dU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x1cU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x1bU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x1aU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x19U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x18U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0x17U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0x16U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0x15U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0x14U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0x13U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0x12U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 0x11U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U]) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x42U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x1dU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x1cU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x1bU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x1aU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x19U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x18U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x17U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0x16U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0x15U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0x14U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0x13U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0x12U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0x11U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 0x10U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU]) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 2U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x43U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x1cU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x1bU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x1aU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x19U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x18U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x17U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x16U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0x15U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0x14U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0x13U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0x12U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0x11U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0x10U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 0xfU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU]) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 3U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x44U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x1bU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x1aU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x19U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x18U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x17U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x16U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x15U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0x14U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0x13U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0x12U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0x11U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0x10U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0xfU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 0xeU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 0xcU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U]) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 3U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 4U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x45U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x1aU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x19U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x18U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x17U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x16U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x14U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0x13U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0x12U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0x11U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0x10U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0xfU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0xeU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 0xdU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 0xbU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 0xaU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 4U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                << 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U]) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 5U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x46U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x19U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x18U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x17U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x16U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x15U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x14U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x13U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0x12U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0x11U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0x10U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0xfU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0xeU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0xdU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 0xcU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 0xbU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 0xaU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 9U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU]) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 6U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x47U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x18U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x17U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x16U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x15U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x14U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x13U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x12U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0x11U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0x10U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0xfU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0xeU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0xdU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0xcU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 0xbU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 9U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 6U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU]) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 7U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x48U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x17U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x16U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x15U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x14U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x13U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x12U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x11U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0x10U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0xfU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0xeU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0xdU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0xcU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0xbU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 0xaU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 9U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 8U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 7U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 4U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 3U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U]) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 5U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 8U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x49U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x16U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x15U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x14U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x13U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x12U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x11U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0x10U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0xfU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0xeU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0xdU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0xcU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0xbU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 0xaU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 9U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 8U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 7U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 6U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 3U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 2U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U]) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 5U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 7U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 8U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 9U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4aU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x15U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x14U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x13U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x12U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x11U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0x10U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0xfU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0xeU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0xdU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0xcU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0xbU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 0xaU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 9U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 8U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 7U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 6U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 5U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                << 1U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 6U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 7U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0xaU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4bU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x14U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x13U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x12U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x11U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0x10U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0xfU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0xeU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0xdU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0xcU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0xbU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 0xaU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 9U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 8U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 7U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 6U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 5U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 2U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU]) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 6U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 7U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 8U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 9U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0xaU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0xbU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4cU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x13U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x12U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x11U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0x10U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0xfU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0xeU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0xdU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0xcU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0xbU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 0xaU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 9U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 8U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 7U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 6U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 5U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U]) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 7U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 9U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0xbU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0xcU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4dU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x12U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x11U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0x10U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0xfU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0xeU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0xdU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0xcU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0xbU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 0xaU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 9U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 8U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 7U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 6U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 5U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                << 1U)) 
                                                                                | ((0x2000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U]) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 1U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 2U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 4U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 8U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 9U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0xaU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0xbU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0xcU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0xdU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4eU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x11U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0x10U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0xfU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0xeU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0xdU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0xcU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0xbU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 0xaU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 9U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 8U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 7U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 6U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 5U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 4U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 2U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU]) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 9U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0xaU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0xbU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0xcU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0xdU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0xeU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x4fU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0x10U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                             << 0xfU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                                << 0xeU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                   << 0xdU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                      << 0xcU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                         << 0xbU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                            << 0xaU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                               << 9U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                  << 8U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                     << 7U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                        << 6U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                           << 5U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                              << 4U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 3U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 2U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU]) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 1U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 2U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 3U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 9U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0xcU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0xdU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0xeU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0xfU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x50U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0xfU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                            << 0xeU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                               << 0xdU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                  << 0xcU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                     << 0xbU)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                        << 0xaU)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                           << 9U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                              << 8U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                 << 7U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                    << 6U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                       << 5U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                          << 4U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                             << 3U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 2U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                << 1U)) 
                                                                               | ((0x10000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U]) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 4U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 9U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0xcU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0xdU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0xeU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0xfU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x10U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x51U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0xeU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                            << 0xdU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                               << 0xcU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                  << 0xbU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                     << 0xaU)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                        << 9U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                           << 8U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                              << 7U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                 << 6U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                    << 5U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                       << 4U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                          << 3U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                             << 2U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                << 1U)) 
                                                                            | ((0x20000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U]) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x11U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x52U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0xdU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                            << 0xcU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                               << 0xbU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                  << 0xaU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                     << 9U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                        << 8U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                           << 7U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                              << 6U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                 << 5U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                    << 4U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                       << 3U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                          << 2U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                             << 1U)) 
                                                                         | ((0x40000U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU]) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                >> 1U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 2U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0xeU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0xfU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x10U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x11U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x12U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x53U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0xcU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                            << 0xbU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                               << 0xaU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                  << 9U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                     << 8U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                        << 7U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                           << 6U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                              << 5U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                 << 4U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                    << 3U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                       << 2U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                          << 1U)) 
                                                                      | ((0x80000U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU]) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                >> 1U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                >> 2U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 6U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x11U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x12U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x13U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x54U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0xbU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                            << 0xaU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                               << 9U)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                  << 8U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                     << 7U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                        << 6U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                           << 5U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                              << 4U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                 << 3U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                    << 2U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                       << 1U)) 
                                                                   | ((0x100000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U]) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                             >> 1U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                >> 2U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                >> 3U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 5U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0x10U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x11U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x12U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x13U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x14U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x55U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 0xaU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                            << 9U)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                               << 8U)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                  << 7U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                     << 6U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                        << 5U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                           << 4U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                              << 3U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                                 << 2U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                    << 1U)) 
                                                                | ((0x200000U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U]) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                          >> 1U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                             >> 2U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                                >> 3U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                >> 4U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 5U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 6U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0x11U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x12U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x13U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x14U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x15U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x56U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 9U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                          << 8U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                           << 7U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                              << 6U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                 << 5U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                    << 4U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                       << 3U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                          << 2U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                             << 1U)) 
                                                         | ((0x400000U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU]) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                   >> 1U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                         >> 3U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                            >> 4U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                               >> 5U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 6U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 7U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0x12U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x13U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x14U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x15U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x16U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x57U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 8U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                          << 7U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                           << 6U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                              << 5U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                 << 4U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                    << 3U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                       << 2U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                          << 1U)) 
                                                      | ((0x800000U 
                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU]) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                >> 1U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                   >> 2U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                      >> 3U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                         >> 4U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                            >> 5U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                               >> 6U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 7U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0x13U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x14U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x15U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x16U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x17U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x58U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 7U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                          << 6U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                           << 5U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                              << 4U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                 << 3U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                    << 2U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                       << 1U)) 
                                                   | ((0x1000000U 
                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U]) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                             >> 1U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                >> 2U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                   >> 3U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                      >> 4U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                         >> 5U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                            >> 6U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                               >> 7U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 8U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 9U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0x14U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x15U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x16U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x17U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x18U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x59U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 6U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                          << 5U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                           << 4U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                              << 3U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                 << 2U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                    << 1U)) 
                                                | ((0x2000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U]) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                          >> 1U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                             >> 2U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                >> 3U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                   >> 4U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                      >> 5U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                         >> 6U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                            >> 7U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                               >> 8U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 9U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0x15U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x16U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x18U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x19U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x5aU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 5U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                          << 4U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                           << 3U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                              << 2U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                 << 1U)) 
                                             | ((0x4000000U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU]) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                       >> 1U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                          >> 2U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                             >> 3U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                >> 4U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                   >> 5U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                      >> 6U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                         >> 7U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                            >> 8U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                               >> 9U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 0xaU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0x16U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x17U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x18U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x19U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x1aU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x5bU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 4U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                          << 3U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                           << 2U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                              << 1U)) 
                                          | ((0x8000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU]) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                    >> 1U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                       >> 2U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                          >> 3U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                             >> 4U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                >> 5U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                   >> 6U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                      >> 7U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                         >> 8U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                            >> 9U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                               >> 0xaU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 0xbU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0x15U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x18U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x19U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x1aU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x1bU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x5cU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 3U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                          << 2U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                           << 1U)) 
                                       | ((0x10000000U 
                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U]) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                 >> 1U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                    >> 2U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                       >> 3U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                          >> 4U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                             >> 5U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                >> 6U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                   >> 7U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                      >> 8U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                         >> 9U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                            >> 0xaU)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                               >> 0xbU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 0xcU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0x15U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0x18U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x1aU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x1bU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x1cU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x5dU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 2U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                                          << 1U)) | 
                                      ((0x20000000U 
                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U]) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                              >> 1U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                 >> 2U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                    >> 3U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                       >> 4U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                          >> 5U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                             >> 6U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                >> 7U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                   >> 8U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                      >> 9U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                         >> 0xaU)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                            >> 0xbU)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                               >> 0xcU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 0xdU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0x16U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0x17U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x1aU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x1dU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x5eU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU] 
                           << 1U)) | ((0x40000000U 
                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU]) 
                                      | ((0x20000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                             >> 1U)) 
                                         | ((0x10000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                >> 2U)) 
                                            | ((0x8000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                   >> 3U)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                      >> 4U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                         >> 5U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                            >> 6U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                               >> 7U)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                  >> 8U)) 
                                                              | ((0x200000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                     >> 9U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                        >> 0xaU)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                           >> 0xbU)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                              >> 0xcU)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                >> 0xdU)) 
                                                                             | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0x17U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0x18U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0x19U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x1bU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x1cU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x1eU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x5fU] 
        = ((0x80000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7eU]) 
           | ((0x40000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7aU] 
                              >> 1U)) | ((0x20000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x76U] 
                                             >> 2U)) 
                                         | ((0x10000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x72U] 
                                                >> 3U)) 
                                            | ((0x8000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6eU] 
                                                   >> 4U)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6aU] 
                                                      >> 5U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x66U] 
                                                         >> 6U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x62U] 
                                                            >> 7U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5eU] 
                                                               >> 8U)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5aU] 
                                                                  >> 9U)) 
                                                              | ((0x200000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x56U] 
                                                                     >> 0xaU)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x52U] 
                                                                        >> 0xbU)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4eU] 
                                                                           >> 0xcU)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4aU] 
                                                                              >> 0xdU)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x46U] 
                                                                                >> 0xeU)) 
                                                                             | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x42U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3eU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3aU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x36U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x32U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2eU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2aU] 
                                                                                >> 0x15U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x26U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x22U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1eU] 
                                                                                >> 0x18U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1aU] 
                                                                                >> 0x19U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x16U] 
                                                                                >> 0x1aU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x12U] 
                                                                                >> 0x1bU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xeU] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xaU] 
                                                                                >> 0x1dU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[6U] 
                                                                                >> 0x1eU)) 
                                                                                | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[2U] 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x60U] 
        = ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
            << 0x1fU) | ((0x40000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                         << 0x1eU)) 
                         | ((0x20000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                            << 0x1dU)) 
                            | ((0x10000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                               << 0x1cU)) 
                               | ((0x8000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U]))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x61U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x1eU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x1dU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x1cU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0x1bU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0x1aU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0x19U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0x18U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0x17U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0x16U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 0x15U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 0x14U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 0x13U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 0x12U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 0x11U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                << 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                << 1U)) 
                                                                                | ((2U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U]) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 1U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x62U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x1dU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x1cU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x1bU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0x1aU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0x19U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0x18U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0x17U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0x16U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0x15U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 0x14U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 0x13U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 0x12U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 0x11U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 0x10U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU]) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 2U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x63U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x1cU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x1bU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x1aU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0x19U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0x18U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0x17U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0x16U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0x15U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0x14U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 0x13U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 0x12U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 0x11U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 0x10U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 0xfU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                << 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU]) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 2U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 3U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x64U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x1bU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x1aU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x19U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0x18U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0x17U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0x16U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0x15U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0x14U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0x13U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 0x12U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 0x11U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 0x10U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 0xfU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 0xeU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 0xcU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U]) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 3U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 4U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x65U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x1aU)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x19U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x18U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0x17U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0x16U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0x14U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0x13U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0x12U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 0x11U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 0x10U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 0xfU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 0xeU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 0xdU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 0xbU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 0xaU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                << 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                << 4U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                << 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U]) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 5U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x66U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x19U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x18U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x17U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0x16U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0x15U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0x14U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0x13U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0x12U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0x11U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 0x10U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 0xfU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 0xeU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 0xdU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 0xcU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 0xbU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 0xaU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 9U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                << 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                << 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                << 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                << 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                << 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                << 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                << 1U)) 
                                                                                | ((0x40U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU]) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 1U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 4U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 6U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x67U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x18U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x17U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x16U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0x15U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0x14U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0x13U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0x12U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0x11U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0x10U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 0xfU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 0xeU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 0xdU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 0xcU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 0xbU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 0xaU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 9U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                << 6U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                << 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                << 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                << 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                << 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                << 1U)) 
                                                                                | ((0x80U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU]) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 1U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 2U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 3U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 4U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 5U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 6U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 7U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x68U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x17U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x16U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x15U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0x14U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0x13U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0x12U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0x11U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0x10U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0xfU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 0xeU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 0xdU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 0xcU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 0xbU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 0xaU)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 9U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 8U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 7U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                << 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                << 4U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                << 3U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                << 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                << 1U)) 
                                                                                | ((0x100U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U]) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 1U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 2U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 5U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 6U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 7U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 8U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x69U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x16U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x15U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x14U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0x13U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0x12U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0x11U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0x10U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0xfU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0xeU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 0xdU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 0xcU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 0xbU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 0xaU)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 9U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 8U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 7U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 6U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                << 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                << 3U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                << 2U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                << 1U)) 
                                                                                | ((0x200U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U]) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 1U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 2U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 3U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 5U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 7U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 8U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 9U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6aU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x15U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x14U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x13U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0x12U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0x11U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0x10U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0xfU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0xeU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0xdU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 0xcU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 0xbU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 0xaU)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 9U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 8U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 7U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 6U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 5U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                << 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                << 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                << 1U)) 
                                                                                | ((0x400U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU]) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 1U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 2U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 3U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 6U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 7U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 8U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 9U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0xaU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6bU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x14U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x13U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x12U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0x11U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0x10U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0xfU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0xeU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0xdU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0xcU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 0xbU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 0xaU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 9U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 8U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 7U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 6U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 5U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                << 2U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                << 1U)) 
                                                                                | ((0x800U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU]) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 1U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 2U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 3U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 6U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 7U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 8U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 9U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0xaU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0xbU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6cU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x13U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x12U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x11U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0x10U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0xfU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0xeU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0xdU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0xcU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0xbU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 0xaU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 9U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 8U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 7U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 6U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 5U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                << 1U)) 
                                                                                | ((0x1000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U]) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 1U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 2U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 3U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 4U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 5U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 6U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 7U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 8U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 9U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0xbU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0xcU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6dU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x12U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x11U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0x10U)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0xfU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0xeU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0xdU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0xcU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0xbU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 0xaU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 9U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 8U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 7U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 6U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 5U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 4U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                << 1U)) 
                                                                                | ((0x2000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U]) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 1U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 2U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 3U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 4U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 5U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 6U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 8U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 9U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0xaU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0xbU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0xcU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0xdU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6eU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x11U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0x10U)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0xfU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0xeU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0xdU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0xcU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0xbU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 0xaU)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 9U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 8U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 7U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 6U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 5U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 4U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 2U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                << 1U)) 
                                                                                | ((0x4000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU]) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 1U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 2U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 3U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 4U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 5U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 6U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 8U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 9U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0xaU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0xbU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0xcU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0xdU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0xeU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x6fU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0x10U)) | ((0x40000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                             << 0xfU)) 
                                         | ((0x20000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                                << 0xeU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                   << 0xdU)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                      << 0xcU)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                         << 0xbU)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                            << 0xaU)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                               << 9U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                  << 8U)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                     << 7U)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                        << 6U)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                           << 5U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                              << 4U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 3U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 2U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU]) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 1U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 2U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 3U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 4U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 5U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 6U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 8U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 9U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0xbU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0xcU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0xdU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0xeU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0xfU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x70U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0xfU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                            << 0xeU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                               << 0xdU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                  << 0xcU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                     << 0xbU)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                        << 0xaU)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                           << 9U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                              << 8U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                 << 7U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                    << 6U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                       << 5U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                          << 4U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                             << 3U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 2U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                << 1U)) 
                                                                               | ((0x10000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U]) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 2U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 3U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 4U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 5U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 6U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 9U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0xcU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0xdU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0xeU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0xfU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x10U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x71U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0xeU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                            << 0xdU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                               << 0xcU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                  << 0xbU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                     << 0xaU)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                        << 9U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                           << 8U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                              << 7U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                 << 6U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                    << 5U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                       << 4U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                          << 3U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                             << 2U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                << 1U)) 
                                                                            | ((0x20000U 
                                                                                & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U]) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 2U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 4U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 5U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 6U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 7U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 8U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 9U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0xdU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0xeU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0xfU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x10U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x11U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x72U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0xdU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                            << 0xcU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                               << 0xbU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                  << 0xaU)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                     << 9U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                        << 8U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                           << 7U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                              << 6U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                 << 5U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                    << 4U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                       << 3U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                          << 2U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                             << 1U)) 
                                                                         | ((0x40000U 
                                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU]) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                >> 1U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 2U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 3U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 4U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 6U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 7U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 8U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0xeU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0xfU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x10U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x11U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x12U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x73U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0xcU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                            << 0xbU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                               << 0xaU)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                  << 9U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                     << 8U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                        << 7U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                           << 6U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                              << 5U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                 << 4U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                    << 3U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                       << 2U)) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                          << 1U)) 
                                                                      | ((0x80000U 
                                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU]) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                >> 1U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                >> 2U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 3U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 5U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 6U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 8U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 9U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0xfU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x10U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x11U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x12U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x13U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x74U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0xbU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                            << 0xaU)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                               << 9U)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                  << 8U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                     << 7U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                        << 6U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                           << 5U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                              << 4U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                 << 3U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                    << 2U)) 
                                                                | ((0x200000U 
                                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                       << 1U)) 
                                                                   | ((0x100000U 
                                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U]) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                             >> 1U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                >> 2U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                >> 3U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 4U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 5U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 7U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 8U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0x10U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x11U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x12U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x13U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x14U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x75U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 0xaU)) | ((0x40000000U 
                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                            << 9U)) 
                                        | ((0x20000000U 
                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                               << 8U)) 
                                           | ((0x10000000U 
                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                  << 7U)) 
                                              | ((0x8000000U 
                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                     << 6U)) 
                                                 | ((0x4000000U 
                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                        << 5U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                           << 4U)) 
                                                       | ((0x1000000U 
                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                              << 3U)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                                 << 2U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                    << 1U)) 
                                                                | ((0x200000U 
                                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U]) 
                                                                   | ((0x100000U 
                                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                          >> 1U)) 
                                                                      | ((0x80000U 
                                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                             >> 2U)) 
                                                                         | ((0x40000U 
                                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                                >> 3U)) 
                                                                            | ((0x20000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                >> 4U)) 
                                                                               | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 5U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 6U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 7U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 8U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 9U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0x11U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x12U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x13U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x14U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x15U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x76U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 9U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                          << 8U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                           << 7U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                              << 6U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                 << 5U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                    << 4U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                       << 3U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                          << 2U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                             << 1U)) 
                                                         | ((0x400000U 
                                                             & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU]) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                   >> 1U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                      >> 2U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                         >> 3U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                            >> 4U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                               >> 5U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 6U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 7U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 8U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 9U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0x12U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x13U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x14U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x15U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x16U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x77U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 8U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                          << 7U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                           << 6U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                              << 5U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                 << 4U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                    << 3U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                       << 2U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                          << 1U)) 
                                                      | ((0x800000U 
                                                          & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU]) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                >> 1U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                   >> 2U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                      >> 3U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                         >> 4U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                            >> 5U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                               >> 6U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 7U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 8U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 9U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0x13U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x14U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x15U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x16U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x17U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x78U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 7U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                          << 6U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                           << 5U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                              << 4U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                 << 3U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                    << 2U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                       << 1U)) 
                                                   | ((0x1000000U 
                                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U]) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                             >> 1U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                >> 2U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                   >> 3U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                      >> 4U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                         >> 5U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                            >> 6U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                               >> 7U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 8U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 9U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0x14U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x15U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x16U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x17U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x18U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x79U] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 6U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                          << 5U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                           << 4U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                              << 3U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                 << 2U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                    << 1U)) 
                                                | ((0x2000000U 
                                                    & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U]) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                          >> 1U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                             >> 2U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                >> 3U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                   >> 4U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                      >> 5U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                         >> 6U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                            >> 7U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                               >> 8U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 9U)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0x15U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x16U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x17U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x18U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x19U)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7aU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 5U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                          << 4U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                           << 3U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                              << 2U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                 << 1U)) 
                                             | ((0x4000000U 
                                                 & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU]) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                       >> 1U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                          >> 2U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                             >> 3U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                >> 4U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                   >> 5U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                      >> 6U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                         >> 7U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                            >> 8U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                               >> 9U)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 0xaU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0x16U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x17U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x18U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x19U)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x1aU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7bU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 4U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                          << 3U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                           << 2U)) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                              << 1U)) 
                                          | ((0x8000000U 
                                              & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU]) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                    >> 1U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                       >> 2U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                          >> 3U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                             >> 4U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                >> 5U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                   >> 6U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                      >> 7U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                         >> 8U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                            >> 9U)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                               >> 0xaU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 0xbU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0x15U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x18U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x19U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x1aU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x1bU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7cU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 3U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                          << 2U)) | 
                                      ((0x20000000U 
                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                           << 1U)) 
                                       | ((0x10000000U 
                                           & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U]) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                 >> 1U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                    >> 2U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                       >> 3U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                          >> 4U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                             >> 5U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                >> 6U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                   >> 7U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                      >> 8U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                         >> 9U)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                            >> 0xaU)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                               >> 0xbU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 0xcU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0x15U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0x18U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x1aU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x1bU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x1cU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7dU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 2U)) | ((0x40000000U 
                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                                          << 1U)) | 
                                      ((0x20000000U 
                                        & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U]) 
                                       | ((0x10000000U 
                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                              >> 1U)) 
                                          | ((0x8000000U 
                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                 >> 2U)) 
                                             | ((0x4000000U 
                                                 & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                    >> 3U)) 
                                                | ((0x2000000U 
                                                    & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                       >> 4U)) 
                                                   | ((0x1000000U 
                                                       & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                          >> 5U)) 
                                                      | ((0x800000U 
                                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                             >> 6U)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                >> 7U)) 
                                                            | ((0x200000U 
                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                   >> 8U)) 
                                                               | ((0x100000U 
                                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                      >> 9U)) 
                                                                  | ((0x80000U 
                                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                         >> 0xaU)) 
                                                                     | ((0x40000U 
                                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                            >> 0xbU)) 
                                                                        | ((0x20000U 
                                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                               >> 0xcU)) 
                                                                           | ((0x10000U 
                                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 0xdU)) 
                                                                              | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 0x10U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0x16U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0x17U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0x19U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x1aU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x1cU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x1dU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7eU] 
        = ((0x80000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU] 
                           << 1U)) | ((0x40000000U 
                                       & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU]) 
                                      | ((0x20000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                             >> 1U)) 
                                         | ((0x10000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                >> 2U)) 
                                            | ((0x8000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                   >> 3U)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                      >> 4U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                         >> 5U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                            >> 6U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                               >> 7U)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                  >> 8U)) 
                                                              | ((0x200000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                     >> 9U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                        >> 0xaU)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                           >> 0xbU)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                              >> 0xcU)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                >> 0xdU)) 
                                                                             | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0x17U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0x18U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0x19U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x1bU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x1cU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x1eU)))))))))))))))))))))))))))))))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__input_walloc[0x7fU] 
        = ((0x80000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7fU]) 
           | ((0x40000000U & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x7bU] 
                              >> 1U)) | ((0x20000000U 
                                          & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x77U] 
                                             >> 2U)) 
                                         | ((0x10000000U 
                                             & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x73U] 
                                                >> 3U)) 
                                            | ((0x8000000U 
                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6fU] 
                                                   >> 4U)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x6bU] 
                                                      >> 5U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x67U] 
                                                         >> 6U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x63U] 
                                                            >> 7U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5fU] 
                                                               >> 8U)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x5bU] 
                                                                  >> 9U)) 
                                                              | ((0x200000U 
                                                                  & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x57U] 
                                                                     >> 0xaU)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x53U] 
                                                                        >> 0xbU)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4fU] 
                                                                           >> 0xcU)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x4bU] 
                                                                              >> 0xdU)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x47U] 
                                                                                >> 0xeU)) 
                                                                             | ((0x10000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x43U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3fU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x3bU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x37U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x33U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2fU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x2bU] 
                                                                                >> 0x15U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x27U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x23U] 
                                                                                >> 0x17U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1fU] 
                                                                                >> 0x18U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x1bU] 
                                                                                >> 0x19U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x17U] 
                                                                                >> 0x1aU)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0x13U] 
                                                                                >> 0x1bU)) 
                                                                                | ((8U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xfU] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[0xbU] 
                                                                                >> 0x1dU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[7U] 
                                                                                >> 0x1eU)) 
                                                                                | (vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__product[3U] 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_addr 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
            ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem)
                : ((8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                    ? ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__tag_read 
                        << 0xbU) | (0x7c0U & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cnt_f) 
                                              << 6U)))
                    : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_state)
                        ? ((vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__tag_read 
                            << 0xbU) | (0x7c0U & ((IData)(
                                                          (vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                                           >> 6U)) 
                                                  << 6U)))
                        : ((IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                    >> 6U)) << 6U))))
            : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
                ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc
                : (0xffffffc0U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__pc)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_valid 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_valid) 
           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_req));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_valid 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_valid) 
           & (~ (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_req)));
    vlSelf->axi_aw_addr_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_addr;
    vlSelf->axi_ar_addr_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_addr;
    vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_ar_valid 
        = ((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_state)) 
           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_valid));
    vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_aw_valid 
        = ((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)) 
           & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_valid));
    vlSelf->axi_ar_valid_o = vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_ar_valid;
    vlSelf->axi_aw_valid_o = vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_aw_valid;
}

extern const VlWide<120>/*3839:0*/ Vysyx_22040632_top__ConstPool__CONST_hdc299712_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_22040632_top__ConstPool__TABLE_h4836bee5_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_22040632_top__ConstPool__TABLE_ha150fa3d_0;

VL_INLINE_OPT void Vysyx_22040632_top___024root___combo__TOP__12(Vysyx_22040632_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040632_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040632_top___024root___combo__TOP__12\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    VlWide<120>/*3839:0*/ __Vtemp_h8fe1d2a3__0;
    VlWide<120>/*3839:0*/ __Vtemp_h257682a8__0;
    VlWide<120>/*3839:0*/ __Vtemp_hace16e33__0;
    // Body
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__b_hs 
        = ((3U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)) 
           & (IData)(vlSelf->axi_b_valid_i));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_hs 
        = ((IData)(vlSelf->axi_w_ready_i) & (2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_hs 
        = ((2U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_state)) 
           & (IData)(vlSelf->axi_r_valid_i));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[1U] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__1__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                   << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__0__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                 >> 0x20U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[2U] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1aU) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__2__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                         >> 4U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[3U] 
        = ((0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[3U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__3__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 6U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[3U] 
        = ((0xffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[3U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[4U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                 << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[5U] 
        = (((0xf00000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x14U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__5__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__4__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                                 >> 0x20U)) 
                                        >> 8U)) | (0xff000000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0x14U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[6U] 
        = (((0xfc0000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x12U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__6__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                        >> 0xcU)) | 
           (0xff000000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                           << 0x12U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[7U] 
        = ((0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[7U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__7__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0xeU));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[7U] 
        = ((0xffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[7U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[8U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[9U] 
        = (((0xf000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xcU)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__9__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__8__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                              >> 0x20U)) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xcU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0xaU] 
        = (((0xfc00U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xaU)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__10__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                     >> 0x14U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xaU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0xbU] 
        = ((0xffffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0xbU]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__11__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0x16U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0xbU] 
        = ((0xffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0xbU]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0xcU] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x18U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0xdU] 
        = (((0xf0U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 4U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__13__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__12__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                          >> 0x20U)) 
                                 >> 0x18U)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 4U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0xeU] 
        = (((0xfcU & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 2U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__14__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                 >> 0x1cU)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__15__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 2U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0xfU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x10U] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__17__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                   << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__16__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                 >> 0x20U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x11U] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1aU) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__18__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                         >> 4U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x12U] 
        = ((0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x12U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__19__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 6U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x12U] 
        = ((0xffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x12U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x13U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                 << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x14U] 
        = (((0xf00000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x14U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__21__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__20__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                                 >> 0x20U)) 
                                        >> 8U)) | (0xff000000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0x14U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x15U] 
        = (((0xfc0000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x12U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__22__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                        >> 0xcU)) | 
           (0xff000000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                           << 0x12U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x16U] 
        = ((0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x16U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__23__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0xeU));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x16U] 
        = ((0xffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x16U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x17U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x18U] 
        = (((0xf000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xcU)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__25__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__24__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                              >> 0x20U)) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xcU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x19U] 
        = (((0xfc00U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xaU)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__26__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                     >> 0x14U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xaU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x1aU] 
        = ((0xffffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x1aU]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__27__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0x16U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x1aU] 
        = ((0xffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x1aU]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x1bU] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x18U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x1cU] 
        = (((0xf0U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 4U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__29__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__28__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                          >> 0x20U)) 
                                 >> 0x18U)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 4U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x1dU] 
        = (((0xfcU & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 2U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__30__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                 >> 0x1cU)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__31__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 2U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x1eU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x1fU] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__33__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                   << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__32__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                 >> 0x20U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x20U] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1aU) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__34__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                         >> 4U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x21U] 
        = ((0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x21U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__35__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 6U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x21U] 
        = ((0xffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x21U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x22U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                 << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x23U] 
        = (((0xf00000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x14U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__37__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__36__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                                 >> 0x20U)) 
                                        >> 8U)) | (0xff000000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0x14U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x24U] 
        = (((0xfc0000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x12U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__38__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                        >> 0xcU)) | 
           (0xff000000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                           << 0x12U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x25U] 
        = ((0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x25U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__39__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0xeU));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x25U] 
        = ((0xffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x25U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x26U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x27U] 
        = (((0xf000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xcU)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__41__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__40__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                              >> 0x20U)) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xcU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x28U] 
        = (((0xfc00U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xaU)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__42__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                     >> 0x14U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xaU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x29U] 
        = ((0xffffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x29U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__43__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0x16U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x29U] 
        = ((0xffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x29U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x2aU] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x18U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x2bU] 
        = (((0xf0U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 4U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__45__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__44__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                          >> 0x20U)) 
                                 >> 0x18U)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 4U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x2cU] 
        = (((0xfcU & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 2U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__46__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                 >> 0x1cU)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__47__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 2U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x2dU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x2eU] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__49__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                   << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__48__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                 >> 0x20U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x2fU] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1aU) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__50__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                         >> 4U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x30U] 
        = ((0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x30U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__51__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 6U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x30U] 
        = ((0xffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x30U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x31U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                 << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x32U] 
        = (((0xf00000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x14U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__53__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__52__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                                 >> 0x20U)) 
                                        >> 8U)) | (0xff000000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0x14U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x33U] 
        = (((0xfc0000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x12U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__54__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                        >> 0xcU)) | 
           (0xff000000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                           << 0x12U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x34U] 
        = ((0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x34U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__55__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0xeU));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x34U] 
        = ((0xffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x34U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x35U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x36U] 
        = (((0xf000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xcU)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__57__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__56__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                              >> 0x20U)) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xcU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x37U] 
        = (((0xfc00U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xaU)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__58__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                     >> 0x14U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xaU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x38U] 
        = ((0xffffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x38U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__59__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0x16U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x38U] 
        = ((0xffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x38U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x39U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x18U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x3aU] 
        = (((0xf0U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 4U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__61__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__60__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                          >> 0x20U)) 
                                 >> 0x18U)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 4U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x3bU] 
        = (((0xfcU & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 2U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__62__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                 >> 0x1cU)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__63__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 2U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x3cU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x3dU] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__65__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                   << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__64__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                 >> 0x20U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x3eU] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1aU) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__66__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                         >> 4U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x3fU] 
        = ((0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x3fU]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__67__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 6U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x3fU] 
        = ((0xffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x3fU]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x40U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                 << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x41U] 
        = (((0xf00000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x14U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__69__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__68__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                                 >> 0x20U)) 
                                        >> 8U)) | (0xff000000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0x14U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x42U] 
        = (((0xfc0000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x12U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__70__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                        >> 0xcU)) | 
           (0xff000000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                           << 0x12U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x43U] 
        = ((0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x43U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__71__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0xeU));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x43U] 
        = ((0xffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x43U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x44U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x45U] 
        = (((0xf000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xcU)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__73__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__72__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                              >> 0x20U)) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xcU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x46U] 
        = (((0xfc00U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xaU)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__74__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                     >> 0x14U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xaU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x47U] 
        = ((0xffffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x47U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__75__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0x16U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x47U] 
        = ((0xffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x47U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x48U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x18U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x49U] 
        = (((0xf0U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 4U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__77__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__76__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                          >> 0x20U)) 
                                 >> 0x18U)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 4U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x4aU] 
        = (((0xfcU & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 2U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__78__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                 >> 0x1cU)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__79__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 2U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x4bU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x4cU] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__81__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                   << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__80__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                 >> 0x20U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x4dU] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1aU) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__82__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                         >> 4U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x4eU] 
        = ((0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x4eU]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__83__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 6U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x4eU] 
        = ((0xffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x4eU]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__85__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__84__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x4fU] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__85__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__84__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__85__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                 << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__84__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x50U] 
        = (((0xf00000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__86__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x14U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__85__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__84__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                                 >> 0x20U)) 
                                        >> 8U)) | (0xff000000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__86__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0x14U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x51U] 
        = (((0xfc0000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__87__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x12U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__86__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                        >> 0xcU)) | 
           (0xff000000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__87__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                           << 0x12U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x52U] 
        = ((0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x52U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__87__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0xeU));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x52U] 
        = ((0xffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x52U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__89__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__88__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x53U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__89__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__88__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__89__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__88__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x54U] 
        = (((0xf000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__90__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xcU)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__89__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__88__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                              >> 0x20U)) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__90__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xcU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x55U] 
        = (((0xfc00U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__91__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xaU)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__90__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                     >> 0x14U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__91__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xaU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x56U] 
        = ((0xffffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x56U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__91__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0x16U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x56U] 
        = ((0xffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x56U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__93__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__92__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x57U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__93__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__92__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x18U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__93__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__92__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x58U] 
        = (((0xf0U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__94__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 4U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__93__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__92__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                          >> 0x20U)) 
                                 >> 0x18U)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__94__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 4U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x59U] 
        = (((0xfcU & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__95__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 2U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__94__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                 >> 0x1cU)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__95__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 2U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x5aU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x5bU] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__97__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                   << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__96__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                 >> 0x20U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x5cU] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1aU) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__98__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                         >> 4U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x5dU] 
        = ((0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x5dU]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__99__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 6U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x5dU] 
        = ((0xffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x5dU]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x5eU] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                 << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x5fU] 
        = (((0xf00000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x14U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__101__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__100__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                                 >> 0x20U)) 
                                        >> 8U)) | (0xff000000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0x14U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x60U] 
        = (((0xfc0000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x12U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__102__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                        >> 0xcU)) | 
           (0xff000000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                           << 0x12U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x61U] 
        = ((0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x61U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__103__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0xeU));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x61U] 
        = ((0xffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x61U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x62U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x63U] 
        = (((0xf000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xcU)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__105__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__104__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                              >> 0x20U)) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xcU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x64U] 
        = (((0xfc00U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xaU)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__106__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                     >> 0x14U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xaU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x65U] 
        = ((0xffffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x65U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__107__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0x16U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x65U] 
        = ((0xffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x65U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x66U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x18U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x67U] 
        = (((0xf0U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 4U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__109__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__108__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                          >> 0x20U)) 
                                 >> 0x18U)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 4U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x68U] 
        = (((0xfcU & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 2U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__110__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                 >> 0x1cU)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__111__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 2U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x69U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6aU] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__113__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                   << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__112__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                 >> 0x20U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6bU] 
        = ((vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
            << 0x1aU) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__114__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                         >> 4U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6cU] 
        = ((0xff000000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6cU]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__115__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 6U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6cU] 
        = ((0xffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6cU]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6dU] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                 << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6eU] 
        = (((0xf00000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x14U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__117__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__116__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                                 >> 0x20U)) 
                                        >> 8U)) | (0xff000000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0x14U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x6fU] 
        = (((0xfc0000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                          << 0x12U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__118__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                        >> 0xcU)) | 
           (0xff000000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                           << 0x12U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x70U] 
        = ((0xffff0000U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x70U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__119__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0xeU));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x70U] 
        = ((0xffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x70U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x71U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x72U] 
        = (((0xf000U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xcU)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__121__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__120__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                              >> 0x20U)) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xcU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x73U] 
        = (((0xfc00U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                        << 0xaU)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__122__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                     >> 0x14U)) | (0xffff0000U 
                                                   & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                      << 0xaU)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x74U] 
        = ((0xffffff00U & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x74U]) 
           | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__123__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
              >> 0x16U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x74U] 
        = ((0xffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x74U]) 
           | ((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                        << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
              << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x75U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                      << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)))) 
            >> 0x18U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                    << 0x1eU) | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x76U] 
        = (((0xf0U & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 4U)) | ((IData)(((((QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__125__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c)) 
                                            << 0x1eU) 
                                           | (QData)((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__124__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c))) 
                                          >> 0x20U)) 
                                 >> 0x18U)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 4U)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group[0x77U] 
        = (((0xfcU & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                      << 2U)) | (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__126__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                 >> 0x1cU)) | (0xffffff00U 
                                               & (vlSymsp->TOP__ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__genblk7__BRA__127__KET____DOT__ysyx_22040632_walloc_32bits_i.__PVT__c 
                                                  << 2U)));
    vlSymsp->TOP__ysyx_22040632_top__DOT__immem.w_hs 
        = ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
           & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg) 
              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_hs)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_done 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_hs) 
           & (IData)(vlSelf->axi_r_last_i));
    vlSymsp->TOP__ysyx_22040632_top__DOT__imif.r_hs 
        = ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
           & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)) 
              & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_hs)));
    VL_SEL_WWII(3810,3840, __Vtemp_h8fe1d2a3__0, vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cout_group, 0U, 0xee2U);
    VL_AND_W(120, __Vtemp_h257682a8__0, Vysyx_22040632_top__ConstPool__CONST_hdc299712_0, __Vtemp_h8fe1d2a3__0);
    VL_CONCAT_WWI(3840,3810,30, __Vtemp_hace16e33__0, __Vtemp_h257682a8__0, 
                  (0x3fffffffU & vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__c));
    VL_ASSIGN_W(3840,vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mul_i__DOT__cin, __Vtemp_hace16e33__0);
    vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.w_last 
        = ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__idle_flg)) 
           & ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
               ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                   ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.w_hs)
                   : (8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt)))
               : (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.w_last)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_en 
        = (((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__immem.w_hs) 
            | ((1U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)) 
               & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_valid))) 
           & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__trans_done 
        = ((IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.rw_req)
            ? (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_done)
            : (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__b_hs));
    __Vtableidx2 = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_done) 
                     << 4U) | ((((IData)(vlSelf->axi_ar_ready_i) 
                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_ar_valid)) 
                                << 3U) | (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_valid) 
                                           << 2U) | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_state))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__r_state_nxt 
        = Vysyx_22040632_top__ConstPool__TABLE_h4836bee5_0
        [__Vtableidx2];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__rw_sh 
        = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_ifu_i__DOT__uncacheable)
             ? (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imif.r_hs)
             : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__hit_1st) 
                | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_icache_i__DOT__hit_2nd))) 
           & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__if2ic.valid));
    vlSelf->axi_w_last_o = vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.w_last;
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_valid) 
                     << 5U) | ((((IData)(vlSelf->axi_aw_ready_i) 
                                 & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__axi.axi_aw_valid)) 
                                << 4U) | ((((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_hs) 
                                            & (IData)(vlSymsp->TOP__ysyx_22040632_top__DOT__imarb.w_last)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__b_hs) 
                                            << 2U) 
                                           | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__w_state_nxt 
        = Vysyx_22040632_top__ConstPool__TABLE_ha150fa3d_0
        [__Vtableidx1];
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__index 
        = ((1U & (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen) 
                   | (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__wen_sd))) 
                  & ((~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__axi_write_start)) 
                     & (~ (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__axi_write_en)))))
            ? (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index) 
                << 2U) | (3U & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                        >> 4U)))) : 
           ((8U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt))
             ? (((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index) 
                 << 2U) | (3U & (IData)((vlSymsp->TOP__ysyx_22040632_top__DOT__ex2mem.data2mem 
                                         >> 4U)))) : 
            ((4U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt))
              ? ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt))
                  ? (3U | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index) 
                           << 2U)) : (2U | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index) 
                                            << 2U)))
              : ((2U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__w_cnt))
                  ? (1U | ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index) 
                           << 2U)) : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__addr_index) 
                                      << 2U)))));
    vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__rw_ready_en 
        = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__trans_done) 
           | (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_rw_i__DOT__rw_ready));
    if ((0x40U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__index))) {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[0U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_01[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[1U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_01[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[2U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_01[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[3U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_01[3U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[0U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_11[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[1U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_11[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[2U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_11[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[3U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_11[3U];
    } else {
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[0U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_00[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[1U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_00[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[2U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_00[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[3U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_00[3U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[0U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_10[0U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[1U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_10[1U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[2U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_10[2U];
        vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[3U] 
            = vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__ysyx_22040632_ddata_array_d__DOT__Q_10[3U];
    }
    vlSelf->axi_w_data_o = ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_arbiter_i__DOT__mem_flg)
                             ? ((8U == (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cs))
                                 ? ((0x20U & (IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__cnt_f))
                                     ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[0U])))
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[2U]))))
                                     : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[0U])))
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[2U])))))
                                 : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__uncacheable)
                                     ? vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_mem_i__DOT__data2sd
                                     : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_way)
                                         ? ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                             ? (((QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[0U])))
                                             : (((QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_2ndway[2U]))))
                                         : ((IData)(vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__w_cnt)
                                             ? (((QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[0U])))
                                             : (((QData)((IData)(
                                                                 vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ysyx_22040632_top__DOT__ysyx_22040632_dcache_i__DOT__data_out_1stway[2U])))))))
                             : vlSymsp->TOP__ysyx_22040632_top__DOT__imif.rw_w_data);
}
